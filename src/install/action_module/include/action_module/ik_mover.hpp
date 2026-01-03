#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <kinenikros2/srv/inverse_kinematics.hpp>

namespace action_module
{

class IKMover
{
public:
  explicit IKMover(rclcpp::Node::SharedPtr node);

  // Perform IK + smooth interpolation motion
  bool move_to_pose(const geometry_msgs::msg::Pose & target_pose);

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<kinenikros2::srv::InverseKinematics>::SharedPtr ik_client_;
  rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr traj_pub_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_sub_;

  std::vector<double> current_joints_;
  std::string ik_robot_type_;
  std::string trajectory_topic_;
  int traj_steps_;
  double traj_dt_;
  bool wait_for_traj_;

  bool compute_ik(const geometry_msgs::msg::Pose & pose, std::vector<double> & solution);
  void smooth_interpolate(const std::vector<double> & target);
};

} // namespace action_module
