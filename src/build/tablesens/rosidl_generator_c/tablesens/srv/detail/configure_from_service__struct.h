// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tablesens:srv/ConfigureFromService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tablesens/srv/configure_from_service.h"


#ifndef TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__STRUCT_H_
#define TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fix_list'
#include "tablesens/msg/detail/marker_fix_list__struct.h"

/// Struct defined in srv/ConfigureFromService in the package tablesens.
typedef struct tablesens__srv__ConfigureFromService_Request
{
  tablesens__msg__MarkerFixList fix_list;
} tablesens__srv__ConfigureFromService_Request;

// Struct for a sequence of tablesens__srv__ConfigureFromService_Request.
typedef struct tablesens__srv__ConfigureFromService_Request__Sequence
{
  tablesens__srv__ConfigureFromService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tablesens__srv__ConfigureFromService_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ConfigureFromService in the package tablesens.
typedef struct tablesens__srv__ConfigureFromService_Response
{
  bool success;
} tablesens__srv__ConfigureFromService_Response;

// Struct for a sequence of tablesens__srv__ConfigureFromService_Response.
typedef struct tablesens__srv__ConfigureFromService_Response__Sequence
{
  tablesens__srv__ConfigureFromService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tablesens__srv__ConfigureFromService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tablesens__srv__ConfigureFromService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tablesens__srv__ConfigureFromService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ConfigureFromService in the package tablesens.
typedef struct tablesens__srv__ConfigureFromService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tablesens__srv__ConfigureFromService_Request__Sequence request;
  tablesens__srv__ConfigureFromService_Response__Sequence response;
} tablesens__srv__ConfigureFromService_Event;

// Struct for a sequence of tablesens__srv__ConfigureFromService_Event.
typedef struct tablesens__srv__ConfigureFromService_Event__Sequence
{
  tablesens__srv__ConfigureFromService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tablesens__srv__ConfigureFromService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TABLESENS__SRV__DETAIL__CONFIGURE_FROM_SERVICE__STRUCT_H_
