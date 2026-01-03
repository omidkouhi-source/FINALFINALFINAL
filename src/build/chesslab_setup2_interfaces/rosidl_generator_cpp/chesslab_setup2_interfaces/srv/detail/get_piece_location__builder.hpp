// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/GetPieceLocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/get_piece_location.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__GET_PIECE_LOCATION__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__GET_PIECE_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/get_piece_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPieceLocation_Request_piece_aruco_id
{
public:
  Init_GetPieceLocation_Request_piece_aruco_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Request piece_aruco_id(::chesslab_setup2_interfaces::srv::GetPieceLocation_Request::_piece_aruco_id_type arg)
  {
    msg_.piece_aruco_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::GetPieceLocation_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_GetPieceLocation_Request_piece_aruco_id();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPieceLocation_Response_message
{
public:
  explicit Init_GetPieceLocation_Response_message(::chesslab_setup2_interfaces::srv::GetPieceLocation_Response & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Response message(::chesslab_setup2_interfaces::srv::GetPieceLocation_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Response msg_;
};

class Init_GetPieceLocation_Response_pose
{
public:
  explicit Init_GetPieceLocation_Response_pose(::chesslab_setup2_interfaces::srv::GetPieceLocation_Response & msg)
  : msg_(msg)
  {}
  Init_GetPieceLocation_Response_message pose(::chesslab_setup2_interfaces::srv::GetPieceLocation_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GetPieceLocation_Response_message(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Response msg_;
};

class Init_GetPieceLocation_Response_success
{
public:
  Init_GetPieceLocation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPieceLocation_Response_pose success(::chesslab_setup2_interfaces::srv::GetPieceLocation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPieceLocation_Response_pose(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::GetPieceLocation_Response>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_GetPieceLocation_Response_success();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetPieceLocation_Event_response
{
public:
  explicit Init_GetPieceLocation_Event_response(::chesslab_setup2_interfaces::srv::GetPieceLocation_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Event response(::chesslab_setup2_interfaces::srv::GetPieceLocation_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Event msg_;
};

class Init_GetPieceLocation_Event_request
{
public:
  explicit Init_GetPieceLocation_Event_request(::chesslab_setup2_interfaces::srv::GetPieceLocation_Event & msg)
  : msg_(msg)
  {}
  Init_GetPieceLocation_Event_response request(::chesslab_setup2_interfaces::srv::GetPieceLocation_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetPieceLocation_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Event msg_;
};

class Init_GetPieceLocation_Event_info
{
public:
  Init_GetPieceLocation_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPieceLocation_Event_request info(::chesslab_setup2_interfaces::srv::GetPieceLocation_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetPieceLocation_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::GetPieceLocation_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::GetPieceLocation_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_GetPieceLocation_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__GET_PIECE_LOCATION__BUILDER_HPP_
