// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/DetectPiecePoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/detect_piece_poses.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__DETECT_PIECE_POSES__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__DETECT_PIECE_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/detect_piece_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::DetectPiecePoses_Request>()
{
  return ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectPiecePoses_Response_message
{
public:
  explicit Init_DetectPiecePoses_Response_message(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response message(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response msg_;
};

class Init_DetectPiecePoses_Response_num_pieces_detected
{
public:
  explicit Init_DetectPiecePoses_Response_num_pieces_detected(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response & msg)
  : msg_(msg)
  {}
  Init_DetectPiecePoses_Response_message num_pieces_detected(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response::_num_pieces_detected_type arg)
  {
    msg_.num_pieces_detected = std::move(arg);
    return Init_DetectPiecePoses_Response_message(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response msg_;
};

class Init_DetectPiecePoses_Response_success
{
public:
  Init_DetectPiecePoses_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectPiecePoses_Response_num_pieces_detected success(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DetectPiecePoses_Response_num_pieces_detected(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::DetectPiecePoses_Response>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_DetectPiecePoses_Response_success();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectPiecePoses_Event_response
{
public:
  explicit Init_DetectPiecePoses_Event_response(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event response(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event msg_;
};

class Init_DetectPiecePoses_Event_request
{
public:
  explicit Init_DetectPiecePoses_Event_request(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event & msg)
  : msg_(msg)
  {}
  Init_DetectPiecePoses_Event_response request(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectPiecePoses_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event msg_;
};

class Init_DetectPiecePoses_Event_info
{
public:
  Init_DetectPiecePoses_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectPiecePoses_Event_request info(::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectPiecePoses_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::DetectPiecePoses_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_DetectPiecePoses_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__DETECT_PIECE_POSES__BUILDER_HPP_
