// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chesslab_setup2_interfaces:srv/ValidateChessAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/validate_chess_action.h"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__STRUCT_H_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'from_cell'
// Member 'to_cell'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ValidateChessAction in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__ValidateChessAction_Request
{
  rosidl_runtime_c__String from_cell;
  rosidl_runtime_c__String to_cell;
} chesslab_setup2_interfaces__srv__ValidateChessAction_Request;

// Struct for a sequence of chesslab_setup2_interfaces__srv__ValidateChessAction_Request.
typedef struct chesslab_setup2_interfaces__srv__ValidateChessAction_Request__Sequence
{
  chesslab_setup2_interfaces__srv__ValidateChessAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__ValidateChessAction_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ValidateChessAction in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__ValidateChessAction_Response
{
  bool success;
  bool is_valid;
  rosidl_runtime_c__String message;
} chesslab_setup2_interfaces__srv__ValidateChessAction_Response;

// Struct for a sequence of chesslab_setup2_interfaces__srv__ValidateChessAction_Response.
typedef struct chesslab_setup2_interfaces__srv__ValidateChessAction_Response__Sequence
{
  chesslab_setup2_interfaces__srv__ValidateChessAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__ValidateChessAction_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chesslab_setup2_interfaces__srv__ValidateChessAction_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chesslab_setup2_interfaces__srv__ValidateChessAction_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ValidateChessAction in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__ValidateChessAction_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chesslab_setup2_interfaces__srv__ValidateChessAction_Request__Sequence request;
  chesslab_setup2_interfaces__srv__ValidateChessAction_Response__Sequence response;
} chesslab_setup2_interfaces__srv__ValidateChessAction_Event;

// Struct for a sequence of chesslab_setup2_interfaces__srv__ValidateChessAction_Event.
typedef struct chesslab_setup2_interfaces__srv__ValidateChessAction_Event__Sequence
{
  chesslab_setup2_interfaces__srv__ValidateChessAction_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__ValidateChessAction_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VALIDATE_CHESS_ACTION__STRUCT_H_
