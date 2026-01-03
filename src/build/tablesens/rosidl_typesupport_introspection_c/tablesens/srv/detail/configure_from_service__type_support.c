// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tablesens:srv/ConfigureFromService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tablesens/srv/detail/configure_from_service__rosidl_typesupport_introspection_c.h"
#include "tablesens/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tablesens/srv/detail/configure_from_service__functions.h"
#include "tablesens/srv/detail/configure_from_service__struct.h"


// Include directives for member types
// Member `fix_list`
#include "tablesens/msg/marker_fix_list.h"
// Member `fix_list`
#include "tablesens/msg/detail/marker_fix_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tablesens__srv__ConfigureFromService_Request__init(message_memory);
}

void tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_fini_function(void * message_memory)
{
  tablesens__srv__ConfigureFromService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_member_array[1] = {
  {
    "fix_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tablesens__srv__ConfigureFromService_Request, fix_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_members = {
  "tablesens__srv",  // message namespace
  "ConfigureFromService_Request",  // message name
  1,  // number of fields
  sizeof(tablesens__srv__ConfigureFromService_Request),
  false,  // has_any_key_member_
  tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_member_array,  // message members
  tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_type_support_handle = {
  0,
  &tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_members,
  get_message_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Request__get_type_hash,
  &tablesens__srv__ConfigureFromService_Request__get_type_description,
  &tablesens__srv__ConfigureFromService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tablesens
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Request)() {
  tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, msg, MarkerFixList)();
  if (!tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_type_support_handle.typesupport_identifier) {
    tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tablesens/srv/detail/configure_from_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tablesens/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__functions.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tablesens__srv__ConfigureFromService_Response__init(message_memory);
}

void tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_fini_function(void * message_memory)
{
  tablesens__srv__ConfigureFromService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tablesens__srv__ConfigureFromService_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_members = {
  "tablesens__srv",  // message namespace
  "ConfigureFromService_Response",  // message name
  1,  // number of fields
  sizeof(tablesens__srv__ConfigureFromService_Response),
  false,  // has_any_key_member_
  tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_member_array,  // message members
  tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle = {
  0,
  &tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_members,
  get_message_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Response__get_type_hash,
  &tablesens__srv__ConfigureFromService_Response__get_type_description,
  &tablesens__srv__ConfigureFromService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tablesens
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Response)() {
  if (!tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle.typesupport_identifier) {
    tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tablesens/srv/detail/configure_from_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tablesens/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__functions.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "tablesens/srv/configure_from_service.h"
// Member `request`
// Member `response`
// already included above
// #include "tablesens/srv/detail/configure_from_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tablesens__srv__ConfigureFromService_Event__init(message_memory);
}

void tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_fini_function(void * message_memory)
{
  tablesens__srv__ConfigureFromService_Event__fini(message_memory);
}

size_t tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__size_function__ConfigureFromService_Event__request(
  const void * untyped_member)
{
  const tablesens__srv__ConfigureFromService_Request__Sequence * member =
    (const tablesens__srv__ConfigureFromService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureFromService_Event__request(
  const void * untyped_member, size_t index)
{
  const tablesens__srv__ConfigureFromService_Request__Sequence * member =
    (const tablesens__srv__ConfigureFromService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_function__ConfigureFromService_Event__request(
  void * untyped_member, size_t index)
{
  tablesens__srv__ConfigureFromService_Request__Sequence * member =
    (tablesens__srv__ConfigureFromService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureFromService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tablesens__srv__ConfigureFromService_Request * item =
    ((const tablesens__srv__ConfigureFromService_Request *)
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureFromService_Event__request(untyped_member, index));
  tablesens__srv__ConfigureFromService_Request * value =
    (tablesens__srv__ConfigureFromService_Request *)(untyped_value);
  *value = *item;
}

void tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureFromService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tablesens__srv__ConfigureFromService_Request * item =
    ((tablesens__srv__ConfigureFromService_Request *)
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_function__ConfigureFromService_Event__request(untyped_member, index));
  const tablesens__srv__ConfigureFromService_Request * value =
    (const tablesens__srv__ConfigureFromService_Request *)(untyped_value);
  *item = *value;
}

bool tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureFromService_Event__request(
  void * untyped_member, size_t size)
{
  tablesens__srv__ConfigureFromService_Request__Sequence * member =
    (tablesens__srv__ConfigureFromService_Request__Sequence *)(untyped_member);
  tablesens__srv__ConfigureFromService_Request__Sequence__fini(member);
  return tablesens__srv__ConfigureFromService_Request__Sequence__init(member, size);
}

size_t tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__size_function__ConfigureFromService_Event__response(
  const void * untyped_member)
{
  const tablesens__srv__ConfigureFromService_Response__Sequence * member =
    (const tablesens__srv__ConfigureFromService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureFromService_Event__response(
  const void * untyped_member, size_t index)
{
  const tablesens__srv__ConfigureFromService_Response__Sequence * member =
    (const tablesens__srv__ConfigureFromService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_function__ConfigureFromService_Event__response(
  void * untyped_member, size_t index)
{
  tablesens__srv__ConfigureFromService_Response__Sequence * member =
    (tablesens__srv__ConfigureFromService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureFromService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tablesens__srv__ConfigureFromService_Response * item =
    ((const tablesens__srv__ConfigureFromService_Response *)
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureFromService_Event__response(untyped_member, index));
  tablesens__srv__ConfigureFromService_Response * value =
    (tablesens__srv__ConfigureFromService_Response *)(untyped_value);
  *value = *item;
}

void tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureFromService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tablesens__srv__ConfigureFromService_Response * item =
    ((tablesens__srv__ConfigureFromService_Response *)
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_function__ConfigureFromService_Event__response(untyped_member, index));
  const tablesens__srv__ConfigureFromService_Response * value =
    (const tablesens__srv__ConfigureFromService_Response *)(untyped_value);
  *item = *value;
}

bool tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureFromService_Event__response(
  void * untyped_member, size_t size)
{
  tablesens__srv__ConfigureFromService_Response__Sequence * member =
    (tablesens__srv__ConfigureFromService_Response__Sequence *)(untyped_member);
  tablesens__srv__ConfigureFromService_Response__Sequence__fini(member);
  return tablesens__srv__ConfigureFromService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tablesens__srv__ConfigureFromService_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tablesens__srv__ConfigureFromService_Event, request),  // bytes offset in struct
    NULL,  // default value
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__size_function__ConfigureFromService_Event__request,  // size() function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureFromService_Event__request,  // get_const(index) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_function__ConfigureFromService_Event__request,  // get(index) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureFromService_Event__request,  // fetch(index, &value) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureFromService_Event__request,  // assign(index, value) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureFromService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tablesens__srv__ConfigureFromService_Event, response),  // bytes offset in struct
    NULL,  // default value
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__size_function__ConfigureFromService_Event__response,  // size() function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_const_function__ConfigureFromService_Event__response,  // get_const(index) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__get_function__ConfigureFromService_Event__response,  // get(index) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__fetch_function__ConfigureFromService_Event__response,  // fetch(index, &value) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__assign_function__ConfigureFromService_Event__response,  // assign(index, value) function pointer
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__resize_function__ConfigureFromService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_members = {
  "tablesens__srv",  // message namespace
  "ConfigureFromService_Event",  // message name
  3,  // number of fields
  sizeof(tablesens__srv__ConfigureFromService_Event),
  false,  // has_any_key_member_
  tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_member_array,  // message members
  tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_type_support_handle = {
  0,
  &tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_members,
  get_message_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Event__get_type_hash,
  &tablesens__srv__ConfigureFromService_Event__get_type_description,
  &tablesens__srv__ConfigureFromService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tablesens
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Event)() {
  tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Request)();
  tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Response)();
  if (!tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_type_support_handle.typesupport_identifier) {
    tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tablesens/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_members = {
  "tablesens__srv",  // service namespace
  "ConfigureFromService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_type_support_handle,
  NULL,  // response message
  // tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle
  NULL  // event_message
  // tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle
};


static rosidl_service_type_support_t tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_type_support_handle = {
  0,
  &tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_members,
  get_service_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Request__rosidl_typesupport_introspection_c__ConfigureFromService_Request_message_type_support_handle,
  &tablesens__srv__ConfigureFromService_Response__rosidl_typesupport_introspection_c__ConfigureFromService_Response_message_type_support_handle,
  &tablesens__srv__ConfigureFromService_Event__rosidl_typesupport_introspection_c__ConfigureFromService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tablesens,
    srv,
    ConfigureFromService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tablesens,
    srv,
    ConfigureFromService
  ),
  &tablesens__srv__ConfigureFromService__get_type_hash,
  &tablesens__srv__ConfigureFromService__get_type_description,
  &tablesens__srv__ConfigureFromService__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tablesens
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService)(void) {
  if (!tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_type_support_handle.typesupport_identifier) {
    tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, srv, ConfigureFromService_Event)()->data;
  }

  return &tablesens__srv__detail__configure_from_service__rosidl_typesupport_introspection_c__ConfigureFromService_service_type_support_handle;
}
