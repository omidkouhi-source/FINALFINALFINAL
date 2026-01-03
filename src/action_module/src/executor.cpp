#include "rclcpp/rclcpp.hpp"
#include "rclcpp/executors/multi_threaded_executor.hpp"
#include "action_module/executor.hpp"
#include "action_module/tf_format_utils.hpp"
#include <chrono>
#include <algorithm>
#include <cmath>
using namespace std::chrono_literals;

namespace action_module
{

Executor::Executor()
: Node("action_executor")
{
  service_group_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
  client_group_ = create_callback_group(rclcpp::CallbackGroupType::Reentrant);

  // ----------------------------------
  // Parameters (for direct execution)
  // ----------------------------------
  declare_parameter<std::string>("pick_frame", "");
  declare_parameter<std::string>("place_square", "");
  declare_parameter<std::string>("aruco_frame_prefix", "aruco");
  declare_parameter<bool>("use_sensing_pose", true);
  declare_parameter<double>("segment_pause", 0.0);
  declare_parameter<double>("pick_hover_wait", 5.0);
  declare_parameter<double>("pick_post_wait", 3.0);
  declare_parameter<double>("ik_fallback_z_step", 0.02);
  declare_parameter<int>("ik_fallback_attempts", 3);
  declare_parameter<double>("board_square_size", 0.05);
  declare_parameter<double>("board_origin_x", -0.175);
  declare_parameter<double>("board_origin_y", -0.175);
  declare_parameter<double>("board_yaw", 0.0);
  declare_parameter<bool>("board_swap_xy", true);
  declare_parameter<bool>("board_flip_x", false);
  declare_parameter<bool>("board_flip_y", false);
  declare_parameter<bool>("dry_run", false);
  declare_parameter<double>("workspace_radius", 0.75);

  pick_frame_   = get_parameter("pick_frame").as_string();
  place_square_ = get_parameter("place_square").as_string();
  aruco_frame_prefix_ = get_parameter("aruco_frame_prefix").as_string();
  use_sensing_pose_ = get_parameter("use_sensing_pose").as_bool();
  segment_pause_ = get_parameter("segment_pause").as_double();
  pick_hover_wait_ = get_parameter("pick_hover_wait").as_double();
  pick_post_wait_ = get_parameter("pick_post_wait").as_double();
  ik_fallback_z_step_ = get_parameter("ik_fallback_z_step").as_double();
  ik_fallback_attempts_ = get_parameter("ik_fallback_attempts").as_int();
  dry_run_ = get_parameter("dry_run").as_bool();
  workspace_radius_ = get_parameter("workspace_radius").as_double();
  double board_square_size = get_parameter("board_square_size").as_double();
  double board_origin_x = get_parameter("board_origin_x").as_double();
  double board_origin_y = get_parameter("board_origin_y").as_double();
  double board_yaw = get_parameter("board_yaw").as_double();
  bool board_swap_xy = get_parameter("board_swap_xy").as_bool();
  bool board_flip_x = get_parameter("board_flip_x").as_bool();
  bool board_flip_y = get_parameter("board_flip_y").as_bool();

  // ----------------------------------
  // Construct helpers (will be initialized lazily when needed)
  // ----------------------------------
  // Note: We delay initialization to avoid bad_weak_ptr error
  // Helpers will be created on first use

  // ----------------------------------
  // Board geometry setup
  // ----------------------------------
  planning_module::BoardConfig cfg;
  cfg.square_size = board_square_size;
  cfg.origin_x    = board_origin_x;
  cfg.origin_y    = board_origin_y;
  cfg.yaw         = board_yaw;
  cfg.swap_xy     = board_swap_xy;
  cfg.flip_x      = board_flip_x;
  cfg.flip_y      = board_flip_y;

  board_ = std::make_shared<planning_module::BoardGeometry>(cfg);

  // ----------------------------------
  // Gripper services
  // ----------------------------------
  gripper_open_ =
      create_client<robotiq_85_gripper_server::srv::GripperOpen>("/GripperOpen");

  gripper_close_ =
      create_client<robotiq_85_gripper_server::srv::GripperClose>("/GripperClose");

  // ----------------------------------
  // Sensing module client (for ArUco ID lookup)
  // ----------------------------------
  get_piece_location_client_ =
      create_client<chesslab_setup2_interfaces::srv::GetPieceLocation>(
        "/sensing_module/get_piece_location",
        rmw_qos_profile_services_default,
        client_group_);

  // ----------------------------------
  // MovePiece service (for ArUco ID-based movement)
  // ----------------------------------
  move_piece_service_ = create_service<action_module::srv::MovePiece>(
    "move_piece",
    std::bind(&Executor::handle_move_piece, this,
              std::placeholders::_1, std::placeholders::_2),
    rmw_qos_profile_services_default,
    service_group_);

  // ----------------------------------
  // Initialize helpers using one-shot timer (after node is fully constructed)
  // ----------------------------------
  init_timer_ = create_wall_timer(
    100ms,
    [this]() {
      // Now safe to use shared_from_this()
      auto node_ptr = shared_from_this();
      
      if (!planner_) {
        planner_ = std::make_shared<planning_module::PickPlacePlanner>(node_ptr);
        tf_builder_ = std::make_shared<action_module::TFGraspBuilder>(node_ptr);
        mover_ = std::make_shared<action_module::IKMover>(node_ptr);
        
        RCLCPP_INFO(get_logger(), "Helpers initialized successfully");
        
        // Run sequence if parameters provided
        if (!pick_frame_.empty() && !place_square_.empty())
        {
          RCLCPP_INFO(get_logger(), "Parameters provided: pick_frame=%s, place_square=%s", 
                      pick_frame_.c_str(), place_square_.c_str());
          run_sequence();
        }
        else
        {
          RCLCPP_INFO(get_logger(), "No parameters provided. Waiting for move_piece service calls...");
        }
        
        // Cancel timer after initialization
        init_timer_->cancel();
      }
    });
}

// ============================================================
// Gripper helpers
// ============================================================

void Executor::gripper_open()
{
  auto req = std::make_shared<robotiq_85_gripper_server::srv::GripperOpen::Request>();
  req->order = true;

  if (!gripper_open_->wait_for_service(1s)) {
    RCLCPP_ERROR(get_logger(), "GripperOpen unavailable!");
    return;
  }

  gripper_open_->async_send_request(req);
  RCLCPP_INFO(get_logger(), "[Gripper] OPEN");
}

void Executor::gripper_close()
{
  auto req = std::make_shared<robotiq_85_gripper_server::srv::GripperClose::Request>();
  req->order = true;

  if (!gripper_close_->wait_for_service(1s)) {
    RCLCPP_ERROR(get_logger(), "GripperClose unavailable!");
    return;
  }

  gripper_close_->async_send_request(req);
  RCLCPP_INFO(get_logger(), "[Gripper] CLOSE");
}

// ============================================================
// Service Handler (for ArUco ID-based movement)
// ============================================================

void Executor::ensure_helpers_initialized()
{
  if (!planner_ || !tf_builder_ || !mover_) {
    auto node_ptr = shared_from_this();
    if (!planner_) planner_ = std::make_shared<planning_module::PickPlacePlanner>(node_ptr);
    if (!tf_builder_) tf_builder_ = std::make_shared<action_module::TFGraspBuilder>(node_ptr);
    if (!mover_) mover_ = std::make_shared<action_module::IKMover>(node_ptr);
  }
}

void Executor::handle_move_piece(
  const std::shared_ptr<action_module::srv::MovePiece::Request> request,
  std::shared_ptr<action_module::srv::MovePiece::Response> response)
{
  // Ensure helpers are initialized
  ensure_helpers_initialized();
  
  RCLCPP_INFO(get_logger(), "=== MovePiece service called ===");
  RCLCPP_INFO(get_logger(), "ArUco ID: %d -> Square: %s", 
              request->aruco_id, request->target_square.c_str());

  // Wait for sensing service
  if (!get_piece_location_client_->wait_for_service(2s)) {
    RCLCPP_ERROR(get_logger(), "get_piece_location service unavailable!");
    response->success = false;
    response->message = "Sensing service unavailable";
    return;
  }

  // Call sensing module to get piece location using ArUco ID
  auto piece_req = std::make_shared<chesslab_setup2_interfaces::srv::GetPieceLocation::Request>();
  piece_req->piece_aruco_id = request->aruco_id;

  auto piece_future = get_piece_location_client_->async_send_request(piece_req);

  if (piece_future.wait_for(5s) != std::future_status::ready) {
    RCLCPP_ERROR(get_logger(), "get_piece_location service timeout!");
    response->success = false;
    response->message = "Timeout waiting for piece location";
    return;
  }

  auto piece_res = piece_future.get();
  if (!piece_res->success) {
    RCLCPP_ERROR(get_logger(), "ArUco ID %d not found! %s", 
                 request->aruco_id, piece_res->message.c_str());
    response->success = false;
    response->message = "Piece with ArUco ID " + std::to_string(request->aruco_id) + " not found: " + piece_res->message;
    return;
  }

  // Build ArUco frame name from ID (sensing module uses "aruco_<id>" format)
  std::string pick_frame = aruco_frame_prefix_ + "_" + std::to_string(request->aruco_id);
  RCLCPP_INFO(get_logger(), "Found piece at frame: %s (pose: x=%.3f, y=%.3f, z=%.3f)", 
              pick_frame.c_str(), 
              piece_res->pose.position.x,
              piece_res->pose.position.y,
              piece_res->pose.position.z);

  // Execute the move sequence
  bool success = false;
  if (use_sensing_pose_) {
    geometry_msgs::msg::Pose pick_approach;
    geometry_msgs::msg::Pose pick_grasp;
    geometry_msgs::msg::Pose pick_retreat;

    if (!tf_builder_->build_pick_poses_from_pose(piece_res->pose,
                                                 pick_approach,
                                                 pick_grasp,
                                                 pick_retreat))
    {
      RCLCPP_ERROR(get_logger(), "Failed to build pick poses from sensing pose.");
      response->success = false;
      response->message = "Failed to build pick poses from sensing pose";
      return;
    }

    // Use the precomputed pick poses (already in world frame).
    // Build place poses from square and reuse the standard execution path.
    success = execute_move_sequence(pick_approach, pick_grasp, pick_retreat,
                                    request->target_square);
  } else {
    success = execute_move_sequence(pick_frame, request->target_square);
  }

  response->success = success;
  response->message = success ? 
    "Successfully moved piece (ArUco " + std::to_string(request->aruco_id) + ") to " + request->target_square :
    "Failed to move piece";
}

// ============================================================
// Parameter-based execution (run_sequence)
// ============================================================

void Executor::run_sequence()
{
  // Ensure helpers are initialized
  ensure_helpers_initialized();
  
  RCLCPP_INFO(get_logger(), "=== Starting execution from parameters ===");
  execute_move_sequence(pick_frame_, place_square_);
}

// ============================================================
// Main Execution Sequence
// ============================================================

bool Executor::execute_move_sequence(const std::string & pick_frame, const std::string & target_square)
{
  RCLCPP_INFO(get_logger(), "=== Starting Smooth Pick & Place ===");
  RCLCPP_INFO(get_logger(), "Pick from: %s, Place to: %s", 
              pick_frame.c_str(), target_square.c_str());

  // -----------------------------------------------------
  // 1) PICK POSES (from ArUco)
  // -----------------------------------------------------
  geometry_msgs::msg::Pose pick_approach;
  geometry_msgs::msg::Pose pick_grasp;
  geometry_msgs::msg::Pose pick_retreat;

  if (!tf_builder_->build_pick_poses(pick_frame,
                                     pick_approach,
                                     pick_grasp,
                                     pick_retreat))
  {
    RCLCPP_ERROR(get_logger(), "Failed to build pick poses.");
    return false;
  }

  geometry_msgs::msg::Pose pick_approach_ik;
  geometry_msgs::msg::Pose pick_grasp_ik;
  geometry_msgs::msg::Pose pick_retreat_ik;

  auto check_workspace = [&](const char * label, const geometry_msgs::msg::Pose & p)
  {
    if (!pose_within_workspace(p)) {
      RCLCPP_WARN(get_logger(),
                  "[Workspace] %s pose %s is outside radius %.2fm",
                  label, tf_format::pose_to_string(p).c_str(), workspace_radius_);
    }
  };

  check_workspace("pick approach", pick_approach);
  check_workspace("pick grasp", pick_grasp);
  check_workspace("pick retreat", pick_retreat);

  if (dry_run_) {
    RCLCPP_INFO(get_logger(),
                "[Dry-run] Pick poses (world): approach=%s grasp=%s retreat=%s",
                tf_format::pose_to_string(pick_approach).c_str(),
                tf_format::pose_to_string(pick_grasp).c_str(),
                tf_format::pose_to_string(pick_retreat).c_str());
  }

  if (!tf_builder_->transform_to_ik_frame(pick_approach, pick_approach_ik) ||
      !tf_builder_->transform_to_ik_frame(pick_grasp, pick_grasp_ik) ||
      !tf_builder_->transform_to_ik_frame(pick_retreat, pick_retreat_ik))
  {
    RCLCPP_ERROR(get_logger(), "Failed to transform pick poses to IK base frame.");
    return false;
  }

  // -----------------------------------------------------
  // 2) PLACE POSES (from chess square)
  // -----------------------------------------------------
  geometry_msgs::msg::Pose square_pose =
      board_->square_to_pose(target_square, 0.0);   // 0.0 = square height

  geometry_msgs::msg::Pose place_approach;
  geometry_msgs::msg::Pose place_grasp;
  geometry_msgs::msg::Pose place_retreat;

  if (!tf_builder_->build_place_poses(square_pose,
                                      place_approach,
                                      place_grasp,
                                      place_retreat))
  {
    RCLCPP_ERROR(get_logger(), "Failed to build place poses.");
    return false;
  }

  geometry_msgs::msg::Pose place_approach_ik;
  geometry_msgs::msg::Pose place_grasp_ik;
  geometry_msgs::msg::Pose place_retreat_ik;

  check_workspace("place approach", place_approach);
  check_workspace("place grasp", place_grasp);
  check_workspace("place retreat", place_retreat);
  if (dry_run_) {
    RCLCPP_INFO(get_logger(),
                "[Dry-run] Place poses (world): approach=%s grasp=%s retreat=%s",
                tf_format::pose_to_string(place_approach).c_str(),
                tf_format::pose_to_string(place_grasp).c_str(),
                tf_format::pose_to_string(place_retreat).c_str());
  }

  if (!tf_builder_->transform_to_ik_frame(place_approach, place_approach_ik) ||
      !tf_builder_->transform_to_ik_frame(place_grasp, place_grasp_ik) ||
      !tf_builder_->transform_to_ik_frame(place_retreat, place_retreat_ik))
  {
    RCLCPP_ERROR(get_logger(), "Failed to transform place poses to IK base frame.");
    return false;
  }

  if (dry_run_) {
    RCLCPP_WARN(get_logger(),
                "[Dry-run] Skipping execution. Pick and place poses planned (IK) successfully.");
    return true;
  }

  // -----------------------------------------------------
  // EXECUTE PICK
  // -----------------------------------------------------
  RCLCPP_INFO(get_logger(), "[Pick] Approach...");
  if (!move_with_z_fallback(pick_approach_ik, "pick approach")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to pick approach pose.");
    return false;
  }
  pause_between_segments();
  sleep_for_seconds(pick_hover_wait_);

  RCLCPP_INFO(get_logger(), "[Pick] Descend to grasp...");
  if (!move_with_z_fallback(pick_grasp_ik, "pick grasp")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to pick grasp pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "[Pick] Closing gripper...");
  gripper_close();
  rclcpp::sleep_for(650ms);

  RCLCPP_INFO(get_logger(), "[Pick] Retreat...");
  if (!move_with_z_fallback(pick_retreat_ik, "pick retreat")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to pick retreat pose.");
    return false;
  }
  pause_between_segments();
  sleep_for_seconds(pick_post_wait_);

  // -----------------------------------------------------
  // EXECUTE PLACE
  // -----------------------------------------------------
  RCLCPP_INFO(get_logger(), "[Place] Approach...");
  if (!move_with_z_fallback(place_approach_ik, "place approach")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to place approach pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "[Place] Descend...");
  if (!move_with_z_fallback(place_grasp_ik, "place grasp")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to place grasp pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "[Place] Opening gripper...");
  gripper_open();
  rclcpp::sleep_for(650ms);

  RCLCPP_INFO(get_logger(), "[Place] Retreat...");
  if (!move_with_z_fallback(place_retreat_ik, "place retreat")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to place retreat pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "=== Pick & Place COMPLETE ===");
  return true;
}

bool Executor::execute_move_sequence(const geometry_msgs::msg::Pose & pick_approach,
                                     const geometry_msgs::msg::Pose & pick_grasp,
                                     const geometry_msgs::msg::Pose & pick_retreat,
                                     const std::string & target_square)
{
  RCLCPP_INFO(get_logger(), "=== Starting Smooth Pick & Place (pose-based) ===");
  RCLCPP_INFO(get_logger(), "Place to: %s", target_square.c_str());

  geometry_msgs::msg::Pose pick_approach_ik;
  geometry_msgs::msg::Pose pick_grasp_ik;
  geometry_msgs::msg::Pose pick_retreat_ik;

  auto check_workspace = [&](const char * label, const geometry_msgs::msg::Pose & p)
  {
    if (!pose_within_workspace(p)) {
      RCLCPP_WARN(get_logger(),
                  "[Workspace] %s pose %s is outside radius %.2fm",
                  label, tf_format::pose_to_string(p).c_str(), workspace_radius_);
    }
  };

  check_workspace("pick approach", pick_approach);
  check_workspace("pick grasp", pick_grasp);
  check_workspace("pick retreat", pick_retreat);

  if (dry_run_) {
    RCLCPP_INFO(get_logger(),
                "[Dry-run] Pick poses (world): approach=%s grasp=%s retreat=%s",
                tf_format::pose_to_string(pick_approach).c_str(),
                tf_format::pose_to_string(pick_grasp).c_str(),
                tf_format::pose_to_string(pick_retreat).c_str());
  }

  if (!tf_builder_->transform_to_ik_frame(pick_approach, pick_approach_ik) ||
      !tf_builder_->transform_to_ik_frame(pick_grasp, pick_grasp_ik) ||
      !tf_builder_->transform_to_ik_frame(pick_retreat, pick_retreat_ik))
  {
    RCLCPP_ERROR(get_logger(), "Failed to transform pick poses to IK base frame.");
    return false;
  }

  geometry_msgs::msg::Pose square_pose =
      board_->square_to_pose(target_square, 0.0);

  geometry_msgs::msg::Pose place_approach;
  geometry_msgs::msg::Pose place_grasp;
  geometry_msgs::msg::Pose place_retreat;

  if (!tf_builder_->build_place_poses(square_pose,
                                      place_approach,
                                      place_grasp,
                                      place_retreat))
  {
    RCLCPP_ERROR(get_logger(), "Failed to build place poses.");
    return false;
  }

  geometry_msgs::msg::Pose place_approach_ik;
  geometry_msgs::msg::Pose place_grasp_ik;
  geometry_msgs::msg::Pose place_retreat_ik;

  check_workspace("place approach", place_approach);
  check_workspace("place grasp", place_grasp);
  check_workspace("place retreat", place_retreat);
  if (dry_run_) {
    RCLCPP_INFO(get_logger(),
                "[Dry-run] Place poses (world): approach=%s grasp=%s retreat=%s",
                tf_format::pose_to_string(place_approach).c_str(),
                tf_format::pose_to_string(place_grasp).c_str(),
                tf_format::pose_to_string(place_retreat).c_str());
  }

  if (!tf_builder_->transform_to_ik_frame(place_approach, place_approach_ik) ||
      !tf_builder_->transform_to_ik_frame(place_grasp, place_grasp_ik) ||
      !tf_builder_->transform_to_ik_frame(place_retreat, place_retreat_ik))
  {
    RCLCPP_ERROR(get_logger(), "Failed to transform place poses to IK base frame.");
    return false;
  }

  if (dry_run_) {
    RCLCPP_WARN(get_logger(),
                "[Dry-run] Skipping execution. Pick and place poses planned (IK) successfully.");
    return true;
  }

  RCLCPP_INFO(get_logger(), "[Pick] Approach...");
  if (!move_with_z_fallback(pick_approach_ik, "pick approach")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to pick approach pose.");
    return false;
  }
  pause_between_segments();
  sleep_for_seconds(pick_hover_wait_);

  RCLCPP_INFO(get_logger(), "[Pick] Descend to grasp...");
  if (!move_with_z_fallback(pick_grasp_ik, "pick grasp")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to pick grasp pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "[Pick] Closing gripper...");
  gripper_close();
  rclcpp::sleep_for(650ms);

  RCLCPP_INFO(get_logger(), "[Pick] Retreat...");
  if (!move_with_z_fallback(pick_retreat_ik, "pick retreat")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to pick retreat pose.");
    return false;
  }
  pause_between_segments();
  sleep_for_seconds(pick_post_wait_);

  RCLCPP_INFO(get_logger(), "[Place] Approach...");
  if (!move_with_z_fallback(place_approach_ik, "place approach")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to place approach pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "[Place] Descend...");
  if (!move_with_z_fallback(place_grasp_ik, "place grasp")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to place grasp pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "[Place] Opening gripper...");
  gripper_open();
  rclcpp::sleep_for(650ms);

  RCLCPP_INFO(get_logger(), "[Place] Retreat...");
  if (!move_with_z_fallback(place_retreat_ik, "place retreat")) {
    RCLCPP_ERROR(get_logger(), "Failed to move to place retreat pose.");
    return false;
  }
  pause_between_segments();

  RCLCPP_INFO(get_logger(), "=== Pick & Place COMPLETE ===");
  return true;
}

void Executor::pause_between_segments()
{
  if (segment_pause_ > 0.0) {
    auto pause_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
      std::chrono::duration<double>(segment_pause_));
    rclcpp::sleep_for(pause_ns);
  }
}

