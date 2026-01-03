// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/msg/inverse_kinematics.hpp"


#ifndef KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
#define KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kinenikros2/msg/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kinenikros2
{

namespace msg
{

namespace builder
{

class Init_InverseKinematics_ik
{
public:
  Init_InverseKinematics_ik()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kinenikros2::msg::InverseKinematics ik(::kinenikros2::msg::InverseKinematics::_ik_type arg)
  {
    msg_.ik = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kinenikros2::msg::InverseKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kinenikros2::msg::InverseKinematics>()
{
  return kinenikros2::msg::builder::Init_InverseKinematics_ik();
}

}  // namespace kinenikros2

#endif  // KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__BUILDER_HPP_
