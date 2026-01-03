// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/msg/inverse_kinematics_solution.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__TRAITS_HPP_
#define CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chesslab_setup2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsSolution & msg,
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
  const InverseKinematicsSolution & msg,
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

inline std::string to_yaml(const InverseKinematicsSolution & msg, bool use_flow_style = false)
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

}  // namespace chesslab_setup2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chesslab_setup2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chesslab_setup2_interfaces::msg::InverseKinematicsSolution & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::msg::InverseKinematicsSolution & msg)
{
  return chesslab_setup2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::msg::InverseKinematicsSolution>()
{
  return "chesslab_setup2_interfaces::msg::InverseKinematicsSolution";
}

template<>
inline const char * name<chesslab_setup2_interfaces::msg::InverseKinematicsSolution>()
{
  return "chesslab_setup2_interfaces/msg/InverseKinematicsSolution";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::msg::InverseKinematicsSolution>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::msg::InverseKinematicsSolution>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chesslab_setup2_interfaces::msg::InverseKinematicsSolution>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHESSLAB_SETUP2_INTERFACES__MSG__DETAIL__INVERSE_KINEMATICS_SOLUTION__TRAITS_HPP_
