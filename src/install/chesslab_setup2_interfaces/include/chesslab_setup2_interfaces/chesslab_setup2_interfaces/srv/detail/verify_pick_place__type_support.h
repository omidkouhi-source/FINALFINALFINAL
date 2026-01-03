// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from chesslab_setup2_interfaces:srv/VerifyPickPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "chesslab_setup2_interfaces/srv/verify_pick_place.h"


#ifndef CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__TYPE_SUPPORT_H_
#define CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "chesslab_setup2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  VerifyPickPlace_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  VerifyPickPlace_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  VerifyPickPlace_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  VerifyPickPlace
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  VerifyPickPlace
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_chesslab_setup2_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  VerifyPickPlace
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // CHESSLAB_SETUP2_INTERFACES__SRV__DETAIL__VERIFY_PICK_PLACE__TYPE_SUPPORT_H_
