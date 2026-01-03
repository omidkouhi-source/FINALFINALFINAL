// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kinenikros2:srv/InverseKinematics.idl
// generated code does not contain a copyright notice
#include "kinenikros2/srv/detail/inverse_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
kinenikros2__srv__InverseKinematics_Request__init(kinenikros2__srv__InverseKinematics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    kinenikros2__srv__InverseKinematics_Request__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    kinenikros2__srv__InverseKinematics_Request__fini(msg);
    return false;
  }
  return true;
}

void
kinenikros2__srv__InverseKinematics_Request__fini(kinenikros2__srv__InverseKinematics_Request * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
kinenikros2__srv__InverseKinematics_Request__are_equal(const kinenikros2__srv__InverseKinematics_Request * lhs, const kinenikros2__srv__InverseKinematics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
kinenikros2__srv__InverseKinematics_Request__copy(
  const kinenikros2__srv__InverseKinematics_Request * input,
  kinenikros2__srv__InverseKinematics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

kinenikros2__srv__InverseKinematics_Request *
kinenikros2__srv__InverseKinematics_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Request * msg = (kinenikros2__srv__InverseKinematics_Request *)allocator.allocate(sizeof(kinenikros2__srv__InverseKinematics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinenikros2__srv__InverseKinematics_Request));
  bool success = kinenikros2__srv__InverseKinematics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinenikros2__srv__InverseKinematics_Request__destroy(kinenikros2__srv__InverseKinematics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinenikros2__srv__InverseKinematics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinenikros2__srv__InverseKinematics_Request__Sequence__init(kinenikros2__srv__InverseKinematics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Request * data = NULL;

  if (size) {
    data = (kinenikros2__srv__InverseKinematics_Request *)allocator.zero_allocate(size, sizeof(kinenikros2__srv__InverseKinematics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinenikros2__srv__InverseKinematics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinenikros2__srv__InverseKinematics_Request__fini(&data[i - 1]);
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
kinenikros2__srv__InverseKinematics_Request__Sequence__fini(kinenikros2__srv__InverseKinematics_Request__Sequence * array)
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
      kinenikros2__srv__InverseKinematics_Request__fini(&array->data[i]);
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

kinenikros2__srv__InverseKinematics_Request__Sequence *
kinenikros2__srv__InverseKinematics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Request__Sequence * array = (kinenikros2__srv__InverseKinematics_Request__Sequence *)allocator.allocate(sizeof(kinenikros2__srv__InverseKinematics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinenikros2__srv__InverseKinematics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinenikros2__srv__InverseKinematics_Request__Sequence__destroy(kinenikros2__srv__InverseKinematics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinenikros2__srv__InverseKinematics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinenikros2__srv__InverseKinematics_Request__Sequence__are_equal(const kinenikros2__srv__InverseKinematics_Request__Sequence * lhs, const kinenikros2__srv__InverseKinematics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinenikros2__srv__InverseKinematics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinenikros2__srv__InverseKinematics_Request__Sequence__copy(
  const kinenikros2__srv__InverseKinematics_Request__Sequence * input,
  kinenikros2__srv__InverseKinematics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinenikros2__srv__InverseKinematics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinenikros2__srv__InverseKinematics_Request * data =
      (kinenikros2__srv__InverseKinematics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinenikros2__srv__InverseKinematics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinenikros2__srv__InverseKinematics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinenikros2__srv__InverseKinematics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `ik_solution`
#include "kinenikros2/msg/detail/inverse_kinematics__functions.h"

bool
kinenikros2__srv__InverseKinematics_Response__init(kinenikros2__srv__InverseKinematics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ik_solution
  if (!kinenikros2__msg__InverseKinematics__Sequence__init(&msg->ik_solution, 0)) {
    kinenikros2__srv__InverseKinematics_Response__fini(msg);
    return false;
  }
  // status
  return true;
}

void
kinenikros2__srv__InverseKinematics_Response__fini(kinenikros2__srv__InverseKinematics_Response * msg)
{
  if (!msg) {
    return;
  }
  // ik_solution
  kinenikros2__msg__InverseKinematics__Sequence__fini(&msg->ik_solution);
  // status
}

bool
kinenikros2__srv__InverseKinematics_Response__are_equal(const kinenikros2__srv__InverseKinematics_Response * lhs, const kinenikros2__srv__InverseKinematics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ik_solution
  if (!kinenikros2__msg__InverseKinematics__Sequence__are_equal(
      &(lhs->ik_solution), &(rhs->ik_solution)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
kinenikros2__srv__InverseKinematics_Response__copy(
  const kinenikros2__srv__InverseKinematics_Response * input,
  kinenikros2__srv__InverseKinematics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ik_solution
  if (!kinenikros2__msg__InverseKinematics__Sequence__copy(
      &(input->ik_solution), &(output->ik_solution)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

kinenikros2__srv__InverseKinematics_Response *
kinenikros2__srv__InverseKinematics_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Response * msg = (kinenikros2__srv__InverseKinematics_Response *)allocator.allocate(sizeof(kinenikros2__srv__InverseKinematics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinenikros2__srv__InverseKinematics_Response));
  bool success = kinenikros2__srv__InverseKinematics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinenikros2__srv__InverseKinematics_Response__destroy(kinenikros2__srv__InverseKinematics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinenikros2__srv__InverseKinematics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinenikros2__srv__InverseKinematics_Response__Sequence__init(kinenikros2__srv__InverseKinematics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Response * data = NULL;

  if (size) {
    data = (kinenikros2__srv__InverseKinematics_Response *)allocator.zero_allocate(size, sizeof(kinenikros2__srv__InverseKinematics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinenikros2__srv__InverseKinematics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinenikros2__srv__InverseKinematics_Response__fini(&data[i - 1]);
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
kinenikros2__srv__InverseKinematics_Response__Sequence__fini(kinenikros2__srv__InverseKinematics_Response__Sequence * array)
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
      kinenikros2__srv__InverseKinematics_Response__fini(&array->data[i]);
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

kinenikros2__srv__InverseKinematics_Response__Sequence *
kinenikros2__srv__InverseKinematics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Response__Sequence * array = (kinenikros2__srv__InverseKinematics_Response__Sequence *)allocator.allocate(sizeof(kinenikros2__srv__InverseKinematics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinenikros2__srv__InverseKinematics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinenikros2__srv__InverseKinematics_Response__Sequence__destroy(kinenikros2__srv__InverseKinematics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinenikros2__srv__InverseKinematics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinenikros2__srv__InverseKinematics_Response__Sequence__are_equal(const kinenikros2__srv__InverseKinematics_Response__Sequence * lhs, const kinenikros2__srv__InverseKinematics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinenikros2__srv__InverseKinematics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinenikros2__srv__InverseKinematics_Response__Sequence__copy(
  const kinenikros2__srv__InverseKinematics_Response__Sequence * input,
  kinenikros2__srv__InverseKinematics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinenikros2__srv__InverseKinematics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinenikros2__srv__InverseKinematics_Response * data =
      (kinenikros2__srv__InverseKinematics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinenikros2__srv__InverseKinematics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinenikros2__srv__InverseKinematics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinenikros2__srv__InverseKinematics_Response__copy(
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
// #include "kinenikros2/srv/detail/inverse_kinematics__functions.h"

bool
kinenikros2__srv__InverseKinematics_Event__init(kinenikros2__srv__InverseKinematics_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    kinenikros2__srv__InverseKinematics_Event__fini(msg);
    return false;
  }
  // request
  if (!kinenikros2__srv__InverseKinematics_Request__Sequence__init(&msg->request, 0)) {
    kinenikros2__srv__InverseKinematics_Event__fini(msg);
    return false;
  }
  // response
  if (!kinenikros2__srv__InverseKinematics_Response__Sequence__init(&msg->response, 0)) {
    kinenikros2__srv__InverseKinematics_Event__fini(msg);
    return false;
  }
  return true;
}

void
kinenikros2__srv__InverseKinematics_Event__fini(kinenikros2__srv__InverseKinematics_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  kinenikros2__srv__InverseKinematics_Request__Sequence__fini(&msg->request);
  // response
  kinenikros2__srv__InverseKinematics_Response__Sequence__fini(&msg->response);
}

bool
kinenikros2__srv__InverseKinematics_Event__are_equal(const kinenikros2__srv__InverseKinematics_Event * lhs, const kinenikros2__srv__InverseKinematics_Event * rhs)
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
  if (!kinenikros2__srv__InverseKinematics_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!kinenikros2__srv__InverseKinematics_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
kinenikros2__srv__InverseKinematics_Event__copy(
  const kinenikros2__srv__InverseKinematics_Event * input,
  kinenikros2__srv__InverseKinematics_Event * output)
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
  if (!kinenikros2__srv__InverseKinematics_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!kinenikros2__srv__InverseKinematics_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

kinenikros2__srv__InverseKinematics_Event *
kinenikros2__srv__InverseKinematics_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Event * msg = (kinenikros2__srv__InverseKinematics_Event *)allocator.allocate(sizeof(kinenikros2__srv__InverseKinematics_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinenikros2__srv__InverseKinematics_Event));
  bool success = kinenikros2__srv__InverseKinematics_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinenikros2__srv__InverseKinematics_Event__destroy(kinenikros2__srv__InverseKinematics_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinenikros2__srv__InverseKinematics_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinenikros2__srv__InverseKinematics_Event__Sequence__init(kinenikros2__srv__InverseKinematics_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Event * data = NULL;

  if (size) {
    data = (kinenikros2__srv__InverseKinematics_Event *)allocator.zero_allocate(size, sizeof(kinenikros2__srv__InverseKinematics_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinenikros2__srv__InverseKinematics_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinenikros2__srv__InverseKinematics_Event__fini(&data[i - 1]);
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
kinenikros2__srv__InverseKinematics_Event__Sequence__fini(kinenikros2__srv__InverseKinematics_Event__Sequence * array)
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
      kinenikros2__srv__InverseKinematics_Event__fini(&array->data[i]);
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

kinenikros2__srv__InverseKinematics_Event__Sequence *
kinenikros2__srv__InverseKinematics_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__srv__InverseKinematics_Event__Sequence * array = (kinenikros2__srv__InverseKinematics_Event__Sequence *)allocator.allocate(sizeof(kinenikros2__srv__InverseKinematics_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinenikros2__srv__InverseKinematics_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinenikros2__srv__InverseKinematics_Event__Sequence__destroy(kinenikros2__srv__InverseKinematics_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinenikros2__srv__InverseKinematics_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinenikros2__srv__InverseKinematics_Event__Sequence__are_equal(const kinenikros2__srv__InverseKinematics_Event__Sequence * lhs, const kinenikros2__srv__InverseKinematics_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinenikros2__srv__InverseKinematics_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinenikros2__srv__InverseKinematics_Event__Sequence__copy(
  const kinenikros2__srv__InverseKinematics_Event__Sequence * input,
  kinenikros2__srv__InverseKinematics_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinenikros2__srv__InverseKinematics_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinenikros2__srv__InverseKinematics_Event * data =
      (kinenikros2__srv__InverseKinematics_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinenikros2__srv__InverseKinematics_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinenikros2__srv__InverseKinematics_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinenikros2__srv__InverseKinematics_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
