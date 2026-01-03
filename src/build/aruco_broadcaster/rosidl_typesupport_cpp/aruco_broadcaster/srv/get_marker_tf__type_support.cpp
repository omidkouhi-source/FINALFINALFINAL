// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"
#include "aruco_broadcaster/srv/detail/get_marker_tf__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace aruco_broadcaster
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetMarkerTf_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMarkerTf_Request_type_support_ids_t;

static const _GetMarkerTf_Request_type_support_ids_t _GetMarkerTf_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetMarkerTf_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMarkerTf_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMarkerTf_Request_type_support_symbol_names_t _GetMarkerTf_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_broadcaster, srv, GetMarkerTf_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_broadcaster, srv, GetMarkerTf_Request)),
  }
};

typedef struct _GetMarkerTf_Request_type_support_data_t
{
  void * data[2];
} _GetMarkerTf_Request_type_support_data_t;

static _GetMarkerTf_Request_type_support_data_t _GetMarkerTf_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMarkerTf_Request_message_typesupport_map = {
  2,
  "aruco_broadcaster",
  &_GetMarkerTf_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetMarkerTf_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetMarkerTf_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMarkerTf_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMarkerTf_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Request__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf_Request__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace aruco_broadcaster

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Request>()
{
  return &::aruco_broadcaster::srv::rosidl_typesupport_cpp::GetMarkerTf_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aruco_broadcaster, srv, GetMarkerTf_Request)() {
  return get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aruco_broadcaster
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetMarkerTf_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMarkerTf_Response_type_support_ids_t;

static const _GetMarkerTf_Response_type_support_ids_t _GetMarkerTf_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetMarkerTf_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMarkerTf_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMarkerTf_Response_type_support_symbol_names_t _GetMarkerTf_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_broadcaster, srv, GetMarkerTf_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_broadcaster, srv, GetMarkerTf_Response)),
  }
};

typedef struct _GetMarkerTf_Response_type_support_data_t
{
  void * data[2];
} _GetMarkerTf_Response_type_support_data_t;

static _GetMarkerTf_Response_type_support_data_t _GetMarkerTf_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMarkerTf_Response_message_typesupport_map = {
  2,
  "aruco_broadcaster",
  &_GetMarkerTf_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetMarkerTf_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetMarkerTf_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMarkerTf_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMarkerTf_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Response__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf_Response__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace aruco_broadcaster

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Response>()
{
  return &::aruco_broadcaster::srv::rosidl_typesupport_cpp::GetMarkerTf_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aruco_broadcaster, srv, GetMarkerTf_Response)() {
  return get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aruco_broadcaster
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetMarkerTf_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMarkerTf_Event_type_support_ids_t;

static const _GetMarkerTf_Event_type_support_ids_t _GetMarkerTf_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetMarkerTf_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMarkerTf_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMarkerTf_Event_type_support_symbol_names_t _GetMarkerTf_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_broadcaster, srv, GetMarkerTf_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_broadcaster, srv, GetMarkerTf_Event)),
  }
};

typedef struct _GetMarkerTf_Event_type_support_data_t
{
  void * data[2];
} _GetMarkerTf_Event_type_support_data_t;

static _GetMarkerTf_Event_type_support_data_t _GetMarkerTf_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMarkerTf_Event_message_typesupport_map = {
  2,
  "aruco_broadcaster",
  &_GetMarkerTf_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetMarkerTf_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetMarkerTf_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMarkerTf_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMarkerTf_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &aruco_broadcaster__srv__GetMarkerTf_Event__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf_Event__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace aruco_broadcaster

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Event>()
{
  return &::aruco_broadcaster::srv::rosidl_typesupport_cpp::GetMarkerTf_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, aruco_broadcaster, srv, GetMarkerTf_Event)() {
  return get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace aruco_broadcaster
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetMarkerTf_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMarkerTf_type_support_ids_t;

static const _GetMarkerTf_type_support_ids_t _GetMarkerTf_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetMarkerTf_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMarkerTf_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMarkerTf_type_support_symbol_names_t _GetMarkerTf_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_broadcaster, srv, GetMarkerTf)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_broadcaster, srv, GetMarkerTf)),
  }
};

typedef struct _GetMarkerTf_type_support_data_t
{
  void * data[2];
} _GetMarkerTf_type_support_data_t;

static _GetMarkerTf_type_support_data_t _GetMarkerTf_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMarkerTf_service_typesupport_map = {
  2,
  "aruco_broadcaster",
  &_GetMarkerTf_service_typesupport_ids.typesupport_identifier[0],
  &_GetMarkerTf_service_typesupport_symbol_names.symbol_name[0],
  &_GetMarkerTf_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetMarkerTf_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMarkerTf_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<aruco_broadcaster::srv::GetMarkerTf_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<aruco_broadcaster::srv::GetMarkerTf>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<aruco_broadcaster::srv::GetMarkerTf>,
  &aruco_broadcaster__srv__GetMarkerTf__get_type_hash,
  &aruco_broadcaster__srv__GetMarkerTf__get_type_description,
  &aruco_broadcaster__srv__GetMarkerTf__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace aruco_broadcaster

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<aruco_broadcaster::srv::GetMarkerTf>()
{
  return &::aruco_broadcaster::srv::rosidl_typesupport_cpp::GetMarkerTf_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, aruco_broadcaster, srv, GetMarkerTf)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<aruco_broadcaster::srv::GetMarkerTf>();
}

#ifdef __cplusplus
}
#endif
