#pragma once

#include <string>
#include <cstdio>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>

namespace action_module
{
namespace tf_format
{

inline std::string pose_to_string(const geometry_msgs::msg::Pose & pose)
{
  tf2::Quaternion q(pose.orientation.x,
                    pose.orientation.y,
                    pose.orientation.z,
                    pose.orientation.w);
  double roll, pitch, yaw;
  tf2::Matrix3x3(q).getRPY(roll, pitch, yaw);

  char buffer[256];
  std::snprintf(buffer, sizeof(buffer),
                "t=[%.4f, %.4f, %.4f] q=[%.4f, %.4f, %.4f, %.4f] rpy=[%.3f, %.3f, %.3f]",
                pose.position.x, pose.position.y, pose.position.z,
                pose.orientation.x, pose.orientation.y,
                pose.orientation.z, pose.orientation.w,
                roll, pitch, yaw);
  return std::string(buffer);
}

inline std::string transform_to_string(const geometry_msgs::msg::TransformStamped & tf)
{
  geometry_msgs::msg::Pose pose;
  pose.position.x = tf.transform.translation.x;
  pose.position.y = tf.transform.translation.y;
  pose.position.z = tf.transform.translation.z;
  pose.orientation = tf.transform.rotation;
  return pose_to_string(pose);
}

}  // namespace tf_format
}  // namespace action_module
