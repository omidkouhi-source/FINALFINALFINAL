// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aruco_broadcaster/srv/get_marker_tf.hpp"


#ifndef ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__TRAITS_HPP_
#define ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_broadcaster/srv/detail/get_marker_tf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aruco_broadcaster
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMarkerTf_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: parent
  {
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
    out << ", ";
  }

  // member: marker_id
  {
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMarkerTf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
    out << "\n";
  }

  // member: marker_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMarkerTf_Request & msg, bool use_flow_style = false)
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

}  // namespace aruco_broadcaster

namespace rosidl_generator_traits
{

[[deprecated("use aruco_broadcaster::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_broadcaster::srv::GetMarkerTf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_broadcaster::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_broadcaster::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_broadcaster::srv::GetMarkerTf_Request & msg)
{
  return aruco_broadcaster::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_broadcaster::srv::GetMarkerTf_Request>()
{
  return "aruco_broadcaster::srv::GetMarkerTf_Request";
}

template<>
inline const char * name<aruco_broadcaster::srv::GetMarkerTf_Request>()
{
  return "aruco_broadcaster/srv/GetMarkerTf_Request";
}

template<>
struct has_fixed_size<aruco_broadcaster::srv::GetMarkerTf_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_broadcaster::srv::GetMarkerTf_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'ret'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace aruco_broadcaster
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMarkerTf_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret
  {
    out << "ret: ";
    to_flow_style_yaml(msg.ret, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMarkerTf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret:\n";
    to_block_style_yaml(msg.ret, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMarkerTf_Response & msg, bool use_flow_style = false)
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

}  // namespace aruco_broadcaster

namespace rosidl_generator_traits
{

[[deprecated("use aruco_broadcaster::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_broadcaster::srv::GetMarkerTf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_broadcaster::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_broadcaster::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_broadcaster::srv::GetMarkerTf_Response & msg)
{
  return aruco_broadcaster::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_broadcaster::srv::GetMarkerTf_Response>()
{
  return "aruco_broadcaster::srv::GetMarkerTf_Response";
}

template<>
inline const char * name<aruco_broadcaster::srv::GetMarkerTf_Response>()
{
  return "aruco_broadcaster/srv/GetMarkerTf_Response";
}

template<>
struct has_fixed_size<aruco_broadcaster::srv::GetMarkerTf_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct is_message<aruco_broadcaster::srv::GetMarkerTf_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace aruco_broadcaster
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMarkerTf_Event & msg,
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
  const GetMarkerTf_Event & msg,
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

inline std::string to_yaml(const GetMarkerTf_Event & msg, bool use_flow_style = false)
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

}  // namespace aruco_broadcaster

namespace rosidl_generator_traits
{

[[deprecated("use aruco_broadcaster::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_broadcaster::srv::GetMarkerTf_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_broadcaster::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_broadcaster::srv::to_yaml() instead")]]
inline std::string to_yaml(const aruco_broadcaster::srv::GetMarkerTf_Event & msg)
{
  return aruco_broadcaster::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_broadcaster::srv::GetMarkerTf_Event>()
{
  return "aruco_broadcaster::srv::GetMarkerTf_Event";
}

template<>
inline const char * name<aruco_broadcaster::srv::GetMarkerTf_Event>()
{
  return "aruco_broadcaster/srv/GetMarkerTf_Event";
}

template<>
struct has_fixed_size<aruco_broadcaster::srv::GetMarkerTf_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Event>
  : std::integral_constant<bool, has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Request>::value && has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<aruco_broadcaster::srv::GetMarkerTf_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aruco_broadcaster::srv::GetMarkerTf>()
{
  return "aruco_broadcaster::srv::GetMarkerTf";
}

template<>
inline const char * name<aruco_broadcaster::srv::GetMarkerTf>()
{
  return "aruco_broadcaster/srv/GetMarkerTf";
}

template<>
struct has_fixed_size<aruco_broadcaster::srv::GetMarkerTf>
  : std::integral_constant<
    bool,
    has_fixed_size<aruco_broadcaster::srv::GetMarkerTf_Request>::value &&
    has_fixed_size<aruco_broadcaster::srv::GetMarkerTf_Response>::value
  >
{
};

template<>
struct has_bounded_size<aruco_broadcaster::srv::GetMarkerTf>
  : std::integral_constant<
    bool,
    has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Request>::value &&
    has_bounded_size<aruco_broadcaster::srv::GetMarkerTf_Response>::value
  >
{
};

template<>
struct is_service<aruco_broadcaster::srv::GetMarkerTf>
  : std::true_type
{
};

template<>
struct is_service_request<aruco_broadcaster::srv::GetMarkerTf_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aruco_broadcaster::srv::GetMarkerTf_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__TRAITS_HPP_
