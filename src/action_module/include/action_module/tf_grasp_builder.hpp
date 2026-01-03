#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/transform_listener.h>

namespace action_module
{

class TFGraspBuilder
{
public:
  explicit TFGraspBuilder(rclcpp::Node::SharedPtr node);

  // Build pick and place TF poses
  bool build_pick_poses(const std::string & aruco_frame,
                        geometry_msgs::msg::Pose & approach,
                        geometry_msgs::msg::Pose & grasp,
                        geometry_msgs::msg::Pose & retreat);
  bool build_pick_poses_from_pose(const geometry_msgs::msg::Pose & object_pose,
                                  geometry_msgs::msg::Pose & approach,
                                  geometry_msgs::msg::Pose & grasp,
                                  geometry_msgs::msg::Pose & retreat);

  bool build_place_poses(const geometry_msgs::msg::Pose & square_pose,
                         geometry_msgs::msg::Pose & approach,
                         geometry_msgs::msg::Pose & place,
                         geometry_msgs::msg::Pose & retreat);
  bool transform_to_ik_frame(const geometry_msgs::msg::Pose & world_pose,
                             geometry_msgs::msg::Pose & ik_pose);

private:
  rclcpp::Node::SharedPtr node_;
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
  std::string world_frame_;
  std::string ik_base_frame_;

  bool lookup_pose(const std::string & frame, geometry_msgs::msg::Pose & pose);

  geometry_msgs::msg::Pose offset_pose(const geometry_msgs::msg::Pose & base,
                                       double dx, double dy, double dz);
  void apply_gripper_orientation(geometry_msgs::msg::Pose & pose);

  bool use_fixed_gripper_orientation_;
  tf2::Quaternion fixed_gripper_q_;
  double pick_grasp_z_;
  double pick_approach_z_;
  double pick_retreat_z_;
  double place_grasp_z_;
  double place_approach_z_;
  double place_retreat_z_;
  bool debug_mode_;
};

} // namespace action_module
