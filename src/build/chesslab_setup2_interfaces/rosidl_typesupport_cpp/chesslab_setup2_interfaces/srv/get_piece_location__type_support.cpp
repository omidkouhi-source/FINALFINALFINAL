// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from chesslab_setup2_interfaces:srv/GetPieceLocation.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chesslab_setup2_interfaces/srv/detail/get_piece_location__functions.h"
#include "chesslab_setup2_interfaces/srv/detail/get_piece_location__struct.hpp"
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

typedef struct _GetPieceLocation_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPieceLocation_Request_type_support_ids_t;

static const _GetPieceLocation_Request_type_support_ids_t _GetPieceLocation_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPieceLocation_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPieceLocation_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPieceLocation_Request_type_support_symbol_names_t _GetPieceLocation_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Request)),
  }
};

typedef struct _GetPieceLocation_Request_type_support_data_t
{
  void * data[2];
} _GetPieceLocation_Request_type_support_data_t;

static _GetPieceLocation_Request_type_support_data_t _GetPieceLocation_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPieceLocation_Request_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_GetPieceLocation_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPieceLocation_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPieceLocation_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPieceLocation_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPieceLocation_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Request__get_type_hash,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Request__get_type_description,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Request>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::GetPieceLocation_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Request)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Request>();
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
// #include "chesslab_setup2_interfaces/srv/detail/get_piece_location__functions.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/get_piece_location__struct.hpp"
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

typedef struct _GetPieceLocation_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPieceLocation_Response_type_support_ids_t;

static const _GetPieceLocation_Response_type_support_ids_t _GetPieceLocation_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPieceLocation_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPieceLocation_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPieceLocation_Response_type_support_symbol_names_t _GetPieceLocation_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Response)),
  }
};

typedef struct _GetPieceLocation_Response_type_support_data_t
{
  void * data[2];
} _GetPieceLocation_Response_type_support_data_t;

static _GetPieceLocation_Response_type_support_data_t _GetPieceLocation_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPieceLocation_Response_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_GetPieceLocation_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPieceLocation_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPieceLocation_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPieceLocation_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPieceLocation_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Response__get_type_hash,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Response__get_type_description,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Response>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::GetPieceLocation_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Response)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Response>();
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
// #include "chesslab_setup2_interfaces/srv/detail/get_piece_location__functions.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/get_piece_location__struct.hpp"
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

typedef struct _GetPieceLocation_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPieceLocation_Event_type_support_ids_t;

static const _GetPieceLocation_Event_type_support_ids_t _GetPieceLocation_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPieceLocation_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPieceLocation_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPieceLocation_Event_type_support_symbol_names_t _GetPieceLocation_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Event)),
  }
};

typedef struct _GetPieceLocation_Event_type_support_data_t
{
  void * data[2];
} _GetPieceLocation_Event_type_support_data_t;

static _GetPieceLocation_Event_type_support_data_t _GetPieceLocation_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPieceLocation_Event_message_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_GetPieceLocation_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetPieceLocation_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetPieceLocation_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPieceLocation_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPieceLocation_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Event__get_type_hash,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Event__get_type_description,
  &chesslab_setup2_interfaces__srv__GetPieceLocation_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Event>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::GetPieceLocation_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation_Event)() {
  return get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Event>();
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
// #include "chesslab_setup2_interfaces/srv/detail/get_piece_location__struct.hpp"
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

typedef struct _GetPieceLocation_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPieceLocation_type_support_ids_t;

static const _GetPieceLocation_type_support_ids_t _GetPieceLocation_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPieceLocation_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPieceLocation_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPieceLocation_type_support_symbol_names_t _GetPieceLocation_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation)),
  }
};

typedef struct _GetPieceLocation_type_support_data_t
{
  void * data[2];
} _GetPieceLocation_type_support_data_t;

static _GetPieceLocation_type_support_data_t _GetPieceLocation_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPieceLocation_service_typesupport_map = {
  2,
  "chesslab_setup2_interfaces",
  &_GetPieceLocation_service_typesupport_ids.typesupport_identifier[0],
  &_GetPieceLocation_service_typesupport_symbol_names.symbol_name[0],
  &_GetPieceLocation_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPieceLocation_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPieceLocation_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<chesslab_setup2_interfaces::srv::GetPieceLocation>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<chesslab_setup2_interfaces::srv::GetPieceLocation>,
  &chesslab_setup2_interfaces__srv__GetPieceLocation__get_type_hash,
  &chesslab_setup2_interfaces__srv__GetPieceLocation__get_type_description,
  &chesslab_setup2_interfaces__srv__GetPieceLocation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace chesslab_setup2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation>()
{
  return &::chesslab_setup2_interfaces::srv::rosidl_typesupport_cpp::GetPieceLocation_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, chesslab_setup2_interfaces, srv, GetPieceLocation)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<chesslab_setup2_interfaces::srv::GetPieceLocation>();
}

#ifdef __cplusplus
}
#endif
