// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from kinenikros2:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "kinenikros2/srv/detail/inverse_kinematics__functions.h"
#include "kinenikros2/srv/detail/inverse_kinematics__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace kinenikros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematics_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematics_Request_type_support_ids_t;

static const _InverseKinematics_Request_type_support_ids_t _InverseKinematics_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematics_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematics_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematics_Request_type_support_symbol_names_t _InverseKinematics_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kinenikros2, srv, InverseKinematics_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kinenikros2, srv, InverseKinematics_Request)),
  }
};

typedef struct _InverseKinematics_Request_type_support_data_t
{
  void * data[2];
} _InverseKinematics_Request_type_support_data_t;

static _InverseKinematics_Request_type_support_data_t _InverseKinematics_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematics_Request_message_typesupport_map = {
  2,
  "kinenikros2",
  &_InverseKinematics_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematics_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematics_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InverseKinematics_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematics_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &kinenikros2__srv__InverseKinematics_Request__get_type_hash,
  &kinenikros2__srv__InverseKinematics_Request__get_type_description,
  &kinenikros2__srv__InverseKinematics_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Request>()
{
  return &::kinenikros2::srv::rosidl_typesupport_cpp::InverseKinematics_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, kinenikros2, srv, InverseKinematics_Request)() {
  return get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Request>();
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
// #include "kinenikros2/srv/detail/inverse_kinematics__functions.h"
// already included above
// #include "kinenikros2/srv/detail/inverse_kinematics__struct.hpp"
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

namespace kinenikros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematics_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematics_Response_type_support_ids_t;

static const _InverseKinematics_Response_type_support_ids_t _InverseKinematics_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematics_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematics_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematics_Response_type_support_symbol_names_t _InverseKinematics_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kinenikros2, srv, InverseKinematics_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kinenikros2, srv, InverseKinematics_Response)),
  }
};

typedef struct _InverseKinematics_Response_type_support_data_t
{
  void * data[2];
} _InverseKinematics_Response_type_support_data_t;

static _InverseKinematics_Response_type_support_data_t _InverseKinematics_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematics_Response_message_typesupport_map = {
  2,
  "kinenikros2",
  &_InverseKinematics_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematics_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematics_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InverseKinematics_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematics_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &kinenikros2__srv__InverseKinematics_Response__get_type_hash,
  &kinenikros2__srv__InverseKinematics_Response__get_type_description,
  &kinenikros2__srv__InverseKinematics_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Response>()
{
  return &::kinenikros2::srv::rosidl_typesupport_cpp::InverseKinematics_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, kinenikros2, srv, InverseKinematics_Response)() {
  return get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Response>();
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
// #include "kinenikros2/srv/detail/inverse_kinematics__functions.h"
// already included above
// #include "kinenikros2/srv/detail/inverse_kinematics__struct.hpp"
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

namespace kinenikros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematics_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematics_Event_type_support_ids_t;

static const _InverseKinematics_Event_type_support_ids_t _InverseKinematics_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematics_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematics_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematics_Event_type_support_symbol_names_t _InverseKinematics_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kinenikros2, srv, InverseKinematics_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kinenikros2, srv, InverseKinematics_Event)),
  }
};

typedef struct _InverseKinematics_Event_type_support_data_t
{
  void * data[2];
} _InverseKinematics_Event_type_support_data_t;

static _InverseKinematics_Event_type_support_data_t _InverseKinematics_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematics_Event_message_typesupport_map = {
  2,
  "kinenikros2",
  &_InverseKinematics_Event_message_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematics_Event_message_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematics_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InverseKinematics_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematics_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &kinenikros2__srv__InverseKinematics_Event__get_type_hash,
  &kinenikros2__srv__InverseKinematics_Event__get_type_description,
  &kinenikros2__srv__InverseKinematics_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Event>()
{
  return &::kinenikros2::srv::rosidl_typesupport_cpp::InverseKinematics_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, kinenikros2, srv, InverseKinematics_Event)() {
  return get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Event>();
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
// #include "kinenikros2/srv/detail/inverse_kinematics__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace kinenikros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _InverseKinematics_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InverseKinematics_type_support_ids_t;

static const _InverseKinematics_type_support_ids_t _InverseKinematics_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _InverseKinematics_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InverseKinematics_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InverseKinematics_type_support_symbol_names_t _InverseKinematics_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kinenikros2, srv, InverseKinematics)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kinenikros2, srv, InverseKinematics)),
  }
};

typedef struct _InverseKinematics_type_support_data_t
{
  void * data[2];
} _InverseKinematics_type_support_data_t;

static _InverseKinematics_type_support_data_t _InverseKinematics_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InverseKinematics_service_typesupport_map = {
  2,
  "kinenikros2",
  &_InverseKinematics_service_typesupport_ids.typesupport_identifier[0],
  &_InverseKinematics_service_typesupport_symbol_names.symbol_name[0],
  &_InverseKinematics_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InverseKinematics_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InverseKinematics_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<kinenikros2::srv::InverseKinematics_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<kinenikros2::srv::InverseKinematics>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<kinenikros2::srv::InverseKinematics>,
  &kinenikros2__srv__InverseKinematics__get_type_hash,
  &kinenikros2__srv__InverseKinematics__get_type_description,
  &kinenikros2__srv__InverseKinematics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace kinenikros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<kinenikros2::srv::InverseKinematics>()
{
  return &::kinenikros2::srv::rosidl_typesupport_cpp::InverseKinematics_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, kinenikros2, srv, InverseKinematics)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<kinenikros2::srv::InverseKinematics>();
}

#ifdef __cplusplus
}
#endif
