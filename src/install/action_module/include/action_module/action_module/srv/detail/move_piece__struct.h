// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_module:srv/MovePiece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_module/srv/move_piece.h"


#ifndef ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__STRUCT_H_
#define ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_square'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MovePiece in the package action_module.
typedef struct action_module__srv__MovePiece_Request
{
  int32_t aruco_id;
  rosidl_runtime_c__String target_square;
} action_module__srv__MovePiece_Request;

// Struct for a sequence of action_module__srv__MovePiece_Request.
typedef struct action_module__srv__MovePiece_Request__Sequence
{
  action_module__srv__MovePiece_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_module__srv__MovePiece_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MovePiece in the package action_module.
typedef struct action_module__srv__MovePiece_Response
{
  bool success;
  rosidl_runtime_c__String message;
} action_module__srv__MovePiece_Response;

// Struct for a sequence of action_module__srv__MovePiece_Response.
typedef struct action_module__srv__MovePiece_Response__Sequence
{
  action_module__srv__MovePiece_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_module__srv__MovePiece_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  action_module__srv__MovePiece_Event__request__MAX_SIZE = 1
};
// response
enum
{
  action_module__srv__MovePiece_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MovePiece in the package action_module.
typedef struct action_module__srv__MovePiece_Event
{
  service_msgs__msg__ServiceEventInfo info;
  action_module__srv__MovePiece_Request__Sequence request;
  action_module__srv__MovePiece_Response__Sequence response;
} action_module__srv__MovePiece_Event;

// Struct for a sequence of action_module__srv__MovePiece_Event.
typedef struct action_module__srv__MovePiece_Event__Sequence
{
  action_module__srv__MovePiece_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_module__srv__MovePiece_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MODULE__SRV__DETAIL__MOVE_PIECE__STRUCT_H_
