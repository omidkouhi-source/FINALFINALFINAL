#include "planning_module/pick_place_planner.hpp"

namespace planning_module
{

PickPlacePlanner::PickPlacePlanner(const rclcpp::Node::SharedPtr & node)
: node_(node)
{
  tf_buffer_ = std::make_shared<tf2_ros::Buffer>(node_->get_clock());
  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

  ik_client_ = node_->create_client<kinenikros2::srv::InverseKinematics>(
    "inverse_kinematics");

  joint_pub_ = node_->create_publisher<sensor_msgs::msg::JointState>(
    "joint_states", 10);

  // Board configuration (aligns with default chess setup)
  auto get_or_declare = [this](const std::string & name, auto default_value) {
    using T = decltype(default_value);
    if (node_->has_parameter(name)) {
      return node_->get_parameter(name).template get_value<T>();
    }
    return node_->declare_parameter<T>(name, default_value);
  };

  double square_size = get_or_declare("board_square_size", 0.05);
  double origin_x    = get_or_declare("board_origin_x", -0.175);
  double origin_y    = get_or_declare("board_origin_y", -0.175);
  double board_yaw   = get_or_declare("board_yaw", 0.0);
  bool swap_xy       = get_or_declare("board_swap_xy", true);
  bool flip_x        = get_or_declare("board_flip_x", false);
  bool flip_y        = get_or_declare("board_flip_y", false);
  pick_height_offset_  = get_or_declare("pick_height_offset", 0.10);
  place_height_offset_ = get_or_declare("place_height_offset", 0.05);

  BoardConfig cfg{square_size, origin_x, origin_y, board_yaw, swap_xy, flip_x, flip_y};
  board_ = std::make_shared<BoardGeometry>(cfg);
}

bool PickPlacePlanner::resolve_target_pose(const std::string & target,
                                           double height_offset,
                                           geometry_msgs::msg::Pose & pose)
{
  if (board_ && board_->is_valid_square(target)) {
    pose = board_->square_to_pose(target, height_offset);
    return true;
  }

  geometry_msgs::msg::TransformStamped tf;
  try {
    tf = tf_buffer_->lookupTransform(
      "world",
      target,
      tf2::TimePointZero);
  } catch (const tf2::TransformException & ex) {
    RCLCPP_ERROR(node_->get_logger(), "TF error: %s", ex.what());
    return false;
  }

  pose.position.x = tf.transform.translation.x;
  pose.position.y = tf.transform.translation.y;
  pose.position.z = tf.transform.translation.z + height_offset;
  pose.orientation.w = 1.0;
  return true;
}

bool PickPlacePlanner::compute_and_publish(const geometry_msgs::msg::Pose & pose,
                                           const char * label)
{
  auto req = std::make_shared<kinenikros2::srv::InverseKinematics::Request>();
  req->type = "UR3";
  req->pose = pose;

  if (!ik_client_->wait_for_service(std::chrono::seconds(2))) {
    RCLCPP_ERROR(node_->get_logger(), "IK service unavailable");
    return false;
  }

  auto future = ik_client_->async_send_request(req);
  if (future.wait_for(std::chrono::seconds(2)) != std::future_status::ready) {
    RCLCPP_ERROR(node_->get_logger(), "IK timeout");
    return false;
  }

  auto res = future.get();
  if (!res->status || res->ik_solution.empty()) {
    RCLCPP_ERROR(node_->get_logger(), "IK failed");
    return false;
  }

  current_joints_ = res->ik_solution[0].ik;

  sensor_msgs::msg::JointState js;
  js.header.stamp = node_->now();
  js.name = {
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint"
  };
  js.position = current_joints_;

  joint_pub_->publish(js);

  RCLCPP_INFO(node_->get_logger(), "%s command sent", label);
  return true;
}

/* ============================================================
   PICK USING FRAME (working implementation)
   ============================================================ */
bool PickPlacePlanner::plan_and_execute_pick(const std::string & target_frame)
{
  RCLCPP_INFO(node_->get_logger(),
              "Planning PICK using target: %s", target_frame.c_str());

  geometry_msgs::msg::Pose pose;
  if (!resolve_target_pose(target_frame, pick_height_offset_, pose)) {
    return false;
  }

  return compute_and_publish(pose, "Pick");
}

/* ============================================================
   FIXED FUNCTION: CARTESIAN PICK USING RAW POSE
   ============================================================ */
bool PickPlacePlanner::plan_and_execute_cartesian_pick(
  const geometry_msgs::msg::Pose & target_pose)
{
  RCLCPP_INFO(node_->get_logger(),
              "Planning Cartesian PICK at pose (%.3f, %.3f, %.3f)",
              target_pose.position.x,
              target_pose.position.y,
              target_pose.position.z);

  // Build IK request
  auto req = std::make_shared<kinenikros2::srv::InverseKinematics::Request>();
  req->type = "UR3";
  req->pose = target_pose;

  // Wait for IK service
  if (!ik_client_->wait_for_service(std::chrono::seconds(2))) {
    RCLCPP_ERROR(node_->get_logger(), "IK service unavailable");
    return false;
  }

  // Call IK
  auto future = ik_client_->async_send_request(req);
  if (future.wait_for(std::chrono::seconds(2)) != std::future_status::ready) {
    RCLCPP_ERROR(node_->get_logger(), "IK timeout (cartesian pick)");
    return false;
  }

  auto res = future.get();
  if (!res->status || res->ik_solution.empty()) {
    RCLCPP_ERROR(node_->get_logger(), "IK failed (cartesian pick)");
    return false;
  }

  // Extract joints
  current_joints_ = res->ik_solution[0].ik;

  // Publish joints to robot
  sensor_msgs::msg::JointState js;
  js.header.stamp = node_->now();
  js.name = {
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint"
  };
  js.position = current_joints_;

  joint_pub_->publish(js);

  RCLCPP_INFO(node_->get_logger(), "Cartesian pick command sent");
  return true;
}

/* ============================================================
   PLACE (supports chess squares or TF frames)
   ============================================================ */
bool PickPlacePlanner::plan_and_execute_place(const std::string & target_frame)
{
  RCLCPP_INFO(node_->get_logger(),
              "Planning PLACE using target: %s", target_frame.c_str());

  geometry_msgs::msg::Pose pose;
  if (!resolve_target_pose(target_frame, place_height_offset_, pose)) {
    return false;
  }

  return compute_and_publish(pose, "Place");
}

}  // namespace planning_module
