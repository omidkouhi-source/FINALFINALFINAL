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
}

/* ============================================================
   PICK USING FRAME (working implementation)
   ============================================================ */
bool PickPlacePlanner::plan_and_execute_pick(const std::string & target_frame)
{
  RCLCPP_INFO(node_->get_logger(),
              "Planning PICK using frame: %s", target_frame.c_str());

  geometry_msgs::msg::TransformStamped tf;
  try {
    tf = tf_buffer_->lookupTransform(
      "world",
      target_frame,
      tf2::TimePointZero);
  } catch (const tf2::TransformException & ex) {
    RCLCPP_ERROR(node_->get_logger(), "TF error: %s", ex.what());
    return false;
  }

  // Build pose for IK
  geometry_msgs::msg::Pose pose;
  pose.position.x = tf.transform.translation.x;
  pose.position.y = tf.transform.translation.y;
  pose.position.z = tf.transform.translation.z + 0.10;  // 10cm above piece
  pose.orientation.w = 1.0;

  // Build IK request
  auto req = std::make_shared<kinenikros2::srv::InverseKinematics::Request>();
  req->type = "UR3";
  req->pose = pose;

  // Wait for IK service
  if (!ik_client_->wait_for_service(std::chrono::seconds(2))) {
    RCLCPP_ERROR(node_->get_logger(), "IK service unavailable");
    return false;
  }

  // Call IK
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

  // Extract solution
  current_joints_ = res->ik_solution[0].ik;

  // Publish to robot
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

  RCLCPP_INFO(node_->get_logger(), "Pick command sent");
  return true;
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
   PLACE (currently same logic as PICK)
   ============================================================ */
bool PickPlacePlanner::plan_and_execute_place(const std::string & target_frame)
{
  RCLCPP_INFO(node_->get_logger(),
              "Planning PLACE using frame: %s", target_frame.c_str());

  return plan_and_execute_pick(target_frame);
}

}  // namespace planning_module
