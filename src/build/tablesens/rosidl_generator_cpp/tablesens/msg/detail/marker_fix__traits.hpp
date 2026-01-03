// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tablesens:msg/MarkerFix.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix.hpp"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX__TRAITS_HPP_
#define TABLESENS__MSG__DETAIL__MARKER_FIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tablesens/msg/detail/marker_fix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace tablesens
{

namespace msg
{

inline void to_flow_style_yaml(
  const MarkerFix & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MarkerFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MarkerFix & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tablesens

namespace rosidl_generator_traits
{

[[deprecated("use tablesens::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tablesens::msg::MarkerFix & msg,
  std::ostream & out, size_t indentation = 0)
{
  tablesens::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tablesens::msg::to_yaml() instead")]]
inline std::string to_yaml(const tablesens::msg::MarkerFix & msg)
{
  return tablesens::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tablesens::msg::MarkerFix>()
{
  return "tablesens::msg::MarkerFix";
}

template<>
inline const char * name<tablesens::msg::MarkerFix>()
{
  return "tablesens/msg/MarkerFix";
}

template<>
struct has_fixed_size<tablesens::msg::MarkerFix>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<tablesens::msg::MarkerFix>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<tablesens::msg::MarkerFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX__TRAITS_HPP_
