// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/ValidateChessAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/validate_chess_action.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/validate_chess_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_ValidateChessAction_Request_to_cell
{
public:
  explicit Init_ValidateChessAction_Request_to_cell(::chesslab_setup2_interfaces::srv::ValidateChessAction_Request & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Request to_cell(::chesslab_setup2_interfaces::srv::ValidateChessAction_Request::_to_cell_type arg)
  {
    msg_.to_cell = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Request msg_;
};

class Init_ValidateChessAction_Request_from_cell
{
public:
  Init_ValidateChessAction_Request_from_cell()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidateChessAction_Request_to_cell from_cell(::chesslab_setup2_interfaces::srv::ValidateChessAction_Request::_from_cell_type arg)
  {
    msg_.from_cell = std::move(arg);
    return Init_ValidateChessAction_Request_to_cell(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::ValidateChessAction_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_ValidateChessAction_Request_from_cell();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_ValidateChessAction_Response_message
{
public:
  explicit Init_ValidateChessAction_Response_message(::chesslab_setup2_interfaces::srv::ValidateChessAction_Response & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Response message(::chesslab_setup2_interfaces::srv::ValidateChessAction_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Response msg_;
};

class Init_ValidateChessAction_Response_is_valid
{
public:
  explicit Init_ValidateChessAction_Response_is_valid(::chesslab_setup2_interfaces::srv::ValidateChessAction_Response & msg)
  : msg_(msg)
  {}
  Init_ValidateChessAction_Response_message is_valid(::chesslab_setup2_interfaces::srv::ValidateChessAction_Response::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return Init_ValidateChessAction_Response_message(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Response msg_;
};

class Init_ValidateChessAction_Response_success
{
public:
  Init_ValidateChessAction_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidateChessAction_Response_is_valid success(::chesslab_setup2_interfaces::srv::ValidateChessAction_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ValidateChessAction_Response_is_valid(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::ValidateChessAction_Response>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_ValidateChessAction_Response_success();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_ValidateChessAction_Event_response
{
public:
  explicit Init_ValidateChessAction_Event_response(::chesslab_setup2_interfaces::srv::ValidateChessAction_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Event response(::chesslab_setup2_interfaces::srv::ValidateChessAction_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Event msg_;
};

class Init_ValidateChessAction_Event_request
{
public:
  explicit Init_ValidateChessAction_Event_request(::chesslab_setup2_interfaces::srv::ValidateChessAction_Event & msg)
  : msg_(msg)
  {}
  Init_ValidateChessAction_Event_response request(::chesslab_setup2_interfaces::srv::ValidateChessAction_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ValidateChessAction_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Event msg_;
};

class Init_ValidateChessAction_Event_info
{
public:
  Init_ValidateChessAction_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ValidateChessAction_Event_request info(::chesslab_setup2_interfaces::srv::ValidateChessAction_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ValidateChessAction_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::ValidateChessAction_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::ValidateChessAction_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_ValidateChessAction_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__BUILDER_HPP_
