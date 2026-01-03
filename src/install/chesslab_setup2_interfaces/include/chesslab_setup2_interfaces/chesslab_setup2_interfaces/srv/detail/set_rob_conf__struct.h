// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chesslab_setup2_interfaces:srv/SetRobConf.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/set_rob_conf.h"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_ROB_CONF__STRUCT_H_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_ROB_CONF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'conf'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetRobConf in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__SetRobConf_Request
{
  rosidl_runtime_c__float__Sequence conf;
} chesslab_setup2_interfaces__srv__SetRobConf_Request;

// Struct for a sequence of chesslab_setup2_interfaces__srv__SetRobConf_Request.
typedef struct chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence
{
  chesslab_setup2_interfaces__srv__SetRobConf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetRobConf in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__SetRobConf_Response
{
  uint8_t structure_needs_at_least_one_member;
} chesslab_setup2_interfaces__srv__SetRobConf_Response;

// Struct for a sequence of chesslab_setup2_interfaces__srv__SetRobConf_Response.
typedef struct chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence
{
  chesslab_setup2_interfaces__srv__SetRobConf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  chesslab_setup2_interfaces__srv__SetRobConf_Event__request__MAX_SIZE = 1
};
// response
enum
{
  chesslab_setup2_interfaces__srv__SetRobConf_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetRobConf in the package chesslab_setup2_interfaces.
typedef struct chesslab_setup2_interfaces__srv__SetRobConf_Event
{
  service_msgs__msg__ServiceEventInfo info;
  chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence request;
  chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence response;
} chesslab_setup2_interfaces__srv__SetRobConf_Event;

// Struct for a sequence of chesslab_setup2_interfaces__srv__SetRobConf_Event.
typedef struct chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence
{
  chesslab_setup2_interfaces__srv__SetRobConf_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__SET_ROB_CONF__STRUCT_H_
