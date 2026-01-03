// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_broadcaster:srv/GetMarkerTf.idl
// generated code does not contain a copyright notice
#include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `parent`
// Member `marker_id`
#include "rosidl_runtime_c/string_functions.h"

bool
aruco_broadcaster__srv__GetMarkerTf_Request__init(aruco_broadcaster__srv__GetMarkerTf_Request * msg)
{
  if (!msg) {
    return false;
  }
  // parent
  if (!rosidl_runtime_c__String__init(&msg->parent)) {
    aruco_broadcaster__srv__GetMarkerTf_Request__fini(msg);
    return false;
  }
  // marker_id
  if (!rosidl_runtime_c__String__init(&msg->marker_id)) {
    aruco_broadcaster__srv__GetMarkerTf_Request__fini(msg);
    return false;
  }
  return true;
}

void
aruco_broadcaster__srv__GetMarkerTf_Request__fini(aruco_broadcaster__srv__GetMarkerTf_Request * msg)
{
  if (!msg) {
    return;
  }
  // parent
  rosidl_runtime_c__String__fini(&msg->parent);
  // marker_id
  rosidl_runtime_c__String__fini(&msg->marker_id);
}

bool
aruco_broadcaster__srv__GetMarkerTf_Request__are_equal(const aruco_broadcaster__srv__GetMarkerTf_Request * lhs, const aruco_broadcaster__srv__GetMarkerTf_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parent
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent), &(rhs->parent)))
  {
    return false;
  }
  // marker_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->marker_id), &(rhs->marker_id)))
  {
    return false;
  }
  return true;
}

bool
aruco_broadcaster__srv__GetMarkerTf_Request__copy(
  const aruco_broadcaster__srv__GetMarkerTf_Request * input,
  aruco_broadcaster__srv__GetMarkerTf_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // parent
  if (!rosidl_runtime_c__String__copy(
      &(input->parent), &(output->parent)))
  {
    return false;
  }
  // marker_id
  if (!rosidl_runtime_c__String__copy(
      &(input->marker_id), &(output->marker_id)))
  {
    return false;
  }
  return true;
}

