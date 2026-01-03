#pragma once

#include <vector>
#include <rclcpp/rclcpp.hpp>  
#include "geometry_msgs/msg/pose.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

namespace planning_module
{

// Very simple representation of a joint-space trajectory: a vector of joint vectors
using JointVector = std::vector<double>;
using JointTrajectory = std::vector<JointVector>;

// Generate a linear interpolation between current and goal joint positions
JointTrajectory interpolate_joints(
  const JointVector & current,
  const JointVector & goal,
  unsigned int steps);

// Helper to build a JointState message from joint positions
sensor_msgs::msg::JointState make_joint_state_msg(
  const JointVector & joints,
  const rclcpp::Time & stamp);

}  // namespace planning_module
