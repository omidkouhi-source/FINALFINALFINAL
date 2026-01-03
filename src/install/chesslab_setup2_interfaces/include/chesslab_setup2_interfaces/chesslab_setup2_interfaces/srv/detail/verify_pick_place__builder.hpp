// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/VerifyPickPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/verify_pick_place.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/verify_pick_place__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_VerifyPickPlace_Request_tolerance
{
public:
  explicit Init_VerifyPickPlace_Request_tolerance(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request tolerance(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request msg_;
};

class Init_VerifyPickPlace_Request_target_position
{
public:
  explicit Init_VerifyPickPlace_Request_target_position(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request & msg)
  : msg_(msg)
  {}
  Init_VerifyPickPlace_Request_tolerance target_position(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_VerifyPickPlace_Request_tolerance(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request msg_;
};

class Init_VerifyPickPlace_Request_piece_aruco_id
{
public:
  Init_VerifyPickPlace_Request_piece_aruco_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VerifyPickPlace_Request_target_position piece_aruco_id(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request::_piece_aruco_id_type arg)
  {
    msg_.piece_aruco_id = std::move(arg);
    return Init_VerifyPickPlace_Request_target_position(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_VerifyPickPlace_Request_piece_aruco_id();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_VerifyPickPlace_Response_message
{
public:
  explicit Init_VerifyPickPlace_Response_message(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response message(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response msg_;
};

class Init_VerifyPickPlace_Response_distance_to_target
{
public:
  explicit Init_VerifyPickPlace_Response_distance_to_target(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response & msg)
  : msg_(msg)
  {}
  Init_VerifyPickPlace_Response_message distance_to_target(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response::_distance_to_target_type arg)
  {
    msg_.distance_to_target = std::move(arg);
    return Init_VerifyPickPlace_Response_message(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response msg_;
};

class Init_VerifyPickPlace_Response_piece_at_target
{
public:
  explicit Init_VerifyPickPlace_Response_piece_at_target(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response & msg)
  : msg_(msg)
  {}
  Init_VerifyPickPlace_Response_distance_to_target piece_at_target(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response::_piece_at_target_type arg)
  {
    msg_.piece_at_target = std::move(arg);
    return Init_VerifyPickPlace_Response_distance_to_target(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response msg_;
};

class Init_VerifyPickPlace_Response_success
{
public:
  Init_VerifyPickPlace_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VerifyPickPlace_Response_piece_at_target success(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_VerifyPickPlace_Response_piece_at_target(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_VerifyPickPlace_Response_success();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_VerifyPickPlace_Event_response
{
public:
  explicit Init_VerifyPickPlace_Event_response(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event response(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event msg_;
};

class Init_VerifyPickPlace_Event_request
{
public:
  explicit Init_VerifyPickPlace_Event_request(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event & msg)
  : msg_(msg)
  {}
  Init_VerifyPickPlace_Event_response request(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_VerifyPickPlace_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event msg_;
};

class Init_VerifyPickPlace_Event_info
{
public:
  Init_VerifyPickPlace_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VerifyPickPlace_Event_request info(::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_VerifyPickPlace_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::VerifyPickPlace_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_VerifyPickPlace_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__BUILDER_HPP_
