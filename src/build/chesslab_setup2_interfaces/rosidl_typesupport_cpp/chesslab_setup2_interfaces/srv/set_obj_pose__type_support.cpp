// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from chesslab_setup2_interfaces:srv/SetObjPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__functions.h"
#include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__struct.hpp"
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

typedef struct _SetObjPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjPose_Request_type_support_ids_t;

static const _SetObjPose_Request_type_support_ids_t _SetObjPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjPose_Request_type_support_symbol_names_t _SetObjPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Request)),
  }
};

typedef struct _SetObjPose_Request_type_support_data_t
{
  void * data[2];
} _SetObjPose_Request_type_support_data_t;

static _SetObjPose_Request_type_support_data_t _SetObjPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjPose_Request_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_SetObjPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetObjPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetObjPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetObjPose_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjPose_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__SetObjPose_Request__get_type_hash,
  &chesslab_setup2_interfaces__srv__SetObjPose_Request__get_type_description,
  &chesslab_setup2_interfaces__srv__SetObjPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Request>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::SetObjPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Request)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Request>();
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
// #include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__functions.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__struct.hpp"
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

typedef struct _SetObjPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjPose_Response_type_support_ids_t;

static const _SetObjPose_Response_type_support_ids_t _SetObjPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjPose_Response_type_support_symbol_names_t _SetObjPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Response)),
  }
};

typedef struct _SetObjPose_Response_type_support_data_t
{
  void * data[2];
} _SetObjPose_Response_type_support_data_t;

static _SetObjPose_Response_type_support_data_t _SetObjPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjPose_Response_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_SetObjPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetObjPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetObjPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetObjPose_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjPose_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__SetObjPose_Response__get_type_hash,
  &chesslab_setup2_interfaces__srv__SetObjPose_Response__get_type_description,
  &chesslab_setup2_interfaces__srv__SetObjPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Response>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::SetObjPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Response)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Response>();
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
// #include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__functions.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__struct.hpp"
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

typedef struct _SetObjPose_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjPose_Event_type_support_ids_t;

static const _SetObjPose_Event_type_support_ids_t _SetObjPose_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjPose_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjPose_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjPose_Event_type_support_symbol_names_t _SetObjPose_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Event)),
  }
};

typedef struct _SetObjPose_Event_type_support_data_t
{
  void * data[2];
} _SetObjPose_Event_type_support_data_t;

static _SetObjPose_Event_type_support_data_t _SetObjPose_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjPose_Event_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_SetObjPose_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetObjPose_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetObjPose_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetObjPose_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjPose_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__SetObjPose_Event__get_type_hash,
  &chesslab_setup2_interfaces__srv__SetObjPose_Event__get_type_description,
  &chesslab_setup2_interfaces__srv__SetObjPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Event>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::SetObjPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, SetObjPose_Event)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Event>();
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
// #include "chesslab_setup2_interfaces/srv/detail/set_obj_pose__struct.hpp"
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

typedef struct _SetObjPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetObjPose_type_support_ids_t;

static const _SetObjPose_type_support_ids_t _SetObjPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetObjPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetObjPose_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetObjPose_type_support_symbol_names_t _SetObjPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, SetObjPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, SetObjPose)),
  }
};

typedef struct _SetObjPose_type_support_data_t
{
  void * data[2];
} _SetObjPose_type_support_data_t;

static _SetObjPose_type_support_data_t _SetObjPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetObjPose_service_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_SetObjPose_service_typesupport_ids.typesupport_identifier[0],
  &_SetObjPose_service_typesupport_symbol_names.symbol_name[0],
  &_SetObjPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetObjPose_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetObjPose_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<chesslab_setup2_interfaces::srv::SetObjPose>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<chesslab_setup2_interfaces::srv::SetObjPose>,
  &chesslab_setup2_interfaces__srv__SetObjPose__get_type_hash,
  &chesslab_setup2_interfaces__srv__SetObjPose__get_type_description,
  &chesslab_setup2_interfaces__srv__SetObjPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::SetObjPose_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, SetObjPose)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<chesslab_setup2_interfaces::srv::SetObjPose>();
}

#ifdef __cplusplus
}
#endif
