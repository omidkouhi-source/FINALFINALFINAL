#include "sensing_module/sensing_node.h"
#include <chrono>
#include <cmath>
#include <tf2/transform_datatypes.h>
#include <tf2/LinearMath/Transform.h>

using namespace std::chrono_literals;

namespace sensing_module
{

SensingNode::SensingNode() : Node("sensing_node")
{
  // Declare and get parameters
  this->declare_parameter<std::string>("world_frame", "world");
  this->declare_parameter<std::string>("camera_frame", "camera_color_optical_frame");
  this->declare_parameter<std::string>("aruco_frame_prefix", "aruco");
  this->declare_parameter<double>("tf_timeout", 2.0);
  
  // Marker-to-grasp offset parameters (offset from ArUco marker to grasp point)
  // These are applied to convert from marker pose to grasp target pose
  this->declare_parameter<double>("marker_grasp_offset_x", 0.0);
  this->declare_parameter<double>("marker_grasp_offset_y", 0.0);
  this->declare_parameter<double>("marker_grasp_offset_z", 0.0);  // Usually negative (marker is above grasp point)
  this->declare_parameter<bool>("use_detected_z", true);  // Use actual detected Z or hardcoded piece height
  this->declare_parameter<bool>("debug_mode", false);  // Enable detailed debug logging

  this->get_parameter("world_frame", world_frame_);
  this->get_parameter("camera_frame", camera_frame_);
  this->get_parameter("aruco_frame_prefix", aruco_frame_prefix_);
  this->get_parameter("tf_timeout", tf_timeout_);
  this->get_parameter("marker_grasp_offset_x", marker_grasp_offset_x_);
  this->get_parameter("marker_grasp_offset_y", marker_grasp_offset_y_);
  this->get_parameter("marker_grasp_offset_z", marker_grasp_offset_z_);
  this->get_parameter("use_detected_z", use_detected_z_);
  this->get_parameter("debug_mode", debug_mode_);

  RCLCPP_INFO(this->get_logger(), "Starting Sensing Module Node");
  RCLCPP_INFO(this->get_logger(), "  World frame: %s", world_frame_.c_str());
  RCLCPP_INFO(this->get_logger(), "  Camera frame: %s", camera_frame_.c_str());
  RCLCPP_INFO(this->get_logger(), "  Aruco frame prefix: %s", aruco_frame_prefix_.c_str());
  RCLCPP_INFO(this->get_logger(), "  Marker-to-grasp offset: (%.3f, %.3f, %.3f)",
              marker_grasp_offset_x_, marker_grasp_offset_y_, marker_grasp_offset_z_);
  RCLCPP_INFO(this->get_logger(), "  Use detected Z: %s", use_detected_z_ ? "true" : "false");
  RCLCPP_INFO(this->get_logger(), "  Debug mode: %s", debug_mode_ ? "enabled" : "disabled");

  // Initialize TF2
  tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

  // Initialize piece IDs and heights
  initializePieceIds();
  initializePieceHeights();

  // Create service client for setting object poses in rviz
  set_obj_pose_client_ = this->create_client<chesslab_setup2_interfaces::srv::SetObjPose>(
    "/chesslab_setup2_demo/set_object_pose");

  // Create service servers
  detect_pieces_service_ = this->create_service<chesslab_setup2_interfaces::srv::DetectPiecePoses>(
    "/sensing_module/detect_piece_poses",
    std::bind(&SensingNode::detectPiecePosesCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  get_location_service_ = this->create_service<chesslab_setup2_interfaces::srv::GetPieceLocation>(
    "/sensing_module/get_piece_location",
    std::bind(&SensingNode::getPieceLocationCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  verify_pick_place_service_ = this->create_service<chesslab_setup2_interfaces::srv::VerifyPickPlace>(
    "/sensing_module/verify_pick_place",
    std::bind(&SensingNode::verifyPickPlaceCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  validate_action_service_ = this->create_service<chesslab_setup2_interfaces::srv::ValidateChessAction>(
    "/sensing_module/validate_chess_action",
    std::bind(&SensingNode::validateChessActionCallback, this,
              std::placeholders::_1, std::placeholders::_2));

  RCLCPP_INFO(this->get_logger(), "Sensing Module services ready:");
  RCLCPP_INFO(this->get_logger(), "  - /sensing_module/detect_piece_poses");
  RCLCPP_INFO(this->get_logger(), "  - /sensing_module/get_piece_location");
  RCLCPP_INFO(this->get_logger(), "  - /sensing_module/verify_pick_place");
  RCLCPP_INFO(this->get_logger(), "  - /sensing_module/validate_chess_action");
}

void SensingNode::initializePieceIds()
{
  // Black pieces: 201-216
  black_piece_ids_ = {
    201, 202, 203, 204, 205, 206, 207, 208,  // Pawns
    209, 210,  // Rooks
    211, 212,  // Knights
    213, 214,  // Bishops
    215,       // Queen
    216        // King
  };

  // White pieces: 301-316
  white_piece_ids_ = {
    301, 302, 303, 304, 305, 306, 307, 308,  // Pawns
    309, 310,  // Rooks
    311, 312,  // Knights
    313, 314,  // Bishops
    315,       // Queen
    316        // King
  };
}

void SensingNode::initializePieceHeights()
{
  // Pawns: 4 cm
  for (int i = 201; i <= 208; i++) piece_heights_[i] = 0.04;
  for (int i = 301; i <= 308; i++) piece_heights_[i] = 0.04;

  // Rooks, knights, bishops: 6 cm
  for (int i = 209; i <= 214; i++) piece_heights_[i] = 0.06;
  for (int i = 309; i <= 314; i++) piece_heights_[i] = 0.06;

  // Queen and King: 8 cm
  piece_heights_[215] = 0.08;
  piece_heights_[216] = 0.08;
  piece_heights_[315] = 0.08;
  piece_heights_[316] = 0.08;
}

bool SensingNode::getPieceTransform(int piece_id, geometry_msgs::msg::TransformStamped& transform)
{
  std::string aruco_frame = aruco_frame_prefix_ + "_" + std::to_string(piece_id);
  
  // First, try to get transform from world to aruco frame directly
  // TF2 should automatically chain through camera_link -> camera_color_optical_frame -> aruco_<id>
  try {
    transform = tf_buffer_->lookupTransform(
      world_frame_, 
      aruco_frame,
      tf2::TimePointZero,
      tf2::durationFromSec(tf_timeout_));
    return true;
  } catch (tf2::TransformException& ex) {
    // If direct lookup fails, try manual chaining through camera frame
    // This handles cases where the transform chain might be incomplete
    try {
      // Check if aruco frame exists relative to camera
      geometry_msgs::msg::TransformStamped camera_to_aruco;
      camera_to_aruco = tf_buffer_->lookupTransform(
        camera_frame_,
        aruco_frame,
        tf2::TimePointZero,
        tf2::durationFromSec(1.0));
      
      // Get world to camera transform
      geometry_msgs::msg::TransformStamped world_to_camera;
      world_to_camera = tf_buffer_->lookupTransform(
        world_frame_,
        camera_frame_,
        tf2::TimePointZero,
        tf2::durationFromSec(1.0));
      
      // Chain the transforms manually: world -> camera -> aruco
      tf2::Transform tf_world_to_camera, tf_camera_to_aruco, tf_world_to_aruco;
      tf2::fromMsg(world_to_camera.transform, tf_world_to_camera);
      tf2::fromMsg(camera_to_aruco.transform, tf_camera_to_aruco);
      tf_world_to_aruco = tf_world_to_camera * tf_camera_to_aruco;
      
      // Build the result transform
      transform.header.stamp = this->now();
      transform.header.frame_id = world_frame_;
      transform.child_frame_id = aruco_frame;
      transform.transform = tf2::toMsg(tf_world_to_aruco);
      
      return true;
    } catch (tf2::TransformException& ex2) {
      RCLCPP_WARN(this->get_logger(), "Could not get transform for piece %d (frame: %s). Error: %s", 
                   piece_id, aruco_frame.c_str(), ex2.what());
      RCLCPP_DEBUG(this->get_logger(), "  Tried: %s -> %s (direct)", world_frame_.c_str(), aruco_frame.c_str());
      RCLCPP_DEBUG(this->get_logger(), "  Tried: %s -> %s -> %s (chained)", 
                   world_frame_.c_str(), camera_frame_.c_str(), aruco_frame.c_str());
      return false;
    }
  }
}

geometry_msgs::msg::Pose SensingNode::transformToPose(
  const geometry_msgs::msg::TransformStamped& transform)
{
  geometry_msgs::msg::Pose pose;
  pose.position.x = transform.transform.translation.x;
  pose.position.y = transform.transform.translation.y;
  pose.position.z = transform.transform.translation.z;
  pose.orientation = transform.transform.rotation;
  return pose;
}

bool SensingNode::setPieceInRviz(int piece_id, const geometry_msgs::msg::Pose& pose)
{
  if (!set_obj_pose_client_->wait_for_service(1s)) {
    RCLCPP_WARN(this->get_logger(), "SetObjPose service not available");
    return false;
  }

  auto request = std::make_shared<chesslab_setup2_interfaces::srv::SetObjPose::Request>();
  request->objid = piece_id;
  request->p = pose;

  auto result = set_obj_pose_client_->async_send_request(request);
  
  // Wait for the result
  if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result, 2s) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    return true;
  }
  
  RCLCPP_WARN(this->get_logger(), "Failed to set piece %d in rviz", piece_id);
  return false;
}

std::string SensingNode::getPieceType(int piece_id)
{
  if (piece_id >= 201 && piece_id <= 208) return "black_pawn";
  if (piece_id >= 301 && piece_id <= 308) return "white_pawn";
  if (piece_id == 209 || piece_id == 210) return "black_rook";
  if (piece_id == 309 || piece_id == 310) return "white_rook";
  if (piece_id == 211 || piece_id == 212) return "black_knight";
  if (piece_id == 311 || piece_id == 312) return "white_knight";
  if (piece_id == 213 || piece_id == 214) return "black_bishop";
  if (piece_id == 313 || piece_id == 314) return "white_bishop";
  if (piece_id == 215) return "black_queen";
  if (piece_id == 315) return "white_queen";
  if (piece_id == 216) return "black_king";
  if (piece_id == 316) return "white_king";
  return "unknown";
}

void SensingNode::detectPiecePosesCallback(
  const std::shared_ptr<chesslab_setup2_interfaces::srv::DetectPiecePoses::Request> request,
  std::shared_ptr<chesslab_setup2_interfaces::srv::DetectPiecePoses::Response> response)
{
  (void)request; // Unused parameter
  
  RCLCPP_INFO(this->get_logger(), "Detecting chess piece poses...");
  RCLCPP_INFO(this->get_logger(), "Looking for frames: %s_<id> in frame %s", 
              aruco_frame_prefix_.c_str(), world_frame_.c_str());
  
  int detected_count = 0;
  int checked_count = 0;
  std::vector<int> all_pieces = black_piece_ids_;
  all_pieces.insert(all_pieces.end(), white_piece_ids_.begin(), white_piece_ids_.end());

  RCLCPP_INFO(this->get_logger(), "Checking %zu piece IDs...", all_pieces.size());

  for (int piece_id : all_pieces) {
    checked_count++;
    geometry_msgs::msg::TransformStamped transform;
    if (getPieceTransform(piece_id, transform)) {
      geometry_msgs::msg::Pose pose = transformToPose(transform);
      
      // Adjust z position to be at the center of the piece
      // The aruco marker is on top of the piece, so we need to move down
      pose.position.z = piece_heights_[piece_id] / 2.0;
      
      if (setPieceInRviz(piece_id, pose)) {
        detected_count++;
        RCLCPP_INFO(this->get_logger(), "Detected %s (ID: %d) at (%.3f, %.3f, %.3f)",
                    getPieceType(piece_id).c_str(), piece_id,
                    pose.position.x, pose.position.y, pose.position.z);
      } else {
        RCLCPP_WARN(this->get_logger(), "Found transform for piece %d but failed to set in RViz", piece_id);
      }
    }
  }
  
  if (detected_count == 0) {
    RCLCPP_WARN(this->get_logger(), "No pieces detected! Checked %d pieces. Make sure:");
    RCLCPP_WARN(this->get_logger(), "  1. aruco_broadcaster is running");
    RCLCPP_WARN(this->get_logger(), "  2. ArUco markers are visible to the camera");
    RCLCPP_WARN(this->get_logger(), "  3. TF tree has transforms: %s -> %s_<id>", 
                world_frame_.c_str(), aruco_frame_prefix_.c_str());
    RCLCPP_WARN(this->get_logger(), "  4. Check available frames: ros2 run tf2_ros tf2_echo world aruco_316");
  }

  response->success = detected_count > 0;
  response->num_pieces_detected = detected_count;
  response->message = "Detected " + std::to_string(detected_count) + " chess pieces";
  
  RCLCPP_INFO(this->get_logger(), "Detection complete: %d pieces found", detected_count);
}

void SensingNode::getPieceLocationCallback(
  const std::shared_ptr<chesslab_setup2_interfaces::srv::GetPieceLocation::Request> request,
  std::shared_ptr<chesslab_setup2_interfaces::srv::GetPieceLocation::Response> response)
{
  int piece_id = request->piece_aruco_id;
  
  RCLCPP_INFO(this->get_logger(), "Getting location for piece ID: %d", piece_id);
  
  geometry_msgs::msg::TransformStamped transform;
  if (getPieceTransform(piece_id, transform)) {
    response->pose = transformToPose(transform);
    
    // Store raw pose for debug output (only when needed)
    double raw_x, raw_y, raw_z;
    if (debug_mode_) {
      raw_x = response->pose.position.x;
      raw_y = response->pose.position.y;
      raw_z = response->pose.position.z;
    }
    
    // Apply marker-to-grasp offset
    // This converts from the ArUco marker center to the actual grasp point on the piece
    response->pose.position.x += marker_grasp_offset_x_;
    response->pose.position.y += marker_grasp_offset_y_;
    
    // Z position handling:
    // If use_detected_z is true, use the actual detected Z and apply the offset
    // If use_detected_z is false, use the piece height (legacy behavior for compatibility)
    if (use_detected_z_) {
      // Use actual detected Z and apply offset
      // marker_grasp_offset_z should typically be negative since marker is above grasp point
      response->pose.position.z += marker_grasp_offset_z_;
    } else {
      // Legacy behavior: use hardcoded piece height
      response->pose.position.z = piece_heights_[piece_id] / 2.0;
    }
    
    response->success = true;
    response->message = "Successfully located piece " + std::to_string(piece_id);
    
    if (debug_mode_) {
      RCLCPP_INFO(this->get_logger(), "[DEBUG] Piece %d TF chain:", piece_id);
      RCLCPP_INFO(this->get_logger(), "  Raw ArUco pose: (%.4f, %.4f, %.4f)", raw_x, raw_y, raw_z);
      RCLCPP_INFO(this->get_logger(), "  Applied offset: (%.4f, %.4f, %.4f)", 
                  marker_grasp_offset_x_, marker_grasp_offset_y_, marker_grasp_offset_z_);
      RCLCPP_INFO(this->get_logger(), "  Use detected Z: %s", use_detected_z_ ? "true" : "false");
      RCLCPP_INFO(this->get_logger(), "  Final grasp pose: (%.4f, %.4f, %.4f)",
                  response->pose.position.x, response->pose.position.y, response->pose.position.z);
    }
    
    RCLCPP_INFO(this->get_logger(), "Piece %d located at (%.3f, %.3f, %.3f)",
                piece_id, response->pose.position.x, 
                response->pose.position.y, response->pose.position.z);
  } else {
    response->success = false;
    response->message = "Could not find piece " + std::to_string(piece_id);
    RCLCPP_WARN(this->get_logger(), "Failed to locate piece %d", piece_id);
  }
}

void SensingNode::verifyPickPlaceCallback(
  const std::shared_ptr<chesslab_setup2_interfaces::srv::VerifyPickPlace::Request> request,
  std::shared_ptr<chesslab_setup2_interfaces::srv::VerifyPickPlace::Response> response)
{
  int piece_id = request->piece_aruco_id;
  float tolerance = request->tolerance > 0 ? request->tolerance : 0.02;  // Default 2cm tolerance
  
  RCLCPP_INFO(this->get_logger(), "Verifying pick-place for piece %d", piece_id);
  
  geometry_msgs::msg::TransformStamped transform;
  if (getPieceTransform(piece_id, transform)) {
    geometry_msgs::msg::Pose current_pose = transformToPose(transform);
    
    // Calculate distance to target (only x and y, ignore z)
    double dx = current_pose.position.x - request->target_position.x;
    double dy = current_pose.position.y - request->target_position.y;
    float distance = std::sqrt(dx*dx + dy*dy);
    
    response->success = true;
    response->distance_to_target = distance;
    response->piece_at_target = (distance <= tolerance);
    
    if (response->piece_at_target) {
      response->message = "Piece is at target position (distance: " + 
                         std::to_string(distance) + "m)";
      RCLCPP_INFO(this->get_logger(), "Piece %d is at target (%.3fm)", piece_id, distance);
    } else {
      response->message = "Piece is NOT at target (distance: " + 
                         std::to_string(distance) + "m, tolerance: " + 
                         std::to_string(tolerance) + "m)";
      RCLCPP_WARN(this->get_logger(), "Piece %d is %.3fm from target", piece_id, distance);
    }
  } else {
    response->success = false;
    response->piece_at_target = false;
    response->distance_to_target = -1.0;
    response->message = "Could not find piece " + std::to_string(piece_id);
    RCLCPP_ERROR(this->get_logger(), "Failed to verify piece %d", piece_id);
  }
}

void SensingNode::validateChessActionCallback(
  const std::shared_ptr<chesslab_setup2_interfaces::srv::ValidateChessAction::Request> request,
  std::shared_ptr<chesslab_setup2_interfaces::srv::ValidateChessAction::Response> response)
{
  RCLCPP_INFO(this->get_logger(), "Validating chess action: %s -> %s",
              request->from_cell.c_str(), request->to_cell.c_str());
  
  // Basic validation - check if cells are valid chess notation
  bool from_valid = isValidChessCell(request->from_cell);
  bool to_valid = isValidChessCell(request->to_cell);
  
  if (!from_valid || !to_valid) {
    response->success = true;
    response->is_valid = false;
    response->message = "Invalid chess cell notation. Use format like 'a1', 'h8', etc.";
    RCLCPP_WARN(this->get_logger(), "Invalid chess cells: from=%s, to=%s",
                request->from_cell.c_str(), request->to_cell.c_str());
    return;
  }
  
  // For now, just validate the notation format
  // Full chess rule validation would require piece type and game state
  response->success = true;
  response->is_valid = true;
  response->message = "Chess action notation is valid";
  
  RCLCPP_INFO(this->get_logger(), "Chess action %s -> %s is valid",
              request->from_cell.c_str(), request->to_cell.c_str());
}

bool SensingNode::isValidChessCell(const std::string& cell)
{
  // Valid chess cell format: letter(a-h) + number(1-8)
  if (cell.length() != 2) return false;
  
  char col = cell[0];
  char row = cell[1];
  
  return (col >= 'a' && col <= 'h') && (row >= '1' && row <= '8');
}

geometry_msgs::msg::Point SensingNode::getCellPosition(const std::string& cell)
{
  geometry_msgs::msg::Point pos;
  
  if (!isValidChessCell(cell)) {
    return pos;
  }
  
  // Chess cells: columns a-h (0-7), rows 1-8
  // Cell size: 5cm (0.05m)
  // Board center is at (0, 0) in world frame
  // Board is 8 cells x 8 cells = 40cm x 40cm (0.4m x 0.4m)
  // So board extends from -0.2 to +0.2 in both x and y
  
  int col = cell[0] - 'a';  // 0-7
  int row = cell[1] - '1';  // 0-7
  
  // Convert to world coordinates
  // Cell centers: column 'a' at x=-0.175, column 'h' at x=0.175
  // Cell centers: row 1 at y=-0.175, row 8 at y=0.175
  pos.x = -0.175 + col * 0.05;
  pos.y = -0.175 + row * 0.05;
  pos.z = 0.0;
  
  return pos;
}

} // namespace sensing_module

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<sensing_module::SensingNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
