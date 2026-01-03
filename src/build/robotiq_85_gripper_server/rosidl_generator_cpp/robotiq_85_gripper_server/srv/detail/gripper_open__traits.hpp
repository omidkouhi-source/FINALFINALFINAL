// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_85_gripper_server:srv/GripperOpen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_85_gripper_server/srv/gripper_open.hpp"


#ifndef ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__TRAITS_HPP_
#define ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_85_gripper_server/srv/detail/gripper_open__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotiq_85_gripper_server
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperOpen_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: order
  {
    out << "order: ";
    rosidl_generator_traits::value_to_yaml(msg.order, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperOpen_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order: ";
    rosidl_generator_traits::value_to_yaml(msg.order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperOpen_Request & msg, bool use_flow_style = false)
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

}  // namespace robotiq_85_gripper_server

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_85_gripper_server::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_85_gripper_server::srv::GripperOpen_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_85_gripper_server::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_85_gripper_server::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_85_gripper_server::srv::GripperOpen_Request & msg)
{
  return robotiq_85_gripper_server::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_85_gripper_server::srv::GripperOpen_Request>()
{
  return "robotiq_85_gripper_server::srv::GripperOpen_Request";
}

template<>
inline const char * name<robotiq_85_gripper_server::srv::GripperOpen_Request>()
{
  return "robotiq_85_gripper_server/srv/GripperOpen_Request";
}

template<>
struct has_fixed_size<robotiq_85_gripper_server::srv::GripperOpen_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_85_gripper_server::srv::GripperOpen_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotiq_85_gripper_server
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperOpen_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperOpen_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const GripperOpen_Response & msg, bool use_flow_style = false)
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

}  // namespace robotiq_85_gripper_server

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_85_gripper_server::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_85_gripper_server::srv::GripperOpen_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_85_gripper_server::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_85_gripper_server::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_85_gripper_server::srv::GripperOpen_Response & msg)
{
  return robotiq_85_gripper_server::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_85_gripper_server::srv::GripperOpen_Response>()
{
  return "robotiq_85_gripper_server::srv::GripperOpen_Response";
}

template<>
inline const char * name<robotiq_85_gripper_server::srv::GripperOpen_Response>()
{
  return "robotiq_85_gripper_server/srv/GripperOpen_Response";
}

template<>
struct has_fixed_size<robotiq_85_gripper_server::srv::GripperOpen_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_85_gripper_server::srv::GripperOpen_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robotiq_85_gripper_server
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperOpen_Event & msg,
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
  const GripperOpen_Event & msg,
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

inline std::string to_yaml(const GripperOpen_Event & msg, bool use_flow_style = false)
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

}  // namespace robotiq_85_gripper_server

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_85_gripper_server::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_85_gripper_server::srv::GripperOpen_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_85_gripper_server::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_85_gripper_server::srv::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_85_gripper_server::srv::GripperOpen_Event & msg)
{
  return robotiq_85_gripper_server::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_85_gripper_server::srv::GripperOpen_Event>()
{
  return "robotiq_85_gripper_server::srv::GripperOpen_Event";
}

template<>
inline const char * name<robotiq_85_gripper_server::srv::GripperOpen_Event>()
{
  return "robotiq_85_gripper_server/srv/GripperOpen_Event";
}

template<>
struct has_fixed_size<robotiq_85_gripper_server::srv::GripperOpen_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Event>
  : std::integral_constant<bool, has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Request>::value && has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robotiq_85_gripper_server::srv::GripperOpen_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_85_gripper_server::srv::GripperOpen>()
{
  return "robotiq_85_gripper_server::srv::GripperOpen";
}

template<>
inline const char * name<robotiq_85_gripper_server::srv::GripperOpen>()
{
  return "robotiq_85_gripper_server/srv/GripperOpen";
}

template<>
struct has_fixed_size<robotiq_85_gripper_server::srv::GripperOpen>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_85_gripper_server::srv::GripperOpen_Request>::value &&
    has_fixed_size<robotiq_85_gripper_server::srv::GripperOpen_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Request>::value &&
    has_bounded_size<robotiq_85_gripper_server::srv::GripperOpen_Response>::value
  >
{
};

template<>
struct is_service<robotiq_85_gripper_server::srv::GripperOpen>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_85_gripper_server::srv::GripperOpen_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_85_gripper_server::srv::GripperOpen_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_OPEN__TRAITS_HPP_
