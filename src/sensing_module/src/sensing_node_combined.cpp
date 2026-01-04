// Combined sensing_node.cpp - All-in-one implementation
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <chrono>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "chesslab_setup2_interfaces/srv/detect_piece_poses.hpp"
#include "chesslab_setup2_interfaces/srv/get_piece_location.hpp"
#include "chesslab_setup2_interfaces/srv/verify_pick_place.hpp"
#include "chesslab_setup2_interfaces/srv/validate_chess_action.hpp"
#include "chesslab_setup2_interfaces/srv/set_obj_pose.hpp"

using namespace std::chrono_literals;

namespace sensing_module
{

class SensingNode : public rclcpp::Node
{
public:
  SensingNode();
  ~SensingNode() = default;

private:
  // TF2 components
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

  // Service clients
  rclcpp::Client<chesslab_setup2_interfaces::srv::SetObjPose>::SharedPtr set_obj_pose_client_;

  // Service servers
  rclcpp::Service<chesslab_setup2_interfaces::srv::DetectPiecePoses>::SharedPtr detect_pieces_service_;
  rclcpp::Service<chesslab_setup2_interfaces::srv::GetPieceLocation>::SharedPtr get_location_service_;
  rclcpp::Service<chesslab_setup2_interfaces::srv::VerifyPickPlace>::SharedPtr verify_pick_place_service_;
  rclcpp::Service<chesslab_setup2_interfaces::srv::ValidateChessAction>::SharedPtr validate_action_service_;

  // Chess piece aruco IDs mapping
  std::vector<int> black_piece_ids_;
  std::vector<int> white_piece_ids_;
  std::map<int, double> piece_heights_;

  // Parameters
  std::string world_frame_;
  std::string camera_frame_;
  std::string aruco_frame_prefix_;
  double tf_timeout_;
  double pose_offset_x_;
  double pose_offset_y_;
  double pose_offset_z_;
  bool auto_detect_on_start_;

  rclcpp::TimerBase::SharedPtr init_detect_timer_;

  // Helper methods
  void initializePieceIds();
  void initializePieceHeights();
  bool getPieceTransform(int piece_id, geometry_msgs::msg::TransformStamped& transform);
  geometry_msgs::msg::Pose transformToPose(const geometry_msgs::msg::TransformStamped& transform);
  bool setPieceInRviz(int piece_id, const geometry_msgs::msg::Pose& pose);
  std::string getPieceType(int piece_id);
  
  // Service callbacks
  void detectPiecePosesCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::DetectPiecePoses::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::DetectPiecePoses::Response> response);
  
  void getPieceLocationCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::GetPieceLocation::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::GetPieceLocation::Response> response);
  
  void verifyPickPlaceCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::VerifyPickPlace::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::VerifyPickPlace::Response> response);
  
  void validateChessActionCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::ValidateChessAction::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::ValidateChessAction::Response> response);

  // Chess board utilities
  bool isValidChessCell(const std::string& cell);
  geometry_msgs::msg::Point getCellPosition(const std::string& cell);
};

// ============================================================================
// Implementation
// ============================================================================

SensingNode::SensingNode() : Node("sensing_node")
{
  // Declare and get parameters
  this->declare_parameter<std::string>("world_frame", "world");
  this->declare_parameter<std::string>("camera_frame", "camera_color_optical_frame");
  this->declare_parameter<std::string>("aruco_frame_prefix", "aruco");
  this->declare_parameter<double>("tf_timeout", 2.0);
  this->declare_parameter<double>("pose_offset_x", 0.0);
  this->declare_parameter<double>("pose_offset_y", 0.0);
  this->declare_parameter<double>("pose_offset_z", 0.0);
  this->declare_parameter<bool>("auto_detect_on_start", true);

  this->get_parameter("world_frame", world_frame_);
  this->get_parameter("camera_frame", camera_frame_);
  this->get_parameter("aruco_frame_prefix", aruco_frame_prefix_);
  this->get_parameter("tf_timeout", tf_timeout_);
  this->get_parameter("pose_offset_x", pose_offset_x_);
  this->get_parameter("pose_offset_y", pose_offset_y_);
  this->get_parameter("pose_offset_z", pose_offset_z_);
  this->get_parameter("auto_detect_on_start", auto_detect_on_start_);

  RCLCPP_INFO(this->get_logger(), "Starting Sensing Module Node");
  RCLCPP_INFO(this->get_logger(), "  World frame: %s", world_frame_.c_str());
  RCLCPP_INFO(this->get_logger(), "  Camera frame: %s", camera_frame_.c_str());
  RCLCPP_INFO(this->get_logger(), "  Aruco frame prefix: %s", aruco_frame_prefix_.c_str());
  RCLCPP_INFO(this->get_logger(), "  Pose offset: (%.3f, %.3f, %.3f)",
              pose_offset_x_, pose_offset_y_, pose_offset_z_);
  RCLCPP_INFO(this->get_logger(), "  Auto-detect on start: %s",
              auto_detect_on_start_ ? "true" : "false");

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

  if (auto_detect_on_start_) {
    init_detect_timer_ = this->create_wall_timer(
      1s, [this]() {
        auto req = std::make_shared<chesslab_setup2_interfaces::srv::DetectPiecePoses::Request>();
        auto res = std::make_shared<chesslab_setup2_interfaces::srv::DetectPiecePoses::Response>();
        detectPiecePosesCallback(req, res);
        RCLCPP_INFO(this->get_logger(),
                    "Initial auto-detect complete: success=%s, detected=%u, msg=%s",
                    res->success ? "true" : "false",
                    res->num_pieces_detected,
                    res->message.c_str());
        init_detect_timer_->cancel();
      });
  }

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
  
  try {
    transform = tf_buffer_->lookupTransform(
      world_frame_, 
      aruco_frame,
      tf2::TimePointZero,
      tf2::durationFromSec(tf_timeout_));
    return true;
  } catch (tf2::TransformException& ex) {
    RCLCPP_DEBUG(this->get_logger(), "Could not get transform for piece %d: %s", 
                 piece_id, ex.what());
    return false;
  }
}

geometry_msgs::msg::Pose SensingNode::transformToPose(
  const geometry_msgs::msg::TransformStamped& transform)
{
  geometry_msgs::msg::Pose pose;
  pose.position.x = transform.transform.translation.x;
  pose.position.y = transform.transform.translation.y;
  pose.position.z = transform.transform.translation.z;
  pose.position.x += pose_offset_x_;
  pose.position.y += pose_offset_y_;
  pose.position.z += pose_offset_z_;
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

  // Send request asynchronously and don't wait for response
  // This prevents blocking the service callback executor
  auto result_future = set_obj_pose_client_->async_send_request(request);
  
  // Check if the future is valid, but don't block waiting for it
  // The piece will be set in RViz asynchronously
  return true;
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
  
  int detected_count = 0;
  std::vector<int> all_pieces = black_piece_ids_;
  all_pieces.insert(all_pieces.end(), white_piece_ids_.begin(), white_piece_ids_.end());

  for (int piece_id : all_pieces) {
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
      }
    }
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
    
    // Adjust z position to be at the center of the piece
    response->pose.position.z = piece_heights_[piece_id] / 2.0;
    
    response->success = true;
    response->message = "Successfully located piece " + std::to_string(piece_id);
    
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
