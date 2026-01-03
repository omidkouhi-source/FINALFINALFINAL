// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chesslab_setup2_interfaces:srv/InverseKinematicsSimple.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/inverse_kinematics_simple.h"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_SIMPLE__STRUCT_H_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_SIMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/InverseKinematicsSimple in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request
{
  geometry_msgs__msg__Pose pose;
} chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request;

// Struct for a sequence of chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request.
typedef struct chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__Sequence
{
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'ik_solution'
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__struct.h"

/// Struct defined in srv/InverseKinematicsSimple in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response
{
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence ik_solution;
  bool status;
} chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response;

// Struct for a sequence of chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response.
typedef struct chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__Sequence
{
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/InverseKinematicsSimple in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__Sequence request;
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__Sequence response;
} chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event;

// Struct for a sequence of chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event.
typedef struct chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__Sequence
{
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__INVERSE_KINEMATICS_SIMPLE__STRUCT_H_
