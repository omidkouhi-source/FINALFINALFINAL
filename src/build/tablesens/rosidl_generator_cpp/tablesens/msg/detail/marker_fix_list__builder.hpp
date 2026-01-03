// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix_list.hpp"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__BUILDER_HPP_
#define TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tablesens/msg/detail/marker_fix_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tablesens
{

namespace msg
{

namespace builder
{

class Init_MarkerFixList_marker_fix_list
{
public:
  Init_MarkerFixList_marker_fix_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tablesens::msg::MarkerFixList marker_fix_list(::tablesens::msg::MarkerFixList::_marker_fix_list_type arg)
  {
    msg_.marker_fix_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tablesens::msg::MarkerFixList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tablesens::msg::MarkerFixList>()
{
  return tablesens::msg::builder::Init_MarkerFixList_marker_fix_list();
}

}  // namespace tablesens

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__BUILDER_HPP_
