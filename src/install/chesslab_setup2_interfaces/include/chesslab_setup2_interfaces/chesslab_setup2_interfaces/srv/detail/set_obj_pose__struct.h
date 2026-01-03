// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chesslab_setup2_interfaces:srv/SetObjPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/set_obj_pose.h"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_OBJ_POSE__STRUCT_H_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_OBJ_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetObjPose in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__SetObjPose_Request
{
  int16_t objid;
  geometry_msgs__msg__Pose p;
} chesslab_setup2_interfaces__srv__SetObjPose_Request;

// Struct for a sequence of chesslab_setup2_interfaces__srv__SetObjPose_Request.
typedef struct chesslab_setup2_interfaces__srv__SetObjPose_Request__Sequence
{
  chesslab_setup2_interfaces__srv__SetObjPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__SetObjPose_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetObjPose in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__SetObjPose_Response
{
  uint8_t structure_needs_at_least_one_member;
} chesslab_setup2_interfaces__srv__SetObjPose_Response;

// Struct for a sequence of chesslab_setup2_interfaces__srv__SetObjPose_Response.
typedef struct chesslab_setup2_interfaces__srv__SetObjPose_Response__Sequence
{
  chesslab_setup2_interfaces__srv__SetObjPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__SetObjPose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chesslab_setup2_interfaces__srv__SetObjPose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chesslab_setup2_interfaces__srv__SetObjPose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetObjPose in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__SetObjPose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chesslab_setup2_interfaces__srv__SetObjPose_Request__Sequence request;
  chesslab_setup2_interfaces__srv__SetObjPose_Response__Sequence response;
} chesslab_setup2_interfaces__srv__SetObjPose_Event;

// Struct for a sequence of chesslab_setup2_interfaces__srv__SetObjPose_Event.
typedef struct chesslab_setup2_interfaces__srv__SetObjPose_Event__Sequence
{
  chesslab_setup2_interfaces__srv__SetObjPose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__SetObjPose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_OBJ_POSE__STRUCT_H_
