#include "planning_module/motion_planning.hpp"

namespace planning_module
{

JointTrajectory interpolate_joints(
  const JointVector & current,
  const JointVector & goal,
  unsigned int steps)
{
  JointTrajectory traj;

  for (unsigned int i = 0; i <= steps; ++i)
  {
    double t = static_cast<double>(i) / steps;
    JointVector waypoint(current.size());

    for (size_t j = 0; j < current.size(); ++j)
      waypoint[j] = current[j] + t * (goal[j] - current[j]);

    traj.push_back(waypoint);
  }

  return traj;
}

sensor_msgs::msg::JointState make_joint_state_msg(
  const JointVector & joints,
  const rclcpp::Time & stamp)
{
  sensor_msgs::msg::JointState msg;
  msg.header.stamp = stamp;

  msg.name = {
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint"
  };

  msg.position = joints;

  return msg;
}

} // namespace planning_module
