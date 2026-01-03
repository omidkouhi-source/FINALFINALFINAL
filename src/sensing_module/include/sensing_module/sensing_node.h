#ifndef SENSING_MODULE_SENSING_NODE_H
#define SENSING_MODULE_SENSING_NODE_H

#include <memory>
#include <string>
#include <vector>
#include <map>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "chesslab_setup2_interfaces/srv/detect_piece_poses.hpp"
#include "chesslab_setup2_interfaces/srv/get_piece_location.hpp"
#include "chesslab_setup2_interfaces/srv/verify_pick_place.hpp"
#include "chesslab_setup2_interfaces/srv/validate_chess_action.hpp"
#include "chesslab_setup2_interfaces/srv/set_obj_pose.hpp"

namespace sensing_module
{

class SensingNode : public rclcpp::Node
{
public:
  SensingNode();
  ~SensingNode() = default;

private:
  // TF2 components
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;

  // Service clients
  rclcpp::Client<chesslab_setup2_interfaces::srv::SetObjPose>::SharedPtr set_obj_pose_client_;

  // Service servers
  rclcpp::Service<chesslab_setup2_interfaces::srv::DetectPiecePoses>::SharedPtr detect_pieces_service_;
  rclcpp::Service<chesslab_setup2_interfaces::srv::GetPieceLocation>::SharedPtr get_location_service_;
  rclcpp::Service<chesslab_setup2_interfaces::srv::VerifyPickPlace>::SharedPtr verify_pick_place_service_;
  rclcpp::Service<chesslab_setup2_interfaces::srv::ValidateChessAction>::SharedPtr validate_action_service_;

  // Chess piece aruco IDs mapping
  std::vector<int> black_piece_ids_;
  std::vector<int> white_piece_ids_;
  std::map<int, double> piece_heights_;

  // Parameters
  std::string world_frame_;
  std::string camera_frame_;
  std::string aruco_frame_prefix_;
  double tf_timeout_;
  
  // Marker-to-grasp offset parameters
  double marker_grasp_offset_x_;
  double marker_grasp_offset_y_;
  double marker_grasp_offset_z_;
  bool use_detected_z_;
  bool debug_mode_;

  // Helper methods
  void initializePieceIds();
  void initializePieceHeights();
  bool getPieceTransform(int piece_id, geometry_msgs::msg::TransformStamped& transform);
  geometry_msgs::msg::Pose transformToPose(const geometry_msgs::msg::TransformStamped& transform);
  bool setPieceInRviz(int piece_id, const geometry_msgs::msg::Pose& pose);
  std::string getPieceType(int piece_id);
  
  // Service callbacks
  void detectPiecePosesCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::DetectPiecePoses::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::DetectPiecePoses::Response> response);
  
  void getPieceLocationCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::GetPieceLocation::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::GetPieceLocation::Response> response);
  
  void verifyPickPlaceCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::VerifyPickPlace::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::VerifyPickPlace::Response> response);
  
  void validateChessActionCallback(
    const std::shared_ptr<chesslab_setup2_interfaces::srv::ValidateChessAction::Request> request,
    std::shared_ptr<chesslab_setup2_interfaces::srv::ValidateChessAction::Response> response);

  // Chess board utilities
  bool isValidChessCell(const std::string& cell);
  geometry_msgs::msg::Point getCellPosition(const std::string& cell);
};

} // namespace sensing_module

#endif // SENSING_MODULE_SENSING_NODE_H
