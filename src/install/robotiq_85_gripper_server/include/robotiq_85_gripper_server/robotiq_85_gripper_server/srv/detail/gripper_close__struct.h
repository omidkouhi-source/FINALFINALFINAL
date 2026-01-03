// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_85_gripper_server:srv/GripperClose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_85_gripper_server/srv/gripper_close.h"


#ifndef ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_CLOSE__STRUCT_H_
#define ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_CLOSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperClose in the package robotiq_85_gripper_server.
typedef struct robotiq_85_gripper_server__srv__GripperClose_Request
{
  bool order;
} robotiq_85_gripper_server__srv__GripperClose_Request;

// Struct for a sequence of robotiq_85_gripper_server__srv__GripperClose_Request.
typedef struct robotiq_85_gripper_server__srv__GripperClose_Request__Sequence
{
  robotiq_85_gripper_server__srv__GripperClose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_85_gripper_server__srv__GripperClose_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/GripperClose in the package robotiq_85_gripper_server.
typedef struct robotiq_85_gripper_server__srv__GripperClose_Response
{
  bool status;
} robotiq_85_gripper_server__srv__GripperClose_Response;

// Struct for a sequence of robotiq_85_gripper_server__srv__GripperClose_Response.
typedef struct robotiq_85_gripper_server__srv__GripperClose_Response__Sequence
{
  robotiq_85_gripper_server__srv__GripperClose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_85_gripper_server__srv__GripperClose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robotiq_85_gripper_server__srv__GripperClose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robotiq_85_gripper_server__srv__GripperClose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GripperClose in the package robotiq_85_gripper_server.
typedef struct robotiq_85_gripper_server__srv__GripperClose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robotiq_85_gripper_server__srv__GripperClose_Request__Sequence request;
  robotiq_85_gripper_server__srv__GripperClose_Response__Sequence response;
} robotiq_85_gripper_server__srv__GripperClose_Event;

// Struct for a sequence of robotiq_85_gripper_server__srv__GripperClose_Event.
typedef struct robotiq_85_gripper_server__srv__GripperClose_Event__Sequence
{
  robotiq_85_gripper_server__srv__GripperClose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_85_gripper_server__srv__GripperClose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_CLOSE__STRUCT_H_
