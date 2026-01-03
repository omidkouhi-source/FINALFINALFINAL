// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from chesslab_setup2_interfaces:srv/AttachObj.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chesslab_setup2_interfaces/srv/detail/attach_obj__struct.h"
#include "chesslab_setup2_interfaces/srv/detail/attach_obj__type_support.h"
#include "chesslab_setup2_interfaces/srv/detail/attach_obj__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AttachObj_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachObj_Request_type_support_ids_t;

static const _AttachObj_Request_type_support_ids_t _AttachObj_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachObj_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachObj_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachObj_Request_type_support_symbol_names_t _AttachObj_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, AttachObj_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesslab_setup2_interfaces, srv, AttachObj_Request)),
  }
};

typedef struct _AttachObj_Request_type_support_data_t
{
  void * data[2];
} _AttachObj_Request_type_support_data_t;

static _AttachObj_Request_type_support_data_t _AttachObj_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachObj_Request_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_AttachObj_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AttachObj_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AttachObj_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AttachObj_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachObj_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__AttachObj_Request__get_type_hash,
  &chesslab_setup2_interfaces__srv__AttachObj_Request__get_type_description,
  &chesslab_setup2_interfaces__srv__AttachObj_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesslab_setup2_interfaces, srv, AttachObj_Request)() {
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_c::AttachObj_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__type_support.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__functions.h"
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

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AttachObj_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachObj_Response_type_support_ids_t;

static const _AttachObj_Response_type_support_ids_t _AttachObj_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachObj_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachObj_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachObj_Response_type_support_symbol_names_t _AttachObj_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, AttachObj_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesslab_setup2_interfaces, srv, AttachObj_Response)),
  }
};

typedef struct _AttachObj_Response_type_support_data_t
{
  void * data[2];
} _AttachObj_Response_type_support_data_t;

static _AttachObj_Response_type_support_data_t _AttachObj_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachObj_Response_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_AttachObj_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AttachObj_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AttachObj_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AttachObj_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachObj_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__AttachObj_Response__get_type_hash,
  &chesslab_setup2_interfaces__srv__AttachObj_Response__get_type_description,
  &chesslab_setup2_interfaces__srv__AttachObj_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesslab_setup2_interfaces, srv, AttachObj_Response)() {
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_c::AttachObj_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__type_support.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__functions.h"
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

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AttachObj_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachObj_Event_type_support_ids_t;

static const _AttachObj_Event_type_support_ids_t _AttachObj_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachObj_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachObj_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachObj_Event_type_support_symbol_names_t _AttachObj_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, AttachObj_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesslab_setup2_interfaces, srv, AttachObj_Event)),
  }
};

typedef struct _AttachObj_Event_type_support_data_t
{
  void * data[2];
} _AttachObj_Event_type_support_data_t;

static _AttachObj_Event_type_support_data_t _AttachObj_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachObj_Event_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_AttachObj_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AttachObj_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AttachObj_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AttachObj_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachObj_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__AttachObj_Event__get_type_hash,
  &chesslab_setup2_interfaces__srv__AttachObj_Event__get_type_description,
  &chesslab_setup2_interfaces__srv__AttachObj_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesslab_setup2_interfaces, srv, AttachObj_Event)() {
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_c::AttachObj_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/attach_obj__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AttachObj_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachObj_type_support_ids_t;

static const _AttachObj_type_support_ids_t _AttachObj_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachObj_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachObj_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachObj_type_support_symbol_names_t _AttachObj_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, AttachObj)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesslab_setup2_interfaces, srv, AttachObj)),
  }
};

typedef struct _AttachObj_type_support_data_t
{
  void * data[2];
} _AttachObj_type_support_data_t;

static _AttachObj_type_support_data_t _AttachObj_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachObj_service_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_AttachObj_service_typesupport_ids.typesupport_identifier[0],
  &_AttachObj_service_typesupport_symbol_names.symbol_name[0],
  &_AttachObj_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AttachObj_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachObj_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AttachObj_Request_message_type_support_handle,
  &AttachObj_Response_message_type_support_handle,
  &AttachObj_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chesslab_setup2_interfaces,
    srv,
    AttachObj
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chesslab_setup2_interfaces,
    srv,
    AttachObj
  ),
  &chesslab_setup2_interfaces__srv__AttachObj__get_type_hash,
  &chesslab_setup2_interfaces__srv__AttachObj__get_type_description,
  &chesslab_setup2_interfaces__srv__AttachObj__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, chesslab_setup2_interfaces, srv, AttachObj)() {
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_c::AttachObj_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
