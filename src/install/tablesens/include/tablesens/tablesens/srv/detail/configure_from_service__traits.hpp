// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tablesens:srv/ConfigureFromService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/srv/configure_from_service.hpp"


#ifndef TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__TRAITS_HPP_
#define TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tablesens/srv/detail/configure_from_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fix_list'
#include "tablesens/msg/detail/marker_fix_list__traits.hpp"

namespace tablesens
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureFromService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: fix_list
  {
    out << "fix_list: ";
    to_flow_style_yaml(msg.fix_list, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureFromService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fix_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_list:\n";
    to_block_style_yaml(msg.fix_list, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureFromService_Request & msg, bool use_flow_style = false)
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

}  // namespace tablesens

namespace rosidl_generator_traits
{

[[deprecated("use tablesens::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tablesens::srv::ConfigureFromService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tablesens::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tablesens::srv::to_yaml() instead")]]
inline std::string to_yaml(const tablesens::srv::ConfigureFromService_Request & msg)
{
  return tablesens::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tablesens::srv::ConfigureFromService_Request>()
{
  return "tablesens::srv::ConfigureFromService_Request";
}

template<>
inline const char * name<tablesens::srv::ConfigureFromService_Request>()
{
  return "tablesens/srv/ConfigureFromService_Request";
}

template<>
struct has_fixed_size<tablesens::srv::ConfigureFromService_Request>
  : std::integral_constant<bool, has_fixed_size<tablesens::msg::MarkerFixList>::value> {};

template<>
struct has_bounded_size<tablesens::srv::ConfigureFromService_Request>
  : std::integral_constant<bool, has_bounded_size<tablesens::msg::MarkerFixList>::value> {};

template<>
struct is_message<tablesens::srv::ConfigureFromService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tablesens
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureFromService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureFromService_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureFromService_Response & msg, bool use_flow_style = false)
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

}  // namespace tablesens

namespace rosidl_generator_traits
{

[[deprecated("use tablesens::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tablesens::srv::ConfigureFromService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tablesens::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tablesens::srv::to_yaml() instead")]]
inline std::string to_yaml(const tablesens::srv::ConfigureFromService_Response & msg)
{
  return tablesens::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tablesens::srv::ConfigureFromService_Response>()
{
  return "tablesens::srv::ConfigureFromService_Response";
}

template<>
inline const char * name<tablesens::srv::ConfigureFromService_Response>()
{
  return "tablesens/srv/ConfigureFromService_Response";
}

template<>
struct has_fixed_size<tablesens::srv::ConfigureFromService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tablesens::srv::ConfigureFromService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tablesens::srv::ConfigureFromService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace tablesens
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureFromService_Event & msg,
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
  const ConfigureFromService_Event & msg,
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

inline std::string to_yaml(const ConfigureFromService_Event & msg, bool use_flow_style = false)
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

}  // namespace tablesens

namespace rosidl_generator_traits
{

[[deprecated("use tablesens::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tablesens::srv::ConfigureFromService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  tablesens::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tablesens::srv::to_yaml() instead")]]
inline std::string to_yaml(const tablesens::srv::ConfigureFromService_Event & msg)
{
  return tablesens::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tablesens::srv::ConfigureFromService_Event>()
{
  return "tablesens::srv::ConfigureFromService_Event";
}

template<>
inline const char * name<tablesens::srv::ConfigureFromService_Event>()
{
  return "tablesens/srv/ConfigureFromService_Event";
}

template<>
struct has_fixed_size<tablesens::srv::ConfigureFromService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tablesens::srv::ConfigureFromService_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<tablesens::srv::ConfigureFromService_Request>::value && has_bounded_size<tablesens::srv::ConfigureFromService_Response>::value> {};

template<>
struct is_message<tablesens::srv::ConfigureFromService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tablesens::srv::ConfigureFromService>()
{
  return "tablesens::srv::ConfigureFromService";
}

template<>
inline const char * name<tablesens::srv::ConfigureFromService>()
{
  return "tablesens/srv/ConfigureFromService";
}

template<>
struct has_fixed_size<tablesens::srv::ConfigureFromService>
  : std::integral_constant<
    bool,
    has_fixed_size<tablesens::srv::ConfigureFromService_Request>::value &&
    has_fixed_size<tablesens::srv::ConfigureFromService_Response>::value
  >
{
};

template<>
struct has_bounded_size<tablesens::srv::ConfigureFromService>
  : std::integral_constant<
    bool,
    has_bounded_size<tablesens::srv::ConfigureFromService_Request>::value &&
    has_bounded_size<tablesens::srv::ConfigureFromService_Response>::value
  >
{
};

template<>
struct is_service<tablesens::srv::ConfigureFromService>
  : std::true_type
{
};

template<>
struct is_service_request<tablesens::srv::ConfigureFromService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tablesens::srv::ConfigureFromService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__TRAITS_HPP_
