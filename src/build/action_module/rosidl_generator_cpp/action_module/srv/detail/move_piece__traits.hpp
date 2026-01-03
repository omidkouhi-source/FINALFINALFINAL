// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_module:srv/MovePiece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_module/srv/move_piece.hpp"


#ifndef ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__TRAITS_HPP_
#define ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "action_module/srv/detail/move_piece__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace action_module
{

namespace srv
{

inline void to_flow_style_yaml(
  const MovePiece_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: aruco_id
  {
    out << "aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id, out);
    out << ", ";
  }

  // member: target_square
  {
    out << "target_square: ";
    rosidl_generator_traits::value_to_yaml(msg.target_square, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MovePiece_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: aruco_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id, out);
    out << "\n";
  }

  // member: target_square
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_square: ";
    rosidl_generator_traits::value_to_yaml(msg.target_square, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovePiece_Request & msg, bool use_flow_style = false)
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

}  // namespace action_module

namespace rosidl_generator_traits
{

[[deprecated("use action_module::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_module::srv::MovePiece_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_module::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_module::srv::to_yaml() instead")]]
inline std::string to_yaml(const action_module::srv::MovePiece_Request & msg)
{
  return action_module::srv::to_yaml(msg);
}

template<>
inline const char * data_type<action_module::srv::MovePiece_Request>()
{
  return "action_module::srv::MovePiece_Request";
}

template<>
inline const char * name<action_module::srv::MovePiece_Request>()
{
  return "action_module/srv/MovePiece_Request";
}

template<>
struct has_fixed_size<action_module::srv::MovePiece_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_module::srv::MovePiece_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_module::srv::MovePiece_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace action_module
{

namespace srv
{

inline void to_flow_style_yaml(
  const MovePiece_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const MovePiece_Response & msg,
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

inline std::string to_yaml(const MovePiece_Response & msg, bool use_flow_style = false)
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

}  // namespace action_module

namespace rosidl_generator_traits
{

[[deprecated("use action_module::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_module::srv::MovePiece_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_module::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_module::srv::to_yaml() instead")]]
inline std::string to_yaml(const action_module::srv::MovePiece_Response & msg)
{
  return action_module::srv::to_yaml(msg);
}

template<>
inline const char * data_type<action_module::srv::MovePiece_Response>()
{
  return "action_module::srv::MovePiece_Response";
}

template<>
inline const char * name<action_module::srv::MovePiece_Response>()
{
  return "action_module/srv/MovePiece_Response";
}

template<>
struct has_fixed_size<action_module::srv::MovePiece_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_module::srv::MovePiece_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_module::srv::MovePiece_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace action_module
{

namespace srv
{

inline void to_flow_style_yaml(
  const MovePiece_Event & msg,
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
  const MovePiece_Event & msg,
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

inline std::string to_yaml(const MovePiece_Event & msg, bool use_flow_style = false)
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

}  // namespace action_module

namespace rosidl_generator_traits
{

[[deprecated("use action_module::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const action_module::srv::MovePiece_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  action_module::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use action_module::srv::to_yaml() instead")]]
inline std::string to_yaml(const action_module::srv::MovePiece_Event & msg)
{
  return action_module::srv::to_yaml(msg);
}

template<>
inline const char * data_type<action_module::srv::MovePiece_Event>()
{
  return "action_module::srv::MovePiece_Event";
}

template<>
inline const char * name<action_module::srv::MovePiece_Event>()
{
  return "action_module/srv/MovePiece_Event";
}

template<>
struct has_fixed_size<action_module::srv::MovePiece_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_module::srv::MovePiece_Event>
  : std::integral_constant<bool, has_bounded_size<action_module::srv::MovePiece_Request>::value && has_bounded_size<action_module::srv::MovePiece_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<action_module::srv::MovePiece_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_module::srv::MovePiece>()
{
  return "action_module::srv::MovePiece";
}

template<>
inline const char * name<action_module::srv::MovePiece>()
{
  return "action_module/srv/MovePiece";
}

template<>
struct has_fixed_size<action_module::srv::MovePiece>
  : std::integral_constant<
    bool,
    has_fixed_size<action_module::srv::MovePiece_Request>::value &&
    has_fixed_size<action_module::srv::MovePiece_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_module::srv::MovePiece>
  : std::integral_constant<
    bool,
    has_bounded_size<action_module::srv::MovePiece_Request>::value &&
    has_bounded_size<action_module::srv::MovePiece_Response>::value
  >
{
};

template<>
struct is_service<action_module::srv::MovePiece>
  : std::true_type
{
};

template<>
struct is_service_request<action_module::srv::MovePiece_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_module::srv::MovePiece_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__TRAITS_HPP_
