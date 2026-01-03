#include <chrono>
#include <memory>
#include <string>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Transform.h>
#include "action_module/tf_format_utils.hpp"
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>

using namespace std::chrono_literals;

namespace action_module
{

class TFSanityChecker : public rclcpp::Node
{
public:
  TFSanityChecker()
  : Node("tf_sanity_checker")
  {
    declare_parameter<std::string>("world_frame", "world");
    declare_parameter<std::string>("camera_frame", "camera_color_optical_frame");
    declare_parameter<std::string>("target_frame", "base");
    declare_parameter<std::string>("aruco_frame_prefix", "aruco");
    declare_parameter<int>("aruco_id", 316);
    declare_parameter<double>("lookup_timeout", 0.5);
    declare_parameter<double>("check_interval", 2.0);

    world_frame_ = get_parameter("world_frame").as_string();
    camera_frame_ = get_parameter("camera_frame").as_string();
    target_frame_ = get_parameter("target_frame").as_string();
    aruco_frame_prefix_ = get_parameter("aruco_frame_prefix").as_string();
    aruco_id_ = get_parameter("aruco_id").as_int();
    lookup_timeout_ = get_parameter("lookup_timeout").as_double();

    tf_buffer_ = std::make_shared<tf2_ros::Buffer>(get_clock());
    tf_buffer_->setUsingDedicatedThread(true);
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_, shared_from_this(), true);

    auto interval = std::chrono::duration<double>(get_parameter("check_interval").as_double());
    timer_ = create_wall_timer(interval, std::bind(&TFSanityChecker::tick, this));

    RCLCPP_INFO(get_logger(),
                "[TF Sanity] world=%s camera=%s target=%s aruco=%s_%d",
                world_frame_.c_str(), camera_frame_.c_str(), target_frame_.c_str(),
                aruco_frame_prefix_.c_str(), aruco_id_);
  }

private:
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
  rclcpp::TimerBase::SharedPtr timer_;

  std::string world_frame_;
  std::string camera_frame_;
  std::string target_frame_;
  std::string aruco_frame_prefix_;
  int aruco_id_;
  double lookup_timeout_;

  bool lookup(const std::string & parent, const std::string & child,
              geometry_msgs::msg::TransformStamped & out)
  {
    try {
      out = tf_buffer_->lookupTransform(
        parent, child, tf2::TimePointZero, tf2::durationFromSec(lookup_timeout_));
      return true;
    } catch (const tf2::TransformException & ex) {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "[TF Sanity] lookup %s -> %s failed: %s",
        parent.c_str(), child.c_str(), ex.what());
      return false;
    }
  }

  void tick()
  {
    geometry_msgs::msg::TransformStamped tf_world_target;
    if (lookup(world_frame_, target_frame_, tf_world_target)) {
      RCLCPP_INFO(get_logger(), "[TF Sanity] %s -> %s : %s",
                  world_frame_.c_str(), target_frame_.c_str(),
                  tf_format::transform_to_string(tf_world_target).c_str());
    }

    const std::string aruco_frame = aruco_frame_prefix_ + "_" + std::to_string(aruco_id_);
    geometry_msgs::msg::TransformStamped tf_world_aruco;
    if (lookup(world_frame_, aruco_frame, tf_world_aruco)) {
      RCLCPP_INFO(get_logger(), "[TF Sanity] %s -> %s : %s",
                  world_frame_.c_str(), aruco_frame.c_str(),
                  tf_format::transform_to_string(tf_world_aruco).c_str());
      return;
    }

    geometry_msgs::msg::TransformStamped tf_world_cam;
    geometry_msgs::msg::TransformStamped tf_cam_aruco;
    if (lookup(world_frame_, camera_frame_, tf_world_cam) &&
        lookup(camera_frame_, aruco_frame, tf_cam_aruco)) {
      try {
        tf2::Transform w_c;
        tf2::Transform c_m;
        tf2::fromMsg(tf_world_cam.transform, w_c);
        tf2::fromMsg(tf_cam_aruco.transform, c_m);
        tf2::Transform w_m = w_c * c_m;
        geometry_msgs::msg::TransformStamped composed;
        composed.header.stamp = now();
        composed.header.frame_id = world_frame_;
        composed.child_frame_id = aruco_frame;
        composed.transform = tf2::toMsg(w_m);
        RCLCPP_INFO(get_logger(), "[TF Sanity] composed %s -> %s via %s : %s",
                    world_frame_.c_str(), aruco_frame.c_str(), camera_frame_.c_str(),
                    tf_format::transform_to_string(composed).c_str());
      } catch (const tf2::TransformException & ex) {
        RCLCPP_WARN(get_logger(),
                    "[TF Sanity] compose %s -> %s via %s failed: %s",
                    world_frame_.c_str(), aruco_frame.c_str(),
                    camera_frame_.c_str(), ex.what());
      }
    }
  }
};

}  // namespace action_module

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<action_module::TFSanityChecker>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
