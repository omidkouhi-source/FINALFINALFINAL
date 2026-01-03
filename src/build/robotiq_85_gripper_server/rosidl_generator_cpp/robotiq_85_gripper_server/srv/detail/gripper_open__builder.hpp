// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_85_gripper_server:srv/GripperOpen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_85_gripper_server/srv/gripper_open.hpp"


#ifndef ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__BUILDER_HPP_
#define ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_85_gripper_server/srv/detail/gripper_open__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_85_gripper_server
{

namespace srv
{

namespace builder
{

class Init_GripperOpen_Request_order
{
public:
  Init_GripperOpen_Request_order()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_85_gripper_server::srv::GripperOpen_Request order(::robotiq_85_gripper_server::srv::GripperOpen_Request::_order_type arg)
  {
    msg_.order = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOpen_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_85_gripper_server::srv::GripperOpen_Request>()
{
  return robotiq_85_gripper_server::srv::builder::Init_GripperOpen_Request_order();
}

}  // namespace robotiq_85_gripper_server


namespace robotiq_85_gripper_server
{

namespace srv
{

namespace builder
{

class Init_GripperOpen_Response_status
{
public:
  Init_GripperOpen_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_85_gripper_server::srv::GripperOpen_Response status(::robotiq_85_gripper_server::srv::GripperOpen_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOpen_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_85_gripper_server::srv::GripperOpen_Response>()
{
  return robotiq_85_gripper_server::srv::builder::Init_GripperOpen_Response_status();
}

}  // namespace robotiq_85_gripper_server


namespace robotiq_85_gripper_server
{

namespace srv
{

namespace builder
{

class Init_GripperOpen_Event_response
{
public:
  explicit Init_GripperOpen_Event_response(::robotiq_85_gripper_server::srv::GripperOpen_Event & msg)
  : msg_(msg)
  {}
  ::robotiq_85_gripper_server::srv::GripperOpen_Event response(::robotiq_85_gripper_server::srv::GripperOpen_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOpen_Event msg_;
};

class Init_GripperOpen_Event_request
{
public:
  explicit Init_GripperOpen_Event_request(::robotiq_85_gripper_server::srv::GripperOpen_Event & msg)
  : msg_(msg)
  {}
  Init_GripperOpen_Event_response request(::robotiq_85_gripper_server::srv::GripperOpen_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperOpen_Event_response(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOpen_Event msg_;
};

class Init_GripperOpen_Event_info
{
public:
  Init_GripperOpen_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperOpen_Event_request info(::robotiq_85_gripper_server::srv::GripperOpen_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperOpen_Event_request(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOpen_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_85_gripper_server::srv::GripperOpen_Event>()
{
  return robotiq_85_gripper_server::srv::builder::Init_GripperOpen_Event_info();
}

}  // namespace robotiq_85_gripper_server

#endif  // ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__BUILDER_HPP_
