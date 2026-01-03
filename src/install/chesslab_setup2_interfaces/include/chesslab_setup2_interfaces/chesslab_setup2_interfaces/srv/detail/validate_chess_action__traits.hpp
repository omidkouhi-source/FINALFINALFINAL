// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chesslab_setup2_interfaces:srv/ValidateChessAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/validate_chess_action.hpp"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__TRAITS_HPP_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "chesslab_setup2_interfaces/srv/detail/validate_chess_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace chesslab_setup2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateChessAction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: from_cell
  {
    out << "from_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.from_cell, out);
    out << ", ";
  }

  // member: to_cell
  {
    out << "to_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.to_cell, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ValidateChessAction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: from_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.from_cell, out);
    out << "\n";
  }

  // member: to_cell
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_cell: ";
    rosidl_generator_traits::value_to_yaml(msg.to_cell, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ValidateChessAction_Request & msg, bool use_flow_style = false)
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
  const chesslab_setup2_interfaces::srv::ValidateChessAction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::srv::ValidateChessAction_Request & msg)
{
  return chesslab_setup2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>()
{
  return "chesslab_setup2_interfaces::srv::ValidateChessAction_Request";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>()
{
  return "chesslab_setup2_interfaces/srv/ValidateChessAction_Request";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace chesslab_setup2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ValidateChessAction_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
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
  const ValidateChessAction_Response & msg,
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

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
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

inline std::string to_yaml(const ValidateChessAction_Response & msg, bool use_flow_style = false)
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
  const chesslab_setup2_interfaces::srv::ValidateChessAction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::srv::ValidateChessAction_Response & msg)
{
  return chesslab_setup2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>()
{
  return "chesslab_setup2_interfaces::srv::ValidateChessAction_Response";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>()
{
  return "chesslab_setup2_interfaces/srv/ValidateChessAction_Response";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>
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
  const ValidateChessAction_Event & msg,
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
  const ValidateChessAction_Event & msg,
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

inline std::string to_yaml(const ValidateChessAction_Event & msg, bool use_flow_style = false)
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
  const chesslab_setup2_interfaces::srv::ValidateChessAction_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  chesslab_setup2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use chesslab_setup2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const chesslab_setup2_interfaces::srv::ValidateChessAction_Event & msg)
{
  return chesslab_setup2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::ValidateChessAction_Event>()
{
  return "chesslab_setup2_interfaces::srv::ValidateChessAction_Event";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::ValidateChessAction_Event>()
{
  return "chesslab_setup2_interfaces/srv/ValidateChessAction_Event";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Event>
  : std::integral_constant<bool, has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>::value && has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<chesslab_setup2_interfaces::srv::ValidateChessAction_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesslab_setup2_interfaces::srv::ValidateChessAction>()
{
  return "chesslab_setup2_interfaces::srv::ValidateChessAction";
}

template<>
inline const char * name<chesslab_setup2_interfaces::srv::ValidateChessAction>()
{
  return "chesslab_setup2_interfaces/srv/ValidateChessAction";
}

template<>
struct has_fixed_size<chesslab_setup2_interfaces::srv::ValidateChessAction>
  : std::integral_constant<
    bool,
    has_fixed_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>::value &&
    has_fixed_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>::value
  >
{
};

template<>
struct has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction>
  : std::integral_constant<
    bool,
    has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>::value &&
    has_bounded_size<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>::value
  >
{
};

template<>
struct is_service<chesslab_setup2_interfaces::srv::ValidateChessAction>
  : std::true_type
{
};

template<>
struct is_service_request<chesslab_setup2_interfaces::srv::ValidateChessAction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chesslab_setup2_interfaces::srv::ValidateChessAction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__TRAITS_HPP_
