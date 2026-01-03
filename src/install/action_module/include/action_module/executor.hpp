#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>

#include "action_module/ik_mover.hpp"
#include "action_module/tf_grasp_builder.hpp"

#include "planning_module/pick_place_planner.hpp"
#include "planning_module/board_geometry.hpp"
#include <robotiq_85_gripper_server/srv/gripper_open.hpp>
#include <robotiq_85_gripper_server/srv/gripper_close.hpp>
#include "action_module/srv/move_piece.hpp"
#include "chesslab_setup2_interfaces/srv/get_piece_location.hpp"

namespace action_module
{

class Executor : public rclcpp::Node
{
public:
  Executor();

private:
  // Params (for direct frame/square specification)
  std::string pick_frame_;
  std::string place_square_;
  std::string aruco_frame_prefix_;
  bool use_sensing_pose_;
  double segment_pause_;
  double pick_hover_wait_;
  double pick_post_wait_;
  double ik_fallback_z_step_;
  int ik_fallback_attempts_;

  // Helpers
  std::shared_ptr<planning_module::BoardGeometry> board_;
  std::shared_ptr<action_module::TFGraspBuilder> tf_builder_;
  std::shared_ptr<action_module::IKMover> mover_;
  std::shared_ptr<planning_module::PickPlacePlanner> planner_;

  // Gripper clients
  rclcpp::Client<robotiq_85_gripper_server::srv::GripperOpen>::SharedPtr gripper_open_;
  rclcpp::Client<robotiq_85_gripper_server::srv::GripperClose>::SharedPtr gripper_close_;

  // Sensing module client (for ArUco ID lookup)
  rclcpp::Client<chesslab_setup2_interfaces::srv::GetPieceLocation>::SharedPtr get_piece_location_client_;

  // MovePiece service (for ArUco ID-based movement)
  rclcpp::Service<action_module::srv::MovePiece>::SharedPtr move_piece_service_;

  // Callback groups (avoid service-client deadlocks)
  rclcpp::CallbackGroup::SharedPtr service_group_;
  rclcpp::CallbackGroup::SharedPtr client_group_;

  // Initialization timer (to avoid bad_weak_ptr)
  rclcpp::TimerBase::SharedPtr init_timer_;

  void gripper_open();
  void gripper_close();
  
  // Ensure helpers are initialized
  void ensure_helpers_initialized();

  void run_sequence();
  void handle_move_piece(
    const std::shared_ptr<action_module::srv::MovePiece::Request> request,
    std::shared_ptr<action_module::srv::MovePiece::Response> response);
  bool execute_move_sequence(const std::string & pick_frame, const std::string & target_square);
  bool execute_move_sequence(const geometry_msgs::msg::Pose & pick_approach,
                             const geometry_msgs::msg::Pose & pick_grasp,
                             const geometry_msgs::msg::Pose & pick_retreat,
                             const std::string & target_square);
  void pause_between_segments();
  void sleep_for_seconds(double seconds);
  bool move_with_z_fallback(geometry_msgs::msg::Pose & pose, const char * label);
};

} // namespace action_module
