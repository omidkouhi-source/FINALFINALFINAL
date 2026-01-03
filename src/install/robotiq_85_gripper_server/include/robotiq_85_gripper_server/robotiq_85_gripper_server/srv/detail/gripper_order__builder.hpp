// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_85_gripper_server:srv/GripperOrder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_85_gripper_server/srv/gripper_order.hpp"


#ifndef ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_ORDER__BUILDER_HPP_
#define ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_85_gripper_server/srv/detail/gripper_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_85_gripper_server
{

namespace srv
{

namespace builder
{

class Init_GripperOrder_Request_force
{
public:
  explicit Init_GripperOrder_Request_force(::robotiq_85_gripper_server::srv::GripperOrder_Request & msg)
  : msg_(msg)
  {}
  ::robotiq_85_gripper_server::srv::GripperOrder_Request force(::robotiq_85_gripper_server::srv::GripperOrder_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Request msg_;
};

class Init_GripperOrder_Request_speed
{
public:
  explicit Init_GripperOrder_Request_speed(::robotiq_85_gripper_server::srv::GripperOrder_Request & msg)
  : msg_(msg)
  {}
  Init_GripperOrder_Request_force speed(::robotiq_85_gripper_server::srv::GripperOrder_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GripperOrder_Request_force(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Request msg_;
};

class Init_GripperOrder_Request_position
{
public:
  Init_GripperOrder_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperOrder_Request_speed position(::robotiq_85_gripper_server::srv::GripperOrder_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperOrder_Request_speed(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_85_gripper_server::srv::GripperOrder_Request>()
{
  return robotiq_85_gripper_server::srv::builder::Init_GripperOrder_Request_position();
}

}  // namespace robotiq_85_gripper_server


namespace robotiq_85_gripper_server
{

namespace srv
{

namespace builder
{

class Init_GripperOrder_Response_status
{
public:
  Init_GripperOrder_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_85_gripper_server::srv::GripperOrder_Response status(::robotiq_85_gripper_server::srv::GripperOrder_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_85_gripper_server::srv::GripperOrder_Response>()
{
  return robotiq_85_gripper_server::srv::builder::Init_GripperOrder_Response_status();
}

}  // namespace robotiq_85_gripper_server


namespace robotiq_85_gripper_server
{

namespace srv
{

namespace builder
{

class Init_GripperOrder_Event_response
{
public:
  explicit Init_GripperOrder_Event_response(::robotiq_85_gripper_server::srv::GripperOrder_Event & msg)
  : msg_(msg)
  {}
  ::robotiq_85_gripper_server::srv::GripperOrder_Event response(::robotiq_85_gripper_server::srv::GripperOrder_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Event msg_;
};

class Init_GripperOrder_Event_request
{
public:
  explicit Init_GripperOrder_Event_request(::robotiq_85_gripper_server::srv::GripperOrder_Event & msg)
  : msg_(msg)
  {}
  Init_GripperOrder_Event_response request(::robotiq_85_gripper_server::srv::GripperOrder_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperOrder_Event_response(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Event msg_;
};

class Init_GripperOrder_Event_info
{
public:
  Init_GripperOrder_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperOrder_Event_request info(::robotiq_85_gripper_server::srv::GripperOrder_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperOrder_Event_request(msg_);
  }

private:
  ::robotiq_85_gripper_server::srv::GripperOrder_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_85_gripper_server::srv::GripperOrder_Event>()
{
  return robotiq_85_gripper_server::srv::builder::Init_GripperOrder_Event_info();
}

}  // namespace robotiq_85_gripper_server

#endif  // ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_ORDER__BUILDER_HPP_
