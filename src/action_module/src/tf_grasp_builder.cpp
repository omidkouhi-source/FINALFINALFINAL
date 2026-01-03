#include "action_module/tf_grasp_builder.hpp"
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <chrono>
using namespace std::chrono_literals;


namespace action_module
{

TFGraspBuilder::TFGraspBuilder(rclcpp::Node::SharedPtr node)
: node_(node)
{
  tf_buffer_ = std::make_shared<tf2_ros::Buffer>(node_->get_clock());
  tf_buffer_->setUsingDedicatedThread(true);
  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_, node_, true);
  tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(node_);

  if (!node_->has_parameter("world_frame")) {
    node_->declare_parameter<std::string>("world_frame", "world");
  }
  if (!node_->has_parameter("ik_base_frame")) {
    node_->declare_parameter<std::string>("ik_base_frame", "base");
  }
  if (!node_->has_parameter("use_fixed_gripper_orientation")) {
    node_->declare_parameter<bool>("use_fixed_gripper_orientation", true);
  }
  if (!node_->has_parameter("gripper_roll")) {
    node_->declare_parameter<double>("gripper_roll", 3.14159);
  }
  if (!node_->has_parameter("gripper_pitch")) {
    node_->declare_parameter<double>("gripper_pitch", 0.0);
  }
  if (!node_->has_parameter("gripper_yaw")) {
    node_->declare_parameter<double>("gripper_yaw", 0.0);
  }
  if (!node_->has_parameter("pick_grasp_z")) {
    node_->declare_parameter<double>("pick_grasp_z", 0.18);
  }
  if (!node_->has_parameter("pick_approach_z")) {
    node_->declare_parameter<double>("pick_approach_z", 0.18);
  }
  if (!node_->has_parameter("pick_retreat_z")) {
    node_->declare_parameter<double>("pick_retreat_z", 0.24);
  }
  if (!node_->has_parameter("place_grasp_z")) {
    node_->declare_parameter<double>("place_grasp_z", 0.18);
  }
  if (!node_->has_parameter("place_approach_z")) {
    node_->declare_parameter<double>("place_approach_z", 0.18);
  }
  if (!node_->has_parameter("place_retreat_z")) {
    node_->declare_parameter<double>("place_retreat_z", 0.24);
  }
  world_frame_ = node_->get_parameter("world_frame").as_string();
  ik_base_frame_ = node_->get_parameter("ik_base_frame").as_string();

  use_fixed_gripper_orientation_ =
      node_->get_parameter("use_fixed_gripper_orientation").as_bool();
  double roll = node_->get_parameter("gripper_roll").as_double();
  double pitch = node_->get_parameter("gripper_pitch").as_double();
  double yaw = node_->get_parameter("gripper_yaw").as_double();
  fixed_gripper_q_.setRPY(roll, pitch, yaw);

  pick_grasp_z_ = node_->get_parameter("pick_grasp_z").as_double();
  pick_approach_z_ = node_->get_parameter("pick_approach_z").as_double();
  pick_retreat_z_ = node_->get_parameter("pick_retreat_z").as_double();
  place_grasp_z_ = node_->get_parameter("place_grasp_z").as_double();
  place_approach_z_ = node_->get_parameter("place_approach_z").as_double();
  place_retreat_z_ = node_->get_parameter("place_retreat_z").as_double();
}

// ---------------------------
// Helper: Lookup pose of TF frame
// ---------------------------
bool TFGraspBuilder::lookup_pose(const std::string & frame,
                                 geometry_msgs::msg::Pose & pose)
{
  try {
    auto tf = tf_buffer_->lookupTransform(world_frame_, frame, tf2::TimePointZero, 1s);
    pose.position.x = tf.transform.translation.x;
    pose.position.y = tf.transform.translation.y;
    pose.position.z = tf.transform.translation.z;

    pose.orientation = tf.transform.rotation;
    return true;
  }
  catch (const tf2::TransformException & ex) {
    RCLCPP_ERROR(node_->get_logger(), "TF lookup failed for %s: %s",
                 frame.c_str(), ex.what());
    return false;
  }
}

// ---------------------------
// Helper: Offset pose in world coordinates
// ---------------------------
geometry_msgs::msg::Pose TFGraspBuilder::offset_pose(
  const geometry_msgs::msg::Pose & base,
  double dx, double dy, double dz)
{
  geometry_msgs::msg::Pose p = base;
  p.position.x += dx;
  p.position.y += dy;
  p.position.z += dz;
  return p;
}

// ---------------------------
// Build PICK TFs
// ---------------------------
bool TFGraspBuilder::build_pick_poses(const std::string & aruco_frame,
                                      geometry_msgs::msg::Pose & approach,
                                      geometry_msgs::msg::Pose & grasp,
                                      geometry_msgs::msg::Pose & retreat)
{
  geometry_msgs::msg::Pose object_pose;

  if (!lookup_pose(aruco_frame, object_pose))
    return false;

  return build_pick_poses_from_pose(object_pose, approach, grasp, retreat);
}

