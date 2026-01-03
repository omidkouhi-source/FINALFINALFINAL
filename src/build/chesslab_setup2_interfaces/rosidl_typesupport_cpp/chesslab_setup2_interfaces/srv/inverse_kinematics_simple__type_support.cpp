// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from chesslab_setup2_interfaces:srv/InverseKinematicsSimple.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__functions.h"
#include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematicsSimple_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematicsSimple_Request_type_support_ids_t;

static const _InverseKinematicsSimple_Request_type_support_ids_t _InverseKinematicsSimple_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematicsSimple_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematicsSimple_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematicsSimple_Request_type_support_symbol_names_t _InverseKinematicsSimple_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Request)),
  }
};

typedef struct _InverseKinematicsSimple_Request_type_support_data_t
{
  void * data[2];
} _InverseKinematicsSimple_Request_type_support_data_t;

static _InverseKinematicsSimple_Request_type_support_data_t _InverseKinematicsSimple_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematicsSimple_Request_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_InverseKinematicsSimple_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematicsSimple_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematicsSimple_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InverseKinematicsSimple_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematicsSimple_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::InverseKinematicsSimple_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Request)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request>();
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
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__functions.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.hpp"
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

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematicsSimple_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematicsSimple_Response_type_support_ids_t;

static const _InverseKinematicsSimple_Response_type_support_ids_t _InverseKinematicsSimple_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematicsSimple_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematicsSimple_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematicsSimple_Response_type_support_symbol_names_t _InverseKinematicsSimple_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Response)),
  }
};

typedef struct _InverseKinematicsSimple_Response_type_support_data_t
{
  void * data[2];
} _InverseKinematicsSimple_Response_type_support_data_t;

static _InverseKinematicsSimple_Response_type_support_data_t _InverseKinematicsSimple_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematicsSimple_Response_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_InverseKinematicsSimple_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematicsSimple_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematicsSimple_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InverseKinematicsSimple_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematicsSimple_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::InverseKinematicsSimple_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Response)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response>();
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
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__functions.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.hpp"
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

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematicsSimple_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematicsSimple_Event_type_support_ids_t;

static const _InverseKinematicsSimple_Event_type_support_ids_t _InverseKinematicsSimple_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematicsSimple_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematicsSimple_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematicsSimple_Event_type_support_symbol_names_t _InverseKinematicsSimple_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Event)),
  }
};

typedef struct _InverseKinematicsSimple_Event_type_support_data_t
{
  void * data[2];
} _InverseKinematicsSimple_Event_type_support_data_t;

static _InverseKinematicsSimple_Event_type_support_data_t _InverseKinematicsSimple_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematicsSimple_Event_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_InverseKinematicsSimple_Event_message_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematicsSimple_Event_message_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematicsSimple_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InverseKinematicsSimple_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematicsSimple_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::InverseKinematicsSimple_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Event)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event>();
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
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chesslab_setup2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematicsSimple_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematicsSimple_type_support_ids_t;

static const _InverseKinematicsSimple_type_support_ids_t _InverseKinematicsSimple_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematicsSimple_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematicsSimple_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematicsSimple_type_support_symbol_names_t _InverseKinematicsSimple_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple)),
  }
};

typedef struct _InverseKinematicsSimple_type_support_data_t
{
  void * data[2];
} _InverseKinematicsSimple_type_support_data_t;

static _InverseKinematicsSimple_type_support_data_t _InverseKinematicsSimple_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematicsSimple_service_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_InverseKinematicsSimple_service_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematicsSimple_service_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematicsSimple_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InverseKinematicsSimple_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematicsSimple_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<chesslab_setup2_interfaces::srv::InverseKinematicsSimple>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<chesslab_setup2_interfaces::srv::InverseKinematicsSimple>,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::InverseKinematicsSimple_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, InverseKinematicsSimple)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<chesslab_setup2_interfaces::srv::InverseKinematicsSimple>();
}

#ifdef __cplusplus
}
#endif
