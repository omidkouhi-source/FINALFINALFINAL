// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kinenikros2:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/srv/inverse_kinematics.h"


#ifndef KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
#define KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/InverseKinematics in the package kinenikros2.
typedef struct kinenikros2__srv__InverseKinematics_Request
{
  rosidl_runtime_c__String type;
  geometry_msgs__msg__Pose pose;
} kinenikros2__srv__InverseKinematics_Request;

// Struct for a sequence of kinenikros2__srv__InverseKinematics_Request.
typedef struct kinenikros2__srv__InverseKinematics_Request__Sequence
{
  kinenikros2__srv__InverseKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinenikros2__srv__InverseKinematics_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'ik_solution'
#include "kinenikros2/msg/detail/inverse_kinematics__struct.h"

/// Struct defined in srv/InverseKinematics in the package kinenikros2.
typedef struct kinenikros2__srv__InverseKinematics_Response
{
  kinenikros2__msg__InverseKinematics__Sequence ik_solution;
  bool status;
} kinenikros2__srv__InverseKinematics_Response;

// Struct for a sequence of kinenikros2__srv__InverseKinematics_Response.
typedef struct kinenikros2__srv__InverseKinematics_Response__Sequence
{
  kinenikros2__srv__InverseKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinenikros2__srv__InverseKinematics_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  kinenikros2__srv__InverseKinematics_Event__request__MAX_SIZE = 1
};
// response
enum
{
  kinenikros2__srv__InverseKinematics_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/InverseKinematics in the package kinenikros2.
typedef struct kinenikros2__srv__InverseKinematics_Event
{
  service_msgs__msg__ServiceEventInfo info;
  kinenikros2__srv__InverseKinematics_Request__Sequence request;
  kinenikros2__srv__InverseKinematics_Response__Sequence response;
} kinenikros2__srv__InverseKinematics_Event;

// Struct for a sequence of kinenikros2__srv__InverseKinematics_Event.
typedef struct kinenikros2__srv__InverseKinematics_Event__Sequence
{
  kinenikros2__srv__InverseKinematics_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kinenikros2__srv__InverseKinematics_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KINENIKROS2__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