aruco_broadcaster__srv__GetMarkerTf_Request *
aruco_broadcaster__srv__GetMarkerTf_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Request * msg = (aruco_broadcaster__srv__GetMarkerTf_Request *)allocator.allocate(sizeof(aruco_broadcaster__srv__GetMarkerTf_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_broadcaster__srv__GetMarkerTf_Request));
  bool success = aruco_broadcaster__srv__GetMarkerTf_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_broadcaster__srv__GetMarkerTf_Request__destroy(aruco_broadcaster__srv__GetMarkerTf_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_broadcaster__srv__GetMarkerTf_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__init(aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Request * data = NULL;

  if (size) {
    data = (aruco_broadcaster__srv__GetMarkerTf_Request *)allocator.zero_allocate(size, sizeof(aruco_broadcaster__srv__GetMarkerTf_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_broadcaster__srv__GetMarkerTf_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_broadcaster__srv__GetMarkerTf_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__fini(aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_broadcaster__srv__GetMarkerTf_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_broadcaster__srv__GetMarkerTf_Request__Sequence *
aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * array = (aruco_broadcaster__srv__GetMarkerTf_Request__Sequence *)allocator.allocate(sizeof(aruco_broadcaster__srv__GetMarkerTf_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__destroy(aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__are_equal(const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * lhs, const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_broadcaster__srv__GetMarkerTf_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__copy(
  const aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * input,
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_broadcaster__srv__GetMarkerTf_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_broadcaster__srv__GetMarkerTf_Request * data =
      (aruco_broadcaster__srv__GetMarkerTf_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_broadcaster__srv__GetMarkerTf_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_broadcaster__srv__GetMarkerTf_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_broadcaster__srv__GetMarkerTf_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ret`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
aruco_broadcaster__srv__GetMarkerTf_Response__init(aruco_broadcaster__srv__GetMarkerTf_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  if (!geometry_msgs__msg__TransformStamped__init(&msg->ret)) {
    aruco_broadcaster__srv__GetMarkerTf_Response__fini(msg);
    return false;
  }
  return true;
}

void
aruco_broadcaster__srv__GetMarkerTf_Response__fini(aruco_broadcaster__srv__GetMarkerTf_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
  geometry_msgs__msg__TransformStamped__fini(&msg->ret);
}

bool
aruco_broadcaster__srv__GetMarkerTf_Response__are_equal(const aruco_broadcaster__srv__GetMarkerTf_Response * lhs, const aruco_broadcaster__srv__GetMarkerTf_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->ret), &(rhs->ret)))
  {
    return false;
  }
  return true;
}

bool
aruco_broadcaster__srv__GetMarkerTf_Response__copy(
  const aruco_broadcaster__srv__GetMarkerTf_Response * input,
  aruco_broadcaster__srv__GetMarkerTf_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->ret), &(output->ret)))
  {
    return false;
  }
  return true;
}

aruco_broadcaster__srv__GetMarkerTf_Response *
aruco_broadcaster__srv__GetMarkerTf_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Response * msg = (aruco_broadcaster__srv__GetMarkerTf_Response *)allocator.allocate(sizeof(aruco_broadcaster__srv__GetMarkerTf_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_broadcaster__srv__GetMarkerTf_Response));
  bool success = aruco_broadcaster__srv__GetMarkerTf_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_broadcaster__srv__GetMarkerTf_Response__destroy(aruco_broadcaster__srv__GetMarkerTf_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_broadcaster__srv__GetMarkerTf_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__init(aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Response * data = NULL;

  if (size) {
    data = (aruco_broadcaster__srv__GetMarkerTf_Response *)allocator.zero_allocate(size, sizeof(aruco_broadcaster__srv__GetMarkerTf_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_broadcaster__srv__GetMarkerTf_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_broadcaster__srv__GetMarkerTf_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__fini(aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_broadcaster__srv__GetMarkerTf_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_broadcaster__srv__GetMarkerTf_Response__Sequence *
aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * array = (aruco_broadcaster__srv__GetMarkerTf_Response__Sequence *)allocator.allocate(sizeof(aruco_broadcaster__srv__GetMarkerTf_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__destroy(aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__are_equal(const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * lhs, const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_broadcaster__srv__GetMarkerTf_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__copy(
  const aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * input,
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_broadcaster__srv__GetMarkerTf_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_broadcaster__srv__GetMarkerTf_Response * data =
      (aruco_broadcaster__srv__GetMarkerTf_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_broadcaster__srv__GetMarkerTf_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_broadcaster__srv__GetMarkerTf_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_broadcaster__srv__GetMarkerTf_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "aruco_broadcaster/srv/detail/get_marker_tf__functions.h"

bool
aruco_broadcaster__srv__GetMarkerTf_Event__init(aruco_broadcaster__srv__GetMarkerTf_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    aruco_broadcaster__srv__GetMarkerTf_Event__fini(msg);
    return false;
  }
  // request
  if (!aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__init(&msg->request, 0)) {
    aruco_broadcaster__srv__GetMarkerTf_Event__fini(msg);
    return false;
  }
  // response
  if (!aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__init(&msg->response, 0)) {
    aruco_broadcaster__srv__GetMarkerTf_Event__fini(msg);
    return false;
  }
  return true;
}

void
aruco_broadcaster__srv__GetMarkerTf_Event__fini(aruco_broadcaster__srv__GetMarkerTf_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__fini(&msg->request);
  // response
  aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__fini(&msg->response);
}

bool
aruco_broadcaster__srv__GetMarkerTf_Event__are_equal(const aruco_broadcaster__srv__GetMarkerTf_Event * lhs, const aruco_broadcaster__srv__GetMarkerTf_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
aruco_broadcaster__srv__GetMarkerTf_Event__copy(
  const aruco_broadcaster__srv__GetMarkerTf_Event * input,
  aruco_broadcaster__srv__GetMarkerTf_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!aruco_broadcaster__srv__GetMarkerTf_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!aruco_broadcaster__srv__GetMarkerTf_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

aruco_broadcaster__srv__GetMarkerTf_Event *
aruco_broadcaster__srv__GetMarkerTf_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Event * msg = (aruco_broadcaster__srv__GetMarkerTf_Event *)allocator.allocate(sizeof(aruco_broadcaster__srv__GetMarkerTf_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_broadcaster__srv__GetMarkerTf_Event));
  bool success = aruco_broadcaster__srv__GetMarkerTf_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_broadcaster__srv__GetMarkerTf_Event__destroy(aruco_broadcaster__srv__GetMarkerTf_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_broadcaster__srv__GetMarkerTf_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__init(aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Event * data = NULL;

  if (size) {
    data = (aruco_broadcaster__srv__GetMarkerTf_Event *)allocator.zero_allocate(size, sizeof(aruco_broadcaster__srv__GetMarkerTf_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_broadcaster__srv__GetMarkerTf_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_broadcaster__srv__GetMarkerTf_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__fini(aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aruco_broadcaster__srv__GetMarkerTf_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aruco_broadcaster__srv__GetMarkerTf_Event__Sequence *
aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * array = (aruco_broadcaster__srv__GetMarkerTf_Event__Sequence *)allocator.allocate(sizeof(aruco_broadcaster__srv__GetMarkerTf_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__destroy(aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__are_equal(const aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * lhs, const aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_broadcaster__srv__GetMarkerTf_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_broadcaster__srv__GetMarkerTf_Event__Sequence__copy(
  const aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * input,
  aruco_broadcaster__srv__GetMarkerTf_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_broadcaster__srv__GetMarkerTf_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_broadcaster__srv__GetMarkerTf_Event * data =
      (aruco_broadcaster__srv__GetMarkerTf_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_broadcaster__srv__GetMarkerTf_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_broadcaster__srv__GetMarkerTf_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_broadcaster__srv__GetMarkerTf_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
