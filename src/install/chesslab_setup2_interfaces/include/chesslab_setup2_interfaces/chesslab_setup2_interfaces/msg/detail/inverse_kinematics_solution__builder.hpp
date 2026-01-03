// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/msg/inverse_kinematics_solution.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__BUILDER_HPP_
#define CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace chesslab_setup2_interfaces
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsSolution_ik
{
public:
  Init_InverseKinematicsSolution_ik()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesslab_setup2_interfaces::msg::InverseKinematicsSolution ik(::chesslab_setup2_interfaces::msg::InverseKinematicsSolution::_ik_type arg)
  {
    msg_.ik = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesslab_setup2_interfaces::msg::InverseKinematicsSolution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesslab_setup2_interfaces::msg::InverseKinematicsSolution>()
{
  return chesslab_setup2_interfaces::msg::builder::Init_InverseKinematicsSolution_ik();
}

}  // namespace chesslab_setup2_interfaces

#endif  // CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__BUILDER_HPP_