void Executor::sleep_for_seconds(double seconds)
{
  if (seconds <= 0.0) {
    return;
  }
  auto wait_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
    std::chrono::duration<double>(seconds));
  rclcpp::sleep_for(wait_ns);
}

bool Executor::move_with_z_fallback(geometry_msgs::msg::Pose & pose, const char * label)
{
  geometry_msgs::msg::Pose attempt = pose;
  int attempts = std::max(0, ik_fallback_attempts_);

  for (int i = 0; i <= attempts; ++i) {
    if (mover_->move_to_pose(attempt)) {
      pose = attempt;
      return true;
    }

    if (i == attempts) {
      break;
    }

    double next_z = attempt.position.z - ik_fallback_z_step_;
    if (next_z < 0.0) {
      next_z = 0.0;
    }
    RCLCPP_WARN(get_logger(),
                "IK failed for %s (z=%.3f). Retrying at z=%.3f",
                label, attempt.position.z, next_z);
    attempt.position.z = next_z;
  }

  RCLCPP_ERROR(get_logger(), "IK failed for %s after %d fallback attempts.",
               label, attempts);
  return false;
}

bool Executor::pose_within_workspace(const geometry_msgs::msg::Pose & pose) const
{
  if (workspace_radius_ <= 0.0) {
    return true;
  }

  double r = std::hypot(pose.position.x, pose.position.y);
  return r <= workspace_radius_;
}

} // namespace action_module

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<action_module::Executor>();
  rclcpp::executors::MultiThreadedExecutor exec(rclcpp::ExecutorOptions(), 2);
  exec.add_node(node);
  exec.spin();
  rclcpp::shutdown();
  return 0;
}
