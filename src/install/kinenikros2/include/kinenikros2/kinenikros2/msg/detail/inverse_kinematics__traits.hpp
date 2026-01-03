// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/msg/inverse_kinematics.hpp"


#ifndef KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
#define KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinenikros2/msg/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kinenikros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematics & msg,
  std::ostream & out)
{
  out << "{";
  // member: ik
  {
    if (msg.ik.size() == 0) {
      out << "ik: []";
    } else {
      out << "ik: [";
      size_t pending_items = msg.ik.size();
      for (auto item : msg.ik) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const InverseKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ik
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ik.size() == 0) {
      out << "ik: []\n";
    } else {
      out << "ik:\n";
      for (auto item : msg.ik) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics & msg, bool use_flow_style = false)
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

}  // namespace kinenikros2

namespace rosidl_generator_traits
{

[[deprecated("use kinenikros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinenikros2::msg::InverseKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinenikros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinenikros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const kinenikros2::msg::InverseKinematics & msg)
{
  return kinenikros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kinenikros2::msg::InverseKinematics>()
{
  return "kinenikros2::msg::InverseKinematics";
}

template<>
inline const char * name<kinenikros2::msg::InverseKinematics>()
{
  return "kinenikros2/msg/InverseKinematics";
}

template<>
struct has_fixed_size<kinenikros2::msg::InverseKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinenikros2::msg::InverseKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinenikros2::msg::InverseKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
