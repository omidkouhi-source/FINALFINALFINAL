// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotiq_85_gripper_server:srv/GripperClose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotiq_85_gripper_server/srv/detail/gripper_close__functions.h"
#include "robotiq_85_gripper_server/srv/detail/gripper_close__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperClose_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_85_gripper_server::srv::GripperClose_Request(_init);
}

void GripperClose_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_85_gripper_server::srv::GripperClose_Request *>(message_memory);
  typed_message->~GripperClose_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperClose_Request_message_member_array[1] = {
  {
    "order",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_85_gripper_server::srv::GripperClose_Request, order),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperClose_Request_message_members = {
  "robotiq_85_gripper_server::srv",  // message namespace
  "GripperClose_Request",  // message name
  1,  // number of fields
  sizeof(robotiq_85_gripper_server::srv::GripperClose_Request),
  false,  // has_any_key_member_
  GripperClose_Request_message_member_array,  // message members
  GripperClose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperClose_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperClose_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperClose_Request_message_members,
  get_message_typesupport_handle_function,
  &robotiq_85_gripper_server__srv__GripperClose_Request__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperClose_Request__get_type_description,
  &robotiq_85_gripper_server__srv__GripperClose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotiq_85_gripper_server


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Request>()
{
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_85_gripper_server, srv, GripperClose_Request)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__functions.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperClose_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_85_gripper_server::srv::GripperClose_Response(_init);
}

void GripperClose_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_85_gripper_server::srv::GripperClose_Response *>(message_memory);
  typed_message->~GripperClose_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperClose_Response_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_85_gripper_server::srv::GripperClose_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperClose_Response_message_members = {
  "robotiq_85_gripper_server::srv",  // message namespace
  "GripperClose_Response",  // message name
  1,  // number of fields
  sizeof(robotiq_85_gripper_server::srv::GripperClose_Response),
  false,  // has_any_key_member_
  GripperClose_Response_message_member_array,  // message members
  GripperClose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperClose_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperClose_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperClose_Response_message_members,
  get_message_typesupport_handle_function,
  &robotiq_85_gripper_server__srv__GripperClose_Response__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperClose_Response__get_type_description,
  &robotiq_85_gripper_server__srv__GripperClose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotiq_85_gripper_server


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Response>()
{
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_85_gripper_server, srv, GripperClose_Response)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__functions.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperClose_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_85_gripper_server::srv::GripperClose_Event(_init);
}

void GripperClose_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_85_gripper_server::srv::GripperClose_Event *>(message_memory);
  typed_message->~GripperClose_Event();
}

size_t size_function__GripperClose_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robotiq_85_gripper_server::srv::GripperClose_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GripperClose_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robotiq_85_gripper_server::srv::GripperClose_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GripperClose_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robotiq_85_gripper_server::srv::GripperClose_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GripperClose_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robotiq_85_gripper_server::srv::GripperClose_Request *>(
    get_const_function__GripperClose_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<robotiq_85_gripper_server::srv::GripperClose_Request *>(untyped_value);
  value = item;
}

void assign_function__GripperClose_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robotiq_85_gripper_server::srv::GripperClose_Request *>(
    get_function__GripperClose_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const robotiq_85_gripper_server::srv::GripperClose_Request *>(untyped_value);
  item = value;
}

void resize_function__GripperClose_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robotiq_85_gripper_server::srv::GripperClose_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GripperClose_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robotiq_85_gripper_server::srv::GripperClose_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GripperClose_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robotiq_85_gripper_server::srv::GripperClose_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GripperClose_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robotiq_85_gripper_server::srv::GripperClose_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GripperClose_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robotiq_85_gripper_server::srv::GripperClose_Response *>(
    get_const_function__GripperClose_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<robotiq_85_gripper_server::srv::GripperClose_Response *>(untyped_value);
  value = item;
}

void assign_function__GripperClose_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robotiq_85_gripper_server::srv::GripperClose_Response *>(
    get_function__GripperClose_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const robotiq_85_gripper_server::srv::GripperClose_Response *>(untyped_value);
  item = value;
}

void resize_function__GripperClose_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robotiq_85_gripper_server::srv::GripperClose_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperClose_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_85_gripper_server::srv::GripperClose_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robotiq_85_gripper_server::srv::GripperClose_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GripperClose_Event__request,  // size() function pointer
    get_const_function__GripperClose_Event__request,  // get_const(index) function pointer
    get_function__GripperClose_Event__request,  // get(index) function pointer
    fetch_function__GripperClose_Event__request,  // fetch(index, &value) function pointer
    assign_function__GripperClose_Event__request,  // assign(index, value) function pointer
    resize_function__GripperClose_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robotiq_85_gripper_server::srv::GripperClose_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GripperClose_Event__response,  // size() function pointer
    get_const_function__GripperClose_Event__response,  // get_const(index) function pointer
    get_function__GripperClose_Event__response,  // get(index) function pointer
    fetch_function__GripperClose_Event__response,  // fetch(index, &value) function pointer
    assign_function__GripperClose_Event__response,  // assign(index, value) function pointer
    resize_function__GripperClose_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperClose_Event_message_members = {
  "robotiq_85_gripper_server::srv",  // message namespace
  "GripperClose_Event",  // message name
  3,  // number of fields
  sizeof(robotiq_85_gripper_server::srv::GripperClose_Event),
  false,  // has_any_key_member_
  GripperClose_Event_message_member_array,  // message members
  GripperClose_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperClose_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperClose_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperClose_Event_message_members,
  get_message_typesupport_handle_function,
  &robotiq_85_gripper_server__srv__GripperClose_Event__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperClose_Event__get_type_description,
  &robotiq_85_gripper_server__srv__GripperClose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotiq_85_gripper_server


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Event>()
{
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_85_gripper_server, srv, GripperClose_Event)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__functions.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GripperClose_service_members = {
  "robotiq_85_gripper_server::srv",  // service namespace
  "GripperClose",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<robotiq_85_gripper_server::srv::GripperClose>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GripperClose_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperClose_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robotiq_85_gripper_server::srv::GripperClose_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robotiq_85_gripper_server::srv::GripperClose>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robotiq_85_gripper_server::srv::GripperClose>,
  &robotiq_85_gripper_server__srv__GripperClose__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperClose__get_type_description,
  &robotiq_85_gripper_server__srv__GripperClose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace robotiq_85_gripper_server


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotiq_85_gripper_server::srv::GripperClose>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::robotiq_85_gripper_server::srv::rosidl_typesupport_introspection_cpp::GripperClose_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_85_gripper_server::srv::GripperClose_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_85_gripper_server::srv::GripperClose_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::robotiq_85_gripper_server::srv::GripperClose_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_85_gripper_server, srv, GripperClose)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<robotiq_85_gripper_server::srv::GripperClose>();
}

#ifdef __cplusplus
}
#endif
