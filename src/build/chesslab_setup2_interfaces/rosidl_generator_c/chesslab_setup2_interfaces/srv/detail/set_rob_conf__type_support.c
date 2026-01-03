// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from chesslab_setup2_interfaces:srv/SetRobConf.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "chesslab_setup2_interfaces/srv/detail/set_rob_conf__type_support.h"
#include "rosidl_typesupport_interface/macros.h"
#include "chesslab_setup2_interfaces/srv/detail/set_rob_conf__functions.h"
#include "chesslab_setup2_interfaces/srv/detail/set_rob_conf__struct.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  SetRobConf
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  chesslab_setup2_interfaces__srv__SetRobConf_Event * event_msg = (chesslab_setup2_interfaces__srv__SetRobConf_Event *)(allocator->allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Event), allocator->state));
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__copy((const chesslab_setup2_interfaces__srv__SetRobConf_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__copy((const chesslab_setup2_interfaces__srv__SetRobConf_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  chesslab_setup2_interfaces,
  srv,
  SetRobConf
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  chesslab_setup2_interfaces__srv__SetRobConf_Event * _event_msg = (chesslab_setup2_interfaces__srv__SetRobConf_Event *)(event_msg);

  chesslab_setup2_interfaces__srv__SetRobConf_Event__fini((chesslab_setup2_interfaces__srv__SetRobConf_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
