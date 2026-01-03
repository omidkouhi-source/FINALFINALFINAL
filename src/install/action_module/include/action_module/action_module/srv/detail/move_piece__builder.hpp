// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_module:srv/MovePiece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_module/srv/move_piece.hpp"


#ifndef ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__BUILDER_HPP_
#define ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_module/srv/detail/move_piece__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_module
{

namespace srv
{

namespace builder
{

class Init_MovePiece_Request_target_square
{
public:
  explicit Init_MovePiece_Request_target_square(::action_module::srv::MovePiece_Request & msg)
  : msg_(msg)
  {}
  ::action_module::srv::MovePiece_Request target_square(::action_module::srv::MovePiece_Request::_target_square_type arg)
  {
    msg_.target_square = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_module::srv::MovePiece_Request msg_;
};

class Init_MovePiece_Request_aruco_id
{
public:
  Init_MovePiece_Request_aruco_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovePiece_Request_target_square aruco_id(::action_module::srv::MovePiece_Request::_aruco_id_type arg)
  {
    msg_.aruco_id = std::move(arg);
    return Init_MovePiece_Request_target_square(msg_);
  }

private:
  ::action_module::srv::MovePiece_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_module::srv::MovePiece_Request>()
{
  return action_module::srv::builder::Init_MovePiece_Request_aruco_id();
}

}  // namespace action_module


namespace action_module
{

namespace srv
{

namespace builder
{

class Init_MovePiece_Response_message
{
public:
  explicit Init_MovePiece_Response_message(::action_module::srv::MovePiece_Response & msg)
  : msg_(msg)
  {}
  ::action_module::srv::MovePiece_Response message(::action_module::srv::MovePiece_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_module::srv::MovePiece_Response msg_;
};

class Init_MovePiece_Response_success
{
public:
  Init_MovePiece_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovePiece_Response_message success(::action_module::srv::MovePiece_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MovePiece_Response_message(msg_);
  }

private:
  ::action_module::srv::MovePiece_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_module::srv::MovePiece_Response>()
{
  return action_module::srv::builder::Init_MovePiece_Response_success();
}

}  // namespace action_module


namespace action_module
{

namespace srv
{

namespace builder
{

class Init_MovePiece_Event_response
{
public:
  explicit Init_MovePiece_Event_response(::action_module::srv::MovePiece_Event & msg)
  : msg_(msg)
  {}
  ::action_module::srv::MovePiece_Event response(::action_module::srv::MovePiece_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_module::srv::MovePiece_Event msg_;
};

class Init_MovePiece_Event_request
{
public:
  explicit Init_MovePiece_Event_request(::action_module::srv::MovePiece_Event & msg)
  : msg_(msg)
  {}
  Init_MovePiece_Event_response request(::action_module::srv::MovePiece_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MovePiece_Event_response(msg_);
  }

private:
  ::action_module::srv::MovePiece_Event msg_;
};

class Init_MovePiece_Event_info
{
public:
  Init_MovePiece_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovePiece_Event_request info(::action_module::srv::MovePiece_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MovePiece_Event_request(msg_);
  }

private:
  ::action_module::srv::MovePiece_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_module::srv::MovePiece_Event>()
{
  return action_module::srv::builder::Init_MovePiece_Event_info();
}

}  // namespace action_module

#endif  // ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__BUILDER_HPP_
