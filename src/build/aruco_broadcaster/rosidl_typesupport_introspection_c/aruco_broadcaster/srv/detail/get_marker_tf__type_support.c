// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aruco_broadcaster/srv/detail/get_marker_tf__rosidl_typesupport_introspection_c.h"
#include "aruco_broadcaster/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"
#include "aruco_broadcaster/srv/detail/get_marker_tf__struct.h"


// Include directives for member types
// Member `parent`
// Member `marker_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_broadcaster__srv__GetMarkerTf_Request__init(message_memory);
}

void aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_fini_function(void * message_memory)
{
  aruco_broadcaster__srv__GetMarkerTf_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_member_array[2] = {
  {
    "parent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_broadcaster__srv__GetMarkerTf_Request, parent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_broadcaster__srv__GetMarkerTf_Request, marker_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_members = {
  "aruco_broadcaster__srv",  // message namespace
  "GetMarkerTf_Request",  // message name
  2,  // number of fields
  sizeof(aruco_broadcaster__srv__GetMarkerTf_Request),
  false,  // has_any_key_member_
  aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_member_array,  // message members
  aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_type_support_handle = {
  0,
  &aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_members,
  get_message_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Request__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf_Request__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_broadcaster
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Request)() {
  if (!aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_type_support_handle.typesupport_identifier) {
    aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aruco_broadcaster/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__struct.h"


// Include directives for member types
// Member `ret`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `ret`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_broadcaster__srv__GetMarkerTf_Response__init(message_memory);
}

void aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_fini_function(void * message_memory)
{
  aruco_broadcaster__srv__GetMarkerTf_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_broadcaster__srv__GetMarkerTf_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_members = {
  "aruco_broadcaster__srv",  // message namespace
  "GetMarkerTf_Response",  // message name
  1,  // number of fields
  sizeof(aruco_broadcaster__srv__GetMarkerTf_Response),
  false,  // has_any_key_member_
  aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_member_array,  // message members
  aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle = {
  0,
  &aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_members,
  get_message_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Response__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf_Response__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_broadcaster
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Response)() {
  aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle.typesupport_identifier) {
    aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aruco_broadcaster/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "aruco_broadcaster/srv/get_marker_tf.h"
// Member `request`
// Member `response`
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aruco_broadcaster__srv__GetMarkerTf_Event__init(message_memory);
}

void aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_fini_function(void * message_memory)
{
  aruco_broadcaster__srv__GetMarkerTf_Event__fini(message_memory);
}

size_t aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__size_function__GetMarkerTf_Event__request(
  const void * untyped_member)
{
  const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * member =
    (const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_const_function__GetMarkerTf_Event__request(
  const void * untyped_member, size_t index)
{
  const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * member =
    (const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_function__GetMarkerTf_Event__request(
  void * untyped_member, size_t index)
{
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * member =
    (aruco_broadcaster__srv__GetMarkerTf_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__fetch_function__GetMarkerTf_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_broadcaster__srv__GetMarkerTf_Request * item =
    ((const aruco_broadcaster__srv__GetMarkerTf_Request *)
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_const_function__GetMarkerTf_Event__request(untyped_member, index));
  aruco_broadcaster__srv__GetMarkerTf_Request * value =
    (aruco_broadcaster__srv__GetMarkerTf_Request *)(untyped_value);
  *value = *item;
}

void aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__assign_function__GetMarkerTf_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_broadcaster__srv__GetMarkerTf_Request * item =
    ((aruco_broadcaster__srv__GetMarkerTf_Request *)
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_function__GetMarkerTf_Event__request(untyped_member, index));
  const aruco_broadcaster__srv__GetMarkerTf_Request * value =
    (const aruco_broadcaster__srv__GetMarkerTf_Request *)(untyped_value);
  *item = *value;
}

bool aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__resize_function__GetMarkerTf_Event__request(
  void * untyped_member, size_t size)
{
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * member =
    (aruco_broadcaster__srv__GetMarkerTf_Request__Sequence *)(untyped_member);
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__fini(member);
  return aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__init(member, size);
}

size_t aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__size_function__GetMarkerTf_Event__response(
  const void * untyped_member)
{
  const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * member =
    (const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_const_function__GetMarkerTf_Event__response(
  const void * untyped_member, size_t index)
{
  const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * member =
    (const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_function__GetMarkerTf_Event__response(
  void * untyped_member, size_t index)
{
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * member =
    (aruco_broadcaster__srv__GetMarkerTf_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__fetch_function__GetMarkerTf_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const aruco_broadcaster__srv__GetMarkerTf_Response * item =
    ((const aruco_broadcaster__srv__GetMarkerTf_Response *)
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_const_function__GetMarkerTf_Event__response(untyped_member, index));
  aruco_broadcaster__srv__GetMarkerTf_Response * value =
    (aruco_broadcaster__srv__GetMarkerTf_Response *)(untyped_value);
  *value = *item;
}

void aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__assign_function__GetMarkerTf_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  aruco_broadcaster__srv__GetMarkerTf_Response * item =
    ((aruco_broadcaster__srv__GetMarkerTf_Response *)
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_function__GetMarkerTf_Event__response(untyped_member, index));
  const aruco_broadcaster__srv__GetMarkerTf_Response * value =
    (const aruco_broadcaster__srv__GetMarkerTf_Response *)(untyped_value);
  *item = *value;
}

bool aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__resize_function__GetMarkerTf_Event__response(
  void * untyped_member, size_t size)
{
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * member =
    (aruco_broadcaster__srv__GetMarkerTf_Response__Sequence *)(untyped_member);
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__fini(member);
  return aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_broadcaster__srv__GetMarkerTf_Event, info),  // bytes offset in struct
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
    offsetof(aruco_broadcaster__srv__GetMarkerTf_Event, request),  // bytes offset in struct
    NULL,  // default value
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__size_function__GetMarkerTf_Event__request,  // size() function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_const_function__GetMarkerTf_Event__request,  // get_const(index) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_function__GetMarkerTf_Event__request,  // get(index) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__fetch_function__GetMarkerTf_Event__request,  // fetch(index, &value) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__assign_function__GetMarkerTf_Event__request,  // assign(index, value) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__resize_function__GetMarkerTf_Event__request  // resize(index) function pointer
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
    offsetof(aruco_broadcaster__srv__GetMarkerTf_Event, response),  // bytes offset in struct
    NULL,  // default value
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__size_function__GetMarkerTf_Event__response,  // size() function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_const_function__GetMarkerTf_Event__response,  // get_const(index) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__get_function__GetMarkerTf_Event__response,  // get(index) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__fetch_function__GetMarkerTf_Event__response,  // fetch(index, &value) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__assign_function__GetMarkerTf_Event__response,  // assign(index, value) function pointer
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__resize_function__GetMarkerTf_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_members = {
  "aruco_broadcaster__srv",  // message namespace
  "GetMarkerTf_Event",  // message name
  3,  // number of fields
  sizeof(aruco_broadcaster__srv__GetMarkerTf_Event),
  false,  // has_any_key_member_
  aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_member_array,  // message members
  aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_type_support_handle = {
  0,
  &aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_members,
  get_message_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Event__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf_Event__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_broadcaster
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Event)() {
  aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Request)();
  aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Response)();
  if (!aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_type_support_handle.typesupport_identifier) {
    aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aruco_broadcaster/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_members = {
  "aruco_broadcaster__srv",  // service namespace
  "GetMarkerTf",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_type_support_handle,
  NULL,  // response message
  // aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle
  NULL  // event_message
  // aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle
};


static rosidl_service_type_support_t aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_type_support_handle = {
  0,
  &aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_members,
  get_service_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Request__rosidl_typesupport_introspection_c__GetMarkerTf_Request_message_type_support_handle,
  &aruco_broadcaster__srv__GetMarkerTf_Response__rosidl_typesupport_introspection_c__GetMarkerTf_Response_message_type_support_handle,
  &aruco_broadcaster__srv__GetMarkerTf_Event__rosidl_typesupport_introspection_c__GetMarkerTf_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aruco_broadcaster,
    srv,
    GetMarkerTf
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    aruco_broadcaster,
    srv,
    GetMarkerTf
  ),
  &aruco_broadcaster__srv__GetMarkerTf__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aruco_broadcaster
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf)(void) {
  if (!aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_type_support_handle.typesupport_identifier) {
    aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aruco_broadcaster, srv, GetMarkerTf_Event)()->data;
  }

  return &aruco_broadcaster__srv__detail__get_marker_tf__rosidl_typesupport_introspection_c__GetMarkerTf_service_type_support_handle;
}
