// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aruco_broadcaster/srv/get_marker_tf.h"


#ifndef ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__STRUCT_H_
#define ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parent'
// Member 'marker_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetMarkerTf in the package aruco_broadcaster.
typedef struct aruco_broadcaster__srv__GetMarkerTf_Request
{
  rosidl_runtime_c__String parent;
  rosidl_runtime_c__String marker_id;
} aruco_broadcaster__srv__GetMarkerTf_Request;

// Struct for a sequence of aruco_broadcaster__srv__GetMarkerTf_Request.
typedef struct aruco_broadcaster__srv__GetMarkerTf_Request__Sequence
{
  aruco_broadcaster__srv__GetMarkerTf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_broadcaster__srv__GetMarkerTf_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'ret'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in srv/GetMarkerTf in the package aruco_broadcaster.
typedef struct aruco_broadcaster__srv__GetMarkerTf_Response
{
  geometry_msgs__msg__TransformStamped ret;
} aruco_broadcaster__srv__GetMarkerTf_Response;

// Struct for a sequence of aruco_broadcaster__srv__GetMarkerTf_Response.
typedef struct aruco_broadcaster__srv__GetMarkerTf_Response__Sequence
{
  aruco_broadcaster__srv__GetMarkerTf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_broadcaster__srv__GetMarkerTf_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  aruco_broadcaster__srv__GetMarkerTf_Event__request__MAX_SIZE = 1
};
// response
enum
{
  aruco_broadcaster__srv__GetMarkerTf_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetMarkerTf in the package aruco_broadcaster.
typedef struct aruco_broadcaster__srv__GetMarkerTf_Event
{
  service_msgs__msg__ServiceEventInfo info;
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence request;
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence response;
} aruco_broadcaster__srv__GetMarkerTf_Event;

// Struct for a sequence of aruco_broadcaster__srv__GetMarkerTf_Event.
typedef struct aruco_broadcaster__srv__GetMarkerTf_Event__Sequence
{
  aruco_broadcaster__srv__GetMarkerTf_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_broadcaster__srv__GetMarkerTf_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_BROADCASTER__SRV__DETAIL__GET_MARKER_TF__STRUCT_H_
