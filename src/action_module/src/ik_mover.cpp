#include "action_module/ik_mover.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <chrono>

using namespace std::chrono_literals;

namespace action_module
{

IKMover::IKMover(rclcpp::Node::SharedPtr node)
: node_(node),
  current_joints_({0, 0, 0, 0, 0, 0})
{
  if (!node_->has_parameter("ik_robot_type")) {
    node_->declare_parameter<std::string>("ik_robot_type", "UR3");
  }
  if (!node_->has_parameter("trajectory_topic")) {
    node_->declare_parameter<std::string>(
      "trajectory_topic", "/joint_trajectory_controller/joint_trajectory");
  }
  if (!node_->has_parameter("traj_steps")) {
    node_->declare_parameter<int>("traj_steps", 40);
  }
  if (!node_->has_parameter("traj_dt")) {
    node_->declare_parameter<double>("traj_dt", 0.05);
  }
  if (!node_->has_parameter("wait_for_traj")) {
    node_->declare_parameter<bool>("wait_for_traj", true);
  }

  ik_robot_type_ = node_->get_parameter("ik_robot_type").as_string();
  trajectory_topic_ = node_->get_parameter("trajectory_topic").as_string();
  traj_steps_ = node_->get_parameter("traj_steps").as_int();
  traj_dt_ = node_->get_parameter("traj_dt").as_double();
  wait_for_traj_ = node_->get_parameter("wait_for_traj").as_bool();

  ik_client_ = node_->create_client<kinenikros2::srv::InverseKinematics>("inverse_kinematics");

  traj_pub_ = node_->create_publisher<trajectory_msgs::msg::JointTrajectory>(
    trajectory_topic_, 10);

  joint_sub_ = node_->create_subscription<sensor_msgs::msg::JointState>(
    "joint_states",
    10,
    [this](const sensor_msgs::msg::JointState::SharedPtr msg) {
      static const std::array<const char *, 6> names = {
        "shoulder_pan_joint",
        "shoulder_lift_joint",
        "elbow_joint",
        "wrist_1_joint",
        "wrist_2_joint",
        "wrist_3_joint"
      };

      std::vector<double> updated(6, 0.0);
      for (size_t i = 0; i < names.size(); ++i) {
        auto it = std::find(msg->name.begin(), msg->name.end(), names[i]);
        if (it == msg->name.end()) {
          return;
        }
        size_t idx = static_cast<size_t>(std::distance(msg->name.begin(), it));
        if (idx >= msg->position.size()) {
          return;
        }
        updated[i] = msg->position[idx];
      }
      current_joints_ = updated;
    });
}

bool IKMover::compute_ik(const geometry_msgs::msg::Pose & pose,
                         std::vector<double> & solution)
{
  auto req = std::make_shared<kinenikros2::srv::InverseKinematics::Request>();
  req->type = ik_robot_type_;
  req->pose = pose;

  if (!ik_client_->wait_for_service(2s)) {
    RCLCPP_ERROR(node_->get_logger(), "IK service unavailable");
    return false;
  }

  auto future = ik_client_->async_send_request(req);

  if (future.wait_for(2s) != std::future_status::ready) {
    RCLCPP_ERROR(node_->get_logger(), "IK timeout");
    return false;
  }

  auto res = future.get();
  if (!res->status || res->ik_solution.empty()) {
    RCLCPP_ERROR(node_->get_logger(), "IK failed");
    return false;
  }

  solution = res->ik_solution[0].ik;
  return true;
}

void IKMover::smooth_interpolate(const std::vector<double> & target)
{
  int steps = std::max(1, traj_steps_);
  double dt = traj_dt_;

  trajectory_msgs::msg::JointTrajectory traj;
  traj.joint_names = {
    "shoulder_pan_joint",
    "shoulder_lift_joint",
    "elbow_joint",
    "wrist_1_joint",
    "wrist_2_joint",
    "wrist_3_joint"
  };

  for (int i = 1; i <= steps; ++i) {
    trajectory_msgs::msg::JointTrajectoryPoint point;
    point.positions.resize(6);

    for (int j = 0; j < 6; ++j) {
      point.positions[j] = current_joints_[j] +
        (target[j] - current_joints_[j]) * (static_cast<double>(i) / steps);
    }

    double seconds = dt * i;
    point.time_from_start.sec = static_cast<int32_t>(std::floor(seconds));
    point.time_from_start.nanosec = static_cast<uint32_t>((seconds - point.time_from_start.sec) * 1e9);
    traj.points.push_back(point);
  }

  traj_pub_->publish(traj);
  current_joints_ = target;

  if (wait_for_traj_) {
    auto wait_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
      std::chrono::duration<double>(dt * steps + 0.1));
    rclcpp::sleep_for(wait_ns);
  }
}

bool IKMover::move_to_pose(const geometry_msgs::msg::Pose & target_pose)
{
  std::vector<double> solution;

  if (!compute_ik(target_pose, solution))
    return false;

  smooth_interpolate(solution);

  return true;
}

} // namespace action_module
