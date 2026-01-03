// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tablesens:msg/MarkerFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix.hpp"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX__BUILDER_HPP_
#define TABLESENS__MSG__DETAIL__MARKER_FIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tablesens/msg/detail/marker_fix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tablesens
{

namespace msg
{

namespace builder
{

class Init_MarkerFix_pose
{
public:
  explicit Init_MarkerFix_pose(::tablesens::msg::MarkerFix & msg)
  : msg_(msg)
  {}
  ::tablesens::msg::MarkerFix pose(::tablesens::msg::MarkerFix::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tablesens::msg::MarkerFix msg_;
};

class Init_MarkerFix_id
{
public:
  Init_MarkerFix_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkerFix_pose id(::tablesens::msg::MarkerFix::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MarkerFix_pose(msg_);
  }

private:
  ::tablesens::msg::MarkerFix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tablesens::msg::MarkerFix>()
{
  return tablesens::msg::builder::Init_MarkerFix_id();
}

}  // namespace tablesens

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX__BUILDER_HPP_
