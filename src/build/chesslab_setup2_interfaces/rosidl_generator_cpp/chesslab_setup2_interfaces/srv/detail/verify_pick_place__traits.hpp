// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chesslab_setup2_interfaces:srv/VerifyPickPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/verify_pick_place.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__TRAITS_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chesslab_setup2_interfaces/srv/detail/verify_pick_place__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace chesslab_setup2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VerifyPickPlace_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: piece_aruco_id
  {
    out << "piece_aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.piece_aruco_id, out);
    out << ", ";
  }

  // member: target_position
  {
    out << "target_position: ";
    to_flow_style_yaml(msg.target_position, out);
    out << ", ";
  }

  // member: tolerance
  {
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VerifyPickPlace_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: piece_aruco_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "piece_aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.piece_aruco_id, out);
    out << "\n";
  }

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position:\n";
    to_block_style_yaml(msg.target_position, out, indentation + 2);
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VerifyPickPlace_Request & msg, bool use_flow_style = false)
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

}  // namespace chesslab_setup2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chesslab_setup2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chesslab_setup2_interfaces::srv::VerifyPickPlace_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::srv::VerifyPickPlace_Request & msg)
{
  return chesslab_setup2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>()
{
  return "chesslab_setup2_interfaces::srv::VerifyPickPlace_Request";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>()
{
  return "chesslab_setup2_interfaces/srv/VerifyPickPlace_Request";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace chesslab_setup2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VerifyPickPlace_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: piece_at_target
  {
    out << "piece_at_target: ";
    rosidl_generator_traits::value_to_yaml(msg.piece_at_target, out);
    out << ", ";
  }

  // member: distance_to_target
  {
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VerifyPickPlace_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: piece_at_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "piece_at_target: ";
    rosidl_generator_traits::value_to_yaml(msg.piece_at_target, out);
    out << "\n";
  }

  // member: distance_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_target, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VerifyPickPlace_Response & msg, bool use_flow_style = false)
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

}  // namespace chesslab_setup2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chesslab_setup2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chesslab_setup2_interfaces::srv::VerifyPickPlace_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::srv::VerifyPickPlace_Response & msg)
{
  return chesslab_setup2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>()
{
  return "chesslab_setup2_interfaces::srv::VerifyPickPlace_Response";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>()
{
  return "chesslab_setup2_interfaces/srv/VerifyPickPlace_Response";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace chesslab_setup2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const VerifyPickPlace_Event & msg,
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
  const VerifyPickPlace_Event & msg,
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

inline std::string to_yaml(const VerifyPickPlace_Event & msg, bool use_flow_style = false)
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

}  // namespace chesslab_setup2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use chesslab_setup2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const chesslab_setup2_interfaces::srv::VerifyPickPlace_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::srv::VerifyPickPlace_Event & msg)
{
  return chesslab_setup2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::VerifyPickPlace_Event>()
{
  return "chesslab_setup2_interfaces::srv::VerifyPickPlace_Event";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::VerifyPickPlace_Event>()
{
  return "chesslab_setup2_interfaces/srv/VerifyPickPlace_Event";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Event>
  : std::integral_constant<bool, has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>::value && has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<chesslab_setup2_interfaces::srv::VerifyPickPlace_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::VerifyPickPlace>()
{
  return "chesslab_setup2_interfaces::srv::VerifyPickPlace";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::VerifyPickPlace>()
{
  return "chesslab_setup2_interfaces/srv/VerifyPickPlace";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::VerifyPickPlace>
  : std::integral_constant<
    bool,
    has_fixed_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>::value &&
    has_fixed_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>::value
  >
{
};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace>
  : std::integral_constant<
    bool,
    has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>::value &&
    has_bounded_size<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>::value
  >
{
};

template<>
struct is_service<chesslab_setup2_interfaces::srv::VerifyPickPlace>
  : std::true_type
{
};

template<>
struct is_service_request<chesslab_setup2_interfaces::srv::VerifyPickPlace_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chesslab_setup2_interfaces::srv::VerifyPickPlace_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__TRAITS_HPP_
