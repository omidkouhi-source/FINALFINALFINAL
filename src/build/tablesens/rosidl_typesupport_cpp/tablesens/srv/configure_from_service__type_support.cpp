// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from tablesens:srv/ConfigureFromService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tablesens/srv/detail/configure_from_service__functions.h"
#include "tablesens/srv/detail/configure_from_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tablesens
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureFromService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureFromService_Request_type_support_ids_t;

static const _ConfigureFromService_Request_type_support_ids_t _ConfigureFromService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureFromService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureFromService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureFromService_Request_type_support_symbol_names_t _ConfigureFromService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tablesens, srv, ConfigureFromService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tablesens, srv, ConfigureFromService_Request)),
  }
};

typedef struct _ConfigureFromService_Request_type_support_data_t
{
  void * data[2];
} _ConfigureFromService_Request_type_support_data_t;

static _ConfigureFromService_Request_type_support_data_t _ConfigureFromService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureFromService_Request_message_typesupport_map = {
  2,
  "tablesens",
  &_ConfigureFromService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigureFromService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigureFromService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigureFromService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureFromService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Request__get_type_hash,
  &tablesens__srv__ConfigureFromService_Request__get_type_description,
  &tablesens__srv__ConfigureFromService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tablesens

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tablesens::srv::ConfigureFromService_Request>()
{
  return &::tablesens::srv::rosidl_typesupport_cpp::ConfigureFromService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tablesens, srv, ConfigureFromService_Request)() {
  return get_message_type_support_handle<tablesens::srv::ConfigureFromService_Request>();
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
// #include "tablesens/srv/detail/configure_from_service__functions.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__struct.hpp"
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

namespace tablesens
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureFromService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureFromService_Response_type_support_ids_t;

static const _ConfigureFromService_Response_type_support_ids_t _ConfigureFromService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureFromService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureFromService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureFromService_Response_type_support_symbol_names_t _ConfigureFromService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tablesens, srv, ConfigureFromService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tablesens, srv, ConfigureFromService_Response)),
  }
};

typedef struct _ConfigureFromService_Response_type_support_data_t
{
  void * data[2];
} _ConfigureFromService_Response_type_support_data_t;

static _ConfigureFromService_Response_type_support_data_t _ConfigureFromService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureFromService_Response_message_typesupport_map = {
  2,
  "tablesens",
  &_ConfigureFromService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigureFromService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigureFromService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigureFromService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureFromService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Response__get_type_hash,
  &tablesens__srv__ConfigureFromService_Response__get_type_description,
  &tablesens__srv__ConfigureFromService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tablesens

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tablesens::srv::ConfigureFromService_Response>()
{
  return &::tablesens::srv::rosidl_typesupport_cpp::ConfigureFromService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tablesens, srv, ConfigureFromService_Response)() {
  return get_message_type_support_handle<tablesens::srv::ConfigureFromService_Response>();
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
// #include "tablesens/srv/detail/configure_from_service__functions.h"
// already included above
// #include "tablesens/srv/detail/configure_from_service__struct.hpp"
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

namespace tablesens
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureFromService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureFromService_Event_type_support_ids_t;

static const _ConfigureFromService_Event_type_support_ids_t _ConfigureFromService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureFromService_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureFromService_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureFromService_Event_type_support_symbol_names_t _ConfigureFromService_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tablesens, srv, ConfigureFromService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tablesens, srv, ConfigureFromService_Event)),
  }
};

typedef struct _ConfigureFromService_Event_type_support_data_t
{
  void * data[2];
} _ConfigureFromService_Event_type_support_data_t;

static _ConfigureFromService_Event_type_support_data_t _ConfigureFromService_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureFromService_Event_message_typesupport_map = {
  2,
  "tablesens",
  &_ConfigureFromService_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigureFromService_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigureFromService_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigureFromService_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureFromService_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &tablesens__srv__ConfigureFromService_Event__get_type_hash,
  &tablesens__srv__ConfigureFromService_Event__get_type_description,
  &tablesens__srv__ConfigureFromService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tablesens

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tablesens::srv::ConfigureFromService_Event>()
{
  return &::tablesens::srv::rosidl_typesupport_cpp::ConfigureFromService_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, tablesens, srv, ConfigureFromService_Event)() {
  return get_message_type_support_handle<tablesens::srv::ConfigureFromService_Event>();
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
// #include "tablesens/srv/detail/configure_from_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tablesens
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigureFromService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigureFromService_type_support_ids_t;

static const _ConfigureFromService_type_support_ids_t _ConfigureFromService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigureFromService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigureFromService_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigureFromService_type_support_symbol_names_t _ConfigureFromService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tablesens, srv, ConfigureFromService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tablesens, srv, ConfigureFromService)),
  }
};

typedef struct _ConfigureFromService_type_support_data_t
{
  void * data[2];
} _ConfigureFromService_type_support_data_t;

static _ConfigureFromService_type_support_data_t _ConfigureFromService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigureFromService_service_typesupport_map = {
  2,
  "tablesens",
  &_ConfigureFromService_service_typesupport_ids.typesupport_identifier[0],
  &_ConfigureFromService_service_typesupport_symbol_names.symbol_name[0],
  &_ConfigureFromService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ConfigureFromService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigureFromService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<tablesens::srv::ConfigureFromService_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<tablesens::srv::ConfigureFromService_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<tablesens::srv::ConfigureFromService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<tablesens::srv::ConfigureFromService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<tablesens::srv::ConfigureFromService>,
  &tablesens__srv__ConfigureFromService__get_type_hash,
  &tablesens__srv__ConfigureFromService__get_type_description,
  &tablesens__srv__ConfigureFromService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace tablesens

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tablesens::srv::ConfigureFromService>()
{
  return &::tablesens::srv::rosidl_typesupport_cpp::ConfigureFromService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, tablesens, srv, ConfigureFromService)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<tablesens::srv::ConfigureFromService>();
}

#ifdef __cplusplus
}
#endif
