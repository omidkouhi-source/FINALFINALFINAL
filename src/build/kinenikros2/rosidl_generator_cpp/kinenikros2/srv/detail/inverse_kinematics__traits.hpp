// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kinenikros2:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/srv/inverse_kinematics.hpp"


#ifndef KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
#define KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kinenikros2/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace kinenikros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
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
  const InverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
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

inline std::string to_yaml(const InverseKinematics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_generator_traits
{

[[deprecated("use kinenikros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinenikros2::srv::InverseKinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinenikros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinenikros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinenikros2::srv::InverseKinematics_Request & msg)
{
  return kinenikros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinenikros2::srv::InverseKinematics_Request>()
{
  return "kinenikros2::srv::InverseKinematics_Request";
}

template<>
inline const char * name<kinenikros2::srv::InverseKinematics_Request>()
{
  return "kinenikros2/srv/InverseKinematics_Request";
}

template<>
struct has_fixed_size<kinenikros2::srv::InverseKinematics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinenikros2::srv::InverseKinematics_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinenikros2::srv::InverseKinematics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'ik_solution'
#include "kinenikros2/msg/detail/inverse_kinematics__traits.hpp"

namespace kinenikros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ik_solution
  {
    if (msg.ik_solution.size() == 0) {
      out << "ik_solution: []";
    } else {
      out << "ik_solution: [";
      size_t pending_items = msg.ik_solution.size();
      for (auto item : msg.ik_solution) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ik_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ik_solution.size() == 0) {
      out << "ik_solution: []\n";
    } else {
      out << "ik_solution:\n";
      for (auto item : msg.ik_solution) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_generator_traits
{

[[deprecated("use kinenikros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinenikros2::srv::InverseKinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinenikros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinenikros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinenikros2::srv::InverseKinematics_Response & msg)
{
  return kinenikros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinenikros2::srv::InverseKinematics_Response>()
{
  return "kinenikros2::srv::InverseKinematics_Response";
}

template<>
inline const char * name<kinenikros2::srv::InverseKinematics_Response>()
{
  return "kinenikros2/srv/InverseKinematics_Response";
}

template<>
struct has_fixed_size<kinenikros2::srv::InverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinenikros2::srv::InverseKinematics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kinenikros2::srv::InverseKinematics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace kinenikros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const InverseKinematics_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const InverseKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematics_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_generator_traits
{

[[deprecated("use kinenikros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kinenikros2::srv::InverseKinematics_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  kinenikros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kinenikros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const kinenikros2::srv::InverseKinematics_Event & msg)
{
  return kinenikros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kinenikros2::srv::InverseKinematics_Event>()
{
  return "kinenikros2::srv::InverseKinematics_Event";
}

template<>
inline const char * name<kinenikros2::srv::InverseKinematics_Event>()
{
  return "kinenikros2/srv/InverseKinematics_Event";
}

template<>
struct has_fixed_size<kinenikros2::srv::InverseKinematics_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kinenikros2::srv::InverseKinematics_Event>
  : std::integral_constant<bool, has_bounded_size<kinenikros2::srv::InverseKinematics_Request>::value && has_bounded_size<kinenikros2::srv::InverseKinematics_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<kinenikros2::srv::InverseKinematics_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kinenikros2::srv::InverseKinematics>()
{
  return "kinenikros2::srv::InverseKinematics";
}

template<>
inline const char * name<kinenikros2::srv::InverseKinematics>()
{
  return "kinenikros2/srv/InverseKinematics";
}

template<>
struct has_fixed_size<kinenikros2::srv::InverseKinematics>
  : std::integral_constant<
    bool,
    has_fixed_size<kinenikros2::srv::InverseKinematics_Request>::value &&
    has_fixed_size<kinenikros2::srv::InverseKinematics_Response>::value
  >
{
};

template<>
struct has_bounded_size<kinenikros2::srv::InverseKinematics>
  : std::integral_constant<
    bool,
    has_bounded_size<kinenikros2::srv::InverseKinematics_Request>::value &&
    has_bounded_size<kinenikros2::srv::InverseKinematics_Response>::value
  >
{
};

template<>
struct is_service<kinenikros2::srv::InverseKinematics>
  : std::true_type
{
};

template<>
struct is_service_request<kinenikros2::srv::InverseKinematics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kinenikros2::srv::InverseKinematics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__TRAITS_HPP_
