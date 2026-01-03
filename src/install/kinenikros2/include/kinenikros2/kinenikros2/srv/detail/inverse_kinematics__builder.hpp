// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinenikros2:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/srv/inverse_kinematics.hpp"


#ifndef KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
#define KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinenikros2/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinenikros2
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Request_pose
{
public:
  explicit Init_InverseKinematics_Request_pose(::kinenikros2::srv::InverseKinematics_Request & msg)
  : msg_(msg)
  {}
  ::kinenikros2::srv::InverseKinematics_Request pose(::kinenikros2::srv::InverseKinematics_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Request msg_;
};

class Init_InverseKinematics_Request_type
{
public:
  Init_InverseKinematics_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Request_pose type(::kinenikros2::srv::InverseKinematics_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_InverseKinematics_Request_pose(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinenikros2::srv::InverseKinematics_Request>()
{
  return kinenikros2::srv::builder::Init_InverseKinematics_Request_type();
}

}  // namespace kinenikros2


namespace kinenikros2
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Response_status
{
public:
  explicit Init_InverseKinematics_Response_status(::kinenikros2::srv::InverseKinematics_Response & msg)
  : msg_(msg)
  {}
  ::kinenikros2::srv::InverseKinematics_Response status(::kinenikros2::srv::InverseKinematics_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Response msg_;
};

class Init_InverseKinematics_Response_ik_solution
{
public:
  Init_InverseKinematics_Response_ik_solution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Response_status ik_solution(::kinenikros2::srv::InverseKinematics_Response::_ik_solution_type arg)
  {
    msg_.ik_solution = std::move(arg);
    return Init_InverseKinematics_Response_status(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinenikros2::srv::InverseKinematics_Response>()
{
  return kinenikros2::srv::builder::Init_InverseKinematics_Response_ik_solution();
}

}  // namespace kinenikros2


namespace kinenikros2
{

namespace srv
{

namespace builder
{

class Init_InverseKinematics_Event_response
{
public:
  explicit Init_InverseKinematics_Event_response(::kinenikros2::srv::InverseKinematics_Event & msg)
  : msg_(msg)
  {}
  ::kinenikros2::srv::InverseKinematics_Event response(::kinenikros2::srv::InverseKinematics_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Event msg_;
};

class Init_InverseKinematics_Event_request
{
public:
  explicit Init_InverseKinematics_Event_request(::kinenikros2::srv::InverseKinematics_Event & msg)
  : msg_(msg)
  {}
  Init_InverseKinematics_Event_response request(::kinenikros2::srv::InverseKinematics_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InverseKinematics_Event_response(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Event msg_;
};

class Init_InverseKinematics_Event_info
{
public:
  Init_InverseKinematics_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematics_Event_request info(::kinenikros2::srv::InverseKinematics_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InverseKinematics_Event_request(msg_);
  }

private:
  ::kinenikros2::srv::InverseKinematics_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinenikros2::srv::InverseKinematics_Event>()
{
  return kinenikros2::srv::builder::Init_InverseKinematics_Event_info();
}

}  // namespace kinenikros2

#endif  // KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
