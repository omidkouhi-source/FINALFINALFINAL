// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from action_module:srv/MovePiece.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "action_module/srv/detail/move_piece__struct.h"
#include "action_module/srv/detail/move_piece__type_support.h"
#include "action_module/srv/detail/move_piece__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace action_module
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MovePiece_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePiece_Request_type_support_ids_t;

static const _MovePiece_Request_type_support_ids_t _MovePiece_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePiece_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePiece_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePiece_Request_type_support_symbol_names_t _MovePiece_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_module, srv, MovePiece_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_module, srv, MovePiece_Request)),
  }
};

typedef struct _MovePiece_Request_type_support_data_t
{
  void * data[2];
} _MovePiece_Request_type_support_data_t;

static _MovePiece_Request_type_support_data_t _MovePiece_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePiece_Request_message_typesupport_map = {
  2,
  "action_module",
  &_MovePiece_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MovePiece_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MovePiece_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MovePiece_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePiece_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &action_module__srv__MovePiece_Request__get_type_hash,
  &action_module__srv__MovePiece_Request__get_type_description,
  &action_module__srv__MovePiece_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace action_module

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_module, srv, MovePiece_Request)() {
  return &::action_module::srv::rosidl_typesupport_c::MovePiece_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_module/srv/detail/move_piece__struct.h"
// already included above
// #include "action_module/srv/detail/move_piece__type_support.h"
// already included above
// #include "action_module/srv/detail/move_piece__functions.h"
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

namespace action_module
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MovePiece_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePiece_Response_type_support_ids_t;

static const _MovePiece_Response_type_support_ids_t _MovePiece_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePiece_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePiece_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePiece_Response_type_support_symbol_names_t _MovePiece_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_module, srv, MovePiece_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_module, srv, MovePiece_Response)),
  }
};

typedef struct _MovePiece_Response_type_support_data_t
{
  void * data[2];
} _MovePiece_Response_type_support_data_t;

static _MovePiece_Response_type_support_data_t _MovePiece_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePiece_Response_message_typesupport_map = {
  2,
  "action_module",
  &_MovePiece_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MovePiece_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MovePiece_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MovePiece_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePiece_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &action_module__srv__MovePiece_Response__get_type_hash,
  &action_module__srv__MovePiece_Response__get_type_description,
  &action_module__srv__MovePiece_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace action_module

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_module, srv, MovePiece_Response)() {
  return &::action_module::srv::rosidl_typesupport_c::MovePiece_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "action_module/srv/detail/move_piece__struct.h"
// already included above
// #include "action_module/srv/detail/move_piece__type_support.h"
// already included above
// #include "action_module/srv/detail/move_piece__functions.h"
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

namespace action_module
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MovePiece_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePiece_Event_type_support_ids_t;

static const _MovePiece_Event_type_support_ids_t _MovePiece_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePiece_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePiece_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePiece_Event_type_support_symbol_names_t _MovePiece_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_module, srv, MovePiece_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_module, srv, MovePiece_Event)),
  }
};

typedef struct _MovePiece_Event_type_support_data_t
{
  void * data[2];
} _MovePiece_Event_type_support_data_t;

static _MovePiece_Event_type_support_data_t _MovePiece_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePiece_Event_message_typesupport_map = {
  2,
  "action_module",
  &_MovePiece_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MovePiece_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MovePiece_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MovePiece_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePiece_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &action_module__srv__MovePiece_Event__get_type_hash,
  &action_module__srv__MovePiece_Event__get_type_description,
  &action_module__srv__MovePiece_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace action_module

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, action_module, srv, MovePiece_Event)() {
  return &::action_module::srv::rosidl_typesupport_c::MovePiece_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_module/srv/detail/move_piece__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace action_module
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _MovePiece_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MovePiece_type_support_ids_t;

static const _MovePiece_type_support_ids_t _MovePiece_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MovePiece_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MovePiece_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MovePiece_type_support_symbol_names_t _MovePiece_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, action_module, srv, MovePiece)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_module, srv, MovePiece)),
  }
};

typedef struct _MovePiece_type_support_data_t
{
  void * data[2];
} _MovePiece_type_support_data_t;

static _MovePiece_type_support_data_t _MovePiece_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MovePiece_service_typesupport_map = {
  2,
  "action_module",
  &_MovePiece_service_typesupport_ids.typesupport_identifier[0],
  &_MovePiece_service_typesupport_symbol_names.symbol_name[0],
  &_MovePiece_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MovePiece_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MovePiece_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MovePiece_Request_message_type_support_handle,
  &MovePiece_Response_message_type_support_handle,
  &MovePiece_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    action_module,
    srv,
    MovePiece
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    action_module,
    srv,
    MovePiece
  ),
  &action_module__srv__MovePiece__get_type_hash,
  &action_module__srv__MovePiece__get_type_description,
  &action_module__srv__MovePiece__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace action_module

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, action_module, srv, MovePiece)() {
  return &::action_module::srv::rosidl_typesupport_c::MovePiece_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