bool TFGraspBuilder::build_pick_poses_from_pose(const geometry_msgs::msg::Pose & object_pose,
                                                geometry_msgs::msg::Pose & approach,
                                                geometry_msgs::msg::Pose & grasp,
                                                geometry_msgs::msg::Pose & retreat)
{
  // Create poses with vertical offsets:
  grasp    = offset_pose(object_pose, 0.0, 0.0, pick_grasp_z_);
  approach = offset_pose(object_pose, 0.0, 0.0, pick_approach_z_);
  retreat  = offset_pose(object_pose, 0.0, 0.0, pick_retreat_z_);

  apply_gripper_orientation(grasp);
  apply_gripper_orientation(approach);
  apply_gripper_orientation(retreat);

  // Broadcast TFs (optional visual debugging)
  auto timestamp = node_->now();
  auto send_tf = [&](const std::string & child, const geometry_msgs::msg::Pose & p)
  {
    geometry_msgs::msg::TransformStamped t;
    t.header.stamp = timestamp;
    t.header.frame_id = "world";
    t.child_frame_id = child;
    t.transform.translation.x = p.position.x;
    t.transform.translation.y = p.position.y;
    t.transform.translation.z = p.position.z;
    t.transform.rotation = p.orientation;
    tf_broadcaster_->sendTransform(t);
  };

  send_tf("pick_approach", approach);
  send_tf("pick_grasp", grasp);
  send_tf("pick_retreat", retreat);

  return true;
}

// ---------------------------
// Build PLACE TFs
// square_pose comes from planning_module
// ---------------------------
bool TFGraspBuilder::build_place_poses(const geometry_msgs::msg::Pose & square_pose,
                                       geometry_msgs::msg::Pose & approach,
                                       geometry_msgs::msg::Pose & place,
                                       geometry_msgs::msg::Pose & retreat)
{
  place    = offset_pose(square_pose, 0.0, 0.0, place_grasp_z_);
  approach = offset_pose(square_pose, 0.0, 0.0, place_approach_z_);
  retreat  = offset_pose(square_pose, 0.0, 0.0, place_retreat_z_);

  apply_gripper_orientation(place);
  apply_gripper_orientation(approach);
  apply_gripper_orientation(retreat);

  auto timestamp = node_->now();
  auto send_tf = [&](const std::string & child, const geometry_msgs::msg::Pose & p)
  {
    geometry_msgs::msg::TransformStamped t;
    t.header.stamp = timestamp;
    t.header.frame_id = "world";
    t.child_frame_id = child;
    t.transform.translation.x = p.position.x;
    t.transform.translation.y = p.position.y;
    t.transform.translation.z = p.position.z;
    t.transform.rotation = p.orientation;
    tf_broadcaster_->sendTransform(t);
  };

  send_tf("place_approach", approach);
  send_tf("place_grasp", place);
  send_tf("place_retreat", retreat);

  return true;
}

void TFGraspBuilder::apply_gripper_orientation(geometry_msgs::msg::Pose & pose)
{
  if (!use_fixed_gripper_orientation_) {
    return;
  }

  pose.orientation.x = fixed_gripper_q_.x();
  pose.orientation.y = fixed_gripper_q_.y();
  pose.orientation.z = fixed_gripper_q_.z();
  pose.orientation.w = fixed_gripper_q_.w();
}

bool TFGraspBuilder::transform_to_ik_frame(const geometry_msgs::msg::Pose & world_pose,
                                           geometry_msgs::msg::Pose & ik_pose)
{
  geometry_msgs::msg::PoseStamped in;
  in.header.stamp = node_->now();
  in.header.frame_id = world_frame_;
  in.pose = world_pose;

  auto try_transform = [&](const std::string & target, std::string * error) -> bool {
    try {
      auto out = tf_buffer_->transform(in, target, 1s);
      ik_pose = out.pose;
      return true;
    } catch (const tf2::TransformException & ex) {
      if (error) {
        *error = ex.what();
      }
      return false;
    }
  };

  std::string primary_error;
  if (try_transform(ik_base_frame_, &primary_error)) {
    return true;
  }

  const std::string fallback = (ik_base_frame_ == "base") ? "base_link" : "base";
  if (fallback != ik_base_frame_) {
    std::string fallback_error;
    if (try_transform(fallback, &fallback_error)) {
      RCLCPP_WARN(node_->get_logger(),
                  "Pose transform failed (%s -> %s): %s. Falling back to %s.",
                  world_frame_.c_str(), ik_base_frame_.c_str(), primary_error.c_str(),
                  fallback.c_str());
      return true;
    }

    RCLCPP_ERROR(node_->get_logger(),
                 "Pose transform failed (%s -> %s): %s. Fallback (%s) failed: %s",
                 world_frame_.c_str(), ik_base_frame_.c_str(), primary_error.c_str(),
                 fallback.c_str(), fallback_error.c_str());
  } else {
    RCLCPP_ERROR(node_->get_logger(),
                 "Pose transform failed (%s -> %s): %s",
                 world_frame_.c_str(), ik_base_frame_.c_str(), primary_error.c_str());
    return false;
  }

  return false;
}

} // namespace action_module
