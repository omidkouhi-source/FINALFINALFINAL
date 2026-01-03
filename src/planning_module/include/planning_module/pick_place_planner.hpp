#pragma once

#include <string>
#include <vector>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "kinenikros2/srv/inverse_kinematics.hpp"

namespace planning_module
{

class PickPlacePlanner
{
public:
  explicit PickPlacePlanner(const rclcpp::Node::SharedPtr & node);

  bool plan_and_execute_pick(const std::string & target_frame);
  bool plan_and_execute_place(const std::string & target_frame);
  bool plan_and_execute_cartesian_pick(const geometry_msgs::msg::Pose & target_pose);


private:
  rclcpp::Node::SharedPtr node_;

  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

  rclcpp::Client<kinenikros2::srv::InverseKinematics>::SharedPtr ik_client_;
  rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_pub_;

  std::vector<double> current_joints_;
};

}  // namespace planning_module
