// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robotiq_85_gripper_server:srv/GripperClose.idl
// generated code does not contain a copyright notice
#include "robotiq_85_gripper_server/srv/detail/gripper_close__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robotiq_85_gripper_server__srv__GripperClose_Request__init(robotiq_85_gripper_server__srv__GripperClose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
robotiq_85_gripper_server__srv__GripperClose_Request__fini(robotiq_85_gripper_server__srv__GripperClose_Request * msg)
{
  if (!msg) {
    return;
  }
  // order
}

bool
robotiq_85_gripper_server__srv__GripperClose_Request__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Request * lhs, const robotiq_85_gripper_server__srv__GripperClose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
robotiq_85_gripper_server__srv__GripperClose_Request__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Request * input,
  robotiq_85_gripper_server__srv__GripperClose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

robotiq_85_gripper_server__srv__GripperClose_Request *
robotiq_85_gripper_server__srv__GripperClose_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Request * msg = (robotiq_85_gripper_server__srv__GripperClose_Request *)allocator.allocate(sizeof(robotiq_85_gripper_server__srv__GripperClose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_85_gripper_server__srv__GripperClose_Request));
  bool success = robotiq_85_gripper_server__srv__GripperClose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_85_gripper_server__srv__GripperClose_Request__destroy(robotiq_85_gripper_server__srv__GripperClose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_85_gripper_server__srv__GripperClose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__init(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Request * data = NULL;

  if (size) {
    data = (robotiq_85_gripper_server__srv__GripperClose_Request *)allocator.zero_allocate(size, sizeof(robotiq_85_gripper_server__srv__GripperClose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_85_gripper_server__srv__GripperClose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_85_gripper_server__srv__GripperClose_Request__fini(&data[i - 1]);
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
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__fini(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array)
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
      robotiq_85_gripper_server__srv__GripperClose_Request__fini(&array->data[i]);
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

robotiq_85_gripper_server__srv__GripperClose_Request__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array = (robotiq_85_gripper_server__srv__GripperClose_Request__Sequence *)allocator.allocate(sizeof(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__destroy(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * lhs, const robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_85_gripper_server__srv__GripperClose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * input,
  robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_85_gripper_server__srv__GripperClose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_85_gripper_server__srv__GripperClose_Request * data =
      (robotiq_85_gripper_server__srv__GripperClose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_85_gripper_server__srv__GripperClose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_85_gripper_server__srv__GripperClose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_85_gripper_server__srv__GripperClose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robotiq_85_gripper_server__srv__GripperClose_Response__init(robotiq_85_gripper_server__srv__GripperClose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
robotiq_85_gripper_server__srv__GripperClose_Response__fini(robotiq_85_gripper_server__srv__GripperClose_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
robotiq_85_gripper_server__srv__GripperClose_Response__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Response * lhs, const robotiq_85_gripper_server__srv__GripperClose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
robotiq_85_gripper_server__srv__GripperClose_Response__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Response * input,
  robotiq_85_gripper_server__srv__GripperClose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

robotiq_85_gripper_server__srv__GripperClose_Response *
robotiq_85_gripper_server__srv__GripperClose_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Response * msg = (robotiq_85_gripper_server__srv__GripperClose_Response *)allocator.allocate(sizeof(robotiq_85_gripper_server__srv__GripperClose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_85_gripper_server__srv__GripperClose_Response));
  bool success = robotiq_85_gripper_server__srv__GripperClose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_85_gripper_server__srv__GripperClose_Response__destroy(robotiq_85_gripper_server__srv__GripperClose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_85_gripper_server__srv__GripperClose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__init(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Response * data = NULL;

  if (size) {
    data = (robotiq_85_gripper_server__srv__GripperClose_Response *)allocator.zero_allocate(size, sizeof(robotiq_85_gripper_server__srv__GripperClose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_85_gripper_server__srv__GripperClose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_85_gripper_server__srv__GripperClose_Response__fini(&data[i - 1]);
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
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__fini(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array)
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
      robotiq_85_gripper_server__srv__GripperClose_Response__fini(&array->data[i]);
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

robotiq_85_gripper_server__srv__GripperClose_Response__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array = (robotiq_85_gripper_server__srv__GripperClose_Response__Sequence *)allocator.allocate(sizeof(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__destroy(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * lhs, const robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_85_gripper_server__srv__GripperClose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * input,
  robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_85_gripper_server__srv__GripperClose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_85_gripper_server__srv__GripperClose_Response * data =
      (robotiq_85_gripper_server__srv__GripperClose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_85_gripper_server__srv__GripperClose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_85_gripper_server__srv__GripperClose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_85_gripper_server__srv__GripperClose_Response__copy(
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
// #include "robotiq_85_gripper_server/srv/detail/gripper_close__functions.h"

bool
robotiq_85_gripper_server__srv__GripperClose_Event__init(robotiq_85_gripper_server__srv__GripperClose_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    robotiq_85_gripper_server__srv__GripperClose_Event__fini(msg);
    return false;
  }
  // request
  if (!robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__init(&msg->request, 0)) {
    robotiq_85_gripper_server__srv__GripperClose_Event__fini(msg);
    return false;
  }
  // response
  if (!robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__init(&msg->response, 0)) {
    robotiq_85_gripper_server__srv__GripperClose_Event__fini(msg);
    return false;
  }
  return true;
}

void
robotiq_85_gripper_server__srv__GripperClose_Event__fini(robotiq_85_gripper_server__srv__GripperClose_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__fini(&msg->request);
  // response
  robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__fini(&msg->response);
}

bool
robotiq_85_gripper_server__srv__GripperClose_Event__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Event * lhs, const robotiq_85_gripper_server__srv__GripperClose_Event * rhs)
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
  if (!robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
robotiq_85_gripper_server__srv__GripperClose_Event__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Event * input,
  robotiq_85_gripper_server__srv__GripperClose_Event * output)
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
  if (!robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

robotiq_85_gripper_server__srv__GripperClose_Event *
robotiq_85_gripper_server__srv__GripperClose_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Event * msg = (robotiq_85_gripper_server__srv__GripperClose_Event *)allocator.allocate(sizeof(robotiq_85_gripper_server__srv__GripperClose_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robotiq_85_gripper_server__srv__GripperClose_Event));
  bool success = robotiq_85_gripper_server__srv__GripperClose_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robotiq_85_gripper_server__srv__GripperClose_Event__destroy(robotiq_85_gripper_server__srv__GripperClose_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robotiq_85_gripper_server__srv__GripperClose_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__init(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Event * data = NULL;

  if (size) {
    data = (robotiq_85_gripper_server__srv__GripperClose_Event *)allocator.zero_allocate(size, sizeof(robotiq_85_gripper_server__srv__GripperClose_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robotiq_85_gripper_server__srv__GripperClose_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robotiq_85_gripper_server__srv__GripperClose_Event__fini(&data[i - 1]);
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
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__fini(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array)
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
      robotiq_85_gripper_server__srv__GripperClose_Event__fini(&array->data[i]);
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

robotiq_85_gripper_server__srv__GripperClose_Event__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array = (robotiq_85_gripper_server__srv__GripperClose_Event__Sequence *)allocator.allocate(sizeof(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__destroy(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * lhs, const robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robotiq_85_gripper_server__srv__GripperClose_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * input,
  robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robotiq_85_gripper_server__srv__GripperClose_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robotiq_85_gripper_server__srv__GripperClose_Event * data =
      (robotiq_85_gripper_server__srv__GripperClose_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robotiq_85_gripper_server__srv__GripperClose_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robotiq_85_gripper_server__srv__GripperClose_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robotiq_85_gripper_server__srv__GripperClose_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
