// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/msg/marker_fix_list.hpp"


#ifndef TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__TRAITS_HPP_
#define TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tablesens/msg/detail/marker_fix_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'marker_fix_list'
#include "tablesens/msg/detail/marker_fix__traits.hpp"

namespace tablesens
{

namespace msg
{

inline void to_flow_style_yaml(
  const MarkerFixList & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_fix_list
  {
    if (msg.marker_fix_list.size() == 0) {
      out << "marker_fix_list: []";
    } else {
      out << "marker_fix_list: [";
      size_t pending_items = msg.marker_fix_list.size();
      for (auto item : msg.marker_fix_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MarkerFixList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_fix_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marker_fix_list.size() == 0) {
      out << "marker_fix_list: []\n";
    } else {
      out << "marker_fix_list:\n";
      for (auto item : msg.marker_fix_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MarkerFixList & msg, bool use_flow_style = false)
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
  const tablesens::msg::MarkerFixList & msg,
  std::ostream & out, size_t indentation = 0)
{
  tablesens::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tablesens::msg::to_yaml() instead")]]
inline std::string to_yaml(const tablesens::msg::MarkerFixList & msg)
{
  return tablesens::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tablesens::msg::MarkerFixList>()
{
  return "tablesens::msg::MarkerFixList";
}

template<>
inline const char * name<tablesens::msg::MarkerFixList>()
{
  return "tablesens/msg/MarkerFixList";
}

template<>
struct has_fixed_size<tablesens::msg::MarkerFixList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tablesens::msg::MarkerFixList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tablesens::msg::MarkerFixList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TABLESENS__MSG__DETAIL__MARKER_FIX_LIST__TRAITS_HPP_
