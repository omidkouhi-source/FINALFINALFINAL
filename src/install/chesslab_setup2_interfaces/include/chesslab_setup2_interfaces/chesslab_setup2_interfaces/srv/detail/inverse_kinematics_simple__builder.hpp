// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:srv/InverseKinematicsSimple.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/inverse_kinematics_simple.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_SIMPLE__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_SIMPLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematicsSimple_Request_pose
{
public:
  Init_InverseKinematicsSimple_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request pose(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_InverseKinematicsSimple_Request_pose();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematicsSimple_Response_status
{
public:
  explicit Init_InverseKinematicsSimple_Response_status(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response status(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response msg_;
};

class Init_InverseKinematicsSimple_Response_ik_solution
{
public:
  Init_InverseKinematicsSimple_Response_ik_solution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsSimple_Response_status ik_solution(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response::_ik_solution_type arg)
  {
    msg_.ik_solution = std::move(arg);
    return Init_InverseKinematicsSimple_Response_status(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_InverseKinematicsSimple_Response_ik_solution();
}

}  // namespace chesslab_setup2_interfaces


namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace builder
{

class Init_InverseKinematicsSimple_Event_response
{
public:
  explicit Init_InverseKinematicsSimple_Event_response(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event & msg)
  : msg_(msg)
  {}
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event response(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event msg_;
};

class Init_InverseKinematicsSimple_Event_request
{
public:
  explicit Init_InverseKinematicsSimple_Event_request(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsSimple_Event_response request(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InverseKinematicsSimple_Event_response(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event msg_;
};

class Init_InverseKinematicsSimple_Event_info
{
public:
  Init_InverseKinematicsSimple_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsSimple_Event_request info(::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InverseKinematicsSimple_Event_request(msg_);
  }

private:
  ::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event>()
{
  return chesslab_setup2_interfaces::srv::builder::Init_InverseKinematicsSimple_Event_info();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_SIMPLE__BUILDER_HPP_
