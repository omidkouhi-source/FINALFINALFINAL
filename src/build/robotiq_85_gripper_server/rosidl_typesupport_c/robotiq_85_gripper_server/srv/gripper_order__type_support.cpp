// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robotiq_85_gripper_server:srv/GripperOrder.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robotiq_85_gripper_server/srv/detail/gripper_order__struct.h"
#include "robotiq_85_gripper_server/srv/detail/gripper_order__type_support.h"
#include "robotiq_85_gripper_server/srv/detail/gripper_order__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GripperOrder_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperOrder_Request_type_support_ids_t;

static const _GripperOrder_Request_type_support_ids_t _GripperOrder_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GripperOrder_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperOrder_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperOrder_Request_type_support_symbol_names_t _GripperOrder_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_85_gripper_server, srv, GripperOrder_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotiq_85_gripper_server, srv, GripperOrder_Request)),
  }
};

typedef struct _GripperOrder_Request_type_support_data_t
{
  void * data[2];
} _GripperOrder_Request_type_support_data_t;

static _GripperOrder_Request_type_support_data_t _GripperOrder_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperOrder_Request_message_typesupport_map = {
  2,
  "robotiq_85_gripper_server",
  &_GripperOrder_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GripperOrder_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GripperOrder_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GripperOrder_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperOrder_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robotiq_85_gripper_server__srv__GripperOrder_Request__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperOrder_Request__get_type_description,
  &robotiq_85_gripper_server__srv__GripperOrder_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robotiq_85_gripper_server

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robotiq_85_gripper_server, srv, GripperOrder_Request)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_c::GripperOrder_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__struct.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__type_support.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GripperOrder_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperOrder_Response_type_support_ids_t;

static const _GripperOrder_Response_type_support_ids_t _GripperOrder_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GripperOrder_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperOrder_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperOrder_Response_type_support_symbol_names_t _GripperOrder_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_85_gripper_server, srv, GripperOrder_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotiq_85_gripper_server, srv, GripperOrder_Response)),
  }
};

typedef struct _GripperOrder_Response_type_support_data_t
{
  void * data[2];
} _GripperOrder_Response_type_support_data_t;

static _GripperOrder_Response_type_support_data_t _GripperOrder_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperOrder_Response_message_typesupport_map = {
  2,
  "robotiq_85_gripper_server",
  &_GripperOrder_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GripperOrder_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GripperOrder_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GripperOrder_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperOrder_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robotiq_85_gripper_server__srv__GripperOrder_Response__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperOrder_Response__get_type_description,
  &robotiq_85_gripper_server__srv__GripperOrder_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robotiq_85_gripper_server

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robotiq_85_gripper_server, srv, GripperOrder_Response)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_c::GripperOrder_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__struct.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__type_support.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GripperOrder_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperOrder_Event_type_support_ids_t;

static const _GripperOrder_Event_type_support_ids_t _GripperOrder_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GripperOrder_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperOrder_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperOrder_Event_type_support_symbol_names_t _GripperOrder_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_85_gripper_server, srv, GripperOrder_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotiq_85_gripper_server, srv, GripperOrder_Event)),
  }
};

typedef struct _GripperOrder_Event_type_support_data_t
{
  void * data[2];
} _GripperOrder_Event_type_support_data_t;

static _GripperOrder_Event_type_support_data_t _GripperOrder_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperOrder_Event_message_typesupport_map = {
  2,
  "robotiq_85_gripper_server",
  &_GripperOrder_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GripperOrder_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GripperOrder_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GripperOrder_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperOrder_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robotiq_85_gripper_server__srv__GripperOrder_Event__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperOrder_Event__get_type_description,
  &robotiq_85_gripper_server__srv__GripperOrder_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robotiq_85_gripper_server

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robotiq_85_gripper_server, srv, GripperOrder_Event)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_c::GripperOrder_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotiq_85_gripper_server/srv/detail/gripper_order__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace robotiq_85_gripper_server
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GripperOrder_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperOrder_type_support_ids_t;

static const _GripperOrder_type_support_ids_t _GripperOrder_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GripperOrder_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperOrder_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperOrder_type_support_symbol_names_t _GripperOrder_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_85_gripper_server, srv, GripperOrder)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotiq_85_gripper_server, srv, GripperOrder)),
  }
};

typedef struct _GripperOrder_type_support_data_t
{
  void * data[2];
} _GripperOrder_type_support_data_t;

static _GripperOrder_type_support_data_t _GripperOrder_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperOrder_service_typesupport_map = {
  2,
  "robotiq_85_gripper_server",
  &_GripperOrder_service_typesupport_ids.typesupport_identifier[0],
  &_GripperOrder_service_typesupport_symbol_names.symbol_name[0],
  &_GripperOrder_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GripperOrder_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperOrder_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GripperOrder_Request_message_type_support_handle,
  &GripperOrder_Response_message_type_support_handle,
  &GripperOrder_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robotiq_85_gripper_server,
    srv,
    GripperOrder
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robotiq_85_gripper_server,
    srv,
    GripperOrder
  ),
  &robotiq_85_gripper_server__srv__GripperOrder__get_type_hash,
  &robotiq_85_gripper_server__srv__GripperOrder__get_type_description,
  &robotiq_85_gripper_server__srv__GripperOrder__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robotiq_85_gripper_server

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robotiq_85_gripper_server, srv, GripperOrder)() {
  return &::robotiq_85_gripper_server::srv::rosidl_typesupport_c::GripperOrder_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
