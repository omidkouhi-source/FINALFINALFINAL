// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chesslab_setup2_interfaces:srv/SetRobConf.idl
// generated code does not contain a copyright notice
#include "chesslab_setup2_interfaces/srv/detail/set_rob_conf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `conf`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
chesslab_setup2_interfaces__srv__SetRobConf_Request__init(chesslab_setup2_interfaces__srv__SetRobConf_Request * msg)
{
  if (!msg) {
    return false;
  }
  // conf
  if (!rosidl_runtime_c__float__Sequence__init(&msg->conf, 0)) {
    chesslab_setup2_interfaces__srv__SetRobConf_Request__fini(msg);
    return false;
  }
  return true;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Request__fini(chesslab_setup2_interfaces__srv__SetRobConf_Request * msg)
{
  if (!msg) {
    return;
  }
  // conf
  rosidl_runtime_c__float__Sequence__fini(&msg->conf);
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Request__are_equal(const chesslab_setup2_interfaces__srv__SetRobConf_Request * lhs, const chesslab_setup2_interfaces__srv__SetRobConf_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conf
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->conf), &(rhs->conf)))
  {
    return false;
  }
  return true;
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Request__copy(
  const chesslab_setup2_interfaces__srv__SetRobConf_Request * input,
  chesslab_setup2_interfaces__srv__SetRobConf_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // conf
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->conf), &(output->conf)))
  {
    return false;
  }
  return true;
}

chesslab_setup2_interfaces__srv__SetRobConf_Request *
chesslab_setup2_interfaces__srv__SetRobConf_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Request * msg = (chesslab_setup2_interfaces__srv__SetRobConf_Request *)allocator.allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Request));
  bool success = chesslab_setup2_interfaces__srv__SetRobConf_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Request__destroy(chesslab_setup2_interfaces__srv__SetRobConf_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chesslab_setup2_interfaces__srv__SetRobConf_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__init(chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Request * data = NULL;

  if (size) {
    data = (chesslab_setup2_interfaces__srv__SetRobConf_Request *)allocator.zero_allocate(size, sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesslab_setup2_interfaces__srv__SetRobConf_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesslab_setup2_interfaces__srv__SetRobConf_Request__fini(&data[i - 1]);
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
chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__fini(chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * array)
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
      chesslab_setup2_interfaces__srv__SetRobConf_Request__fini(&array->data[i]);
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

chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence *
chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * array = (chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence *)allocator.allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__destroy(chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__are_equal(const chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * lhs, const chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__copy(
  const chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * input,
  chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chesslab_setup2_interfaces__srv__SetRobConf_Request * data =
      (chesslab_setup2_interfaces__srv__SetRobConf_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chesslab_setup2_interfaces__srv__SetRobConf_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
chesslab_setup2_interfaces__srv__SetRobConf_Response__init(chesslab_setup2_interfaces__srv__SetRobConf_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Response__fini(chesslab_setup2_interfaces__srv__SetRobConf_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Response__are_equal(const chesslab_setup2_interfaces__srv__SetRobConf_Response * lhs, const chesslab_setup2_interfaces__srv__SetRobConf_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Response__copy(
  const chesslab_setup2_interfaces__srv__SetRobConf_Response * input,
  chesslab_setup2_interfaces__srv__SetRobConf_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

chesslab_setup2_interfaces__srv__SetRobConf_Response *
chesslab_setup2_interfaces__srv__SetRobConf_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Response * msg = (chesslab_setup2_interfaces__srv__SetRobConf_Response *)allocator.allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Response));
  bool success = chesslab_setup2_interfaces__srv__SetRobConf_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Response__destroy(chesslab_setup2_interfaces__srv__SetRobConf_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chesslab_setup2_interfaces__srv__SetRobConf_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__init(chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Response * data = NULL;

  if (size) {
    data = (chesslab_setup2_interfaces__srv__SetRobConf_Response *)allocator.zero_allocate(size, sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesslab_setup2_interfaces__srv__SetRobConf_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesslab_setup2_interfaces__srv__SetRobConf_Response__fini(&data[i - 1]);
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
chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__fini(chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * array)
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
      chesslab_setup2_interfaces__srv__SetRobConf_Response__fini(&array->data[i]);
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

chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence *
chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * array = (chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence *)allocator.allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__destroy(chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__are_equal(const chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * lhs, const chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__copy(
  const chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * input,
  chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chesslab_setup2_interfaces__srv__SetRobConf_Response * data =
      (chesslab_setup2_interfaces__srv__SetRobConf_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chesslab_setup2_interfaces__srv__SetRobConf_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__copy(
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
// #include "chesslab_setup2_interfaces/srv/detail/set_rob_conf__functions.h"

bool
chesslab_setup2_interfaces__srv__SetRobConf_Event__init(chesslab_setup2_interfaces__srv__SetRobConf_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(msg);
    return false;
  }
  // request
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__init(&msg->request, 0)) {
    chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(msg);
    return false;
  }
  // response
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__init(&msg->response, 0)) {
    chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(msg);
    return false;
  }
  return true;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(chesslab_setup2_interfaces__srv__SetRobConf_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__fini(&msg->request);
  // response
  chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__fini(&msg->response);
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Event__are_equal(const chesslab_setup2_interfaces__srv__SetRobConf_Event * lhs, const chesslab_setup2_interfaces__srv__SetRobConf_Event * rhs)
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
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Event__copy(
  const chesslab_setup2_interfaces__srv__SetRobConf_Event * input,
  chesslab_setup2_interfaces__srv__SetRobConf_Event * output)
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
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!chesslab_setup2_interfaces__srv__SetRobConf_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

chesslab_setup2_interfaces__srv__SetRobConf_Event *
chesslab_setup2_interfaces__srv__SetRobConf_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Event * msg = (chesslab_setup2_interfaces__srv__SetRobConf_Event *)allocator.allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Event));
  bool success = chesslab_setup2_interfaces__srv__SetRobConf_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Event__destroy(chesslab_setup2_interfaces__srv__SetRobConf_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__init(chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Event * data = NULL;

  if (size) {
    data = (chesslab_setup2_interfaces__srv__SetRobConf_Event *)allocator.zero_allocate(size, sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesslab_setup2_interfaces__srv__SetRobConf_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(&data[i - 1]);
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
chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__fini(chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * array)
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
      chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(&array->data[i]);
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

chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence *
chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * array = (chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence *)allocator.allocate(sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__destroy(chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__are_equal(const chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * lhs, const chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence__copy(
  const chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * input,
  chesslab_setup2_interfaces__srv__SetRobConf_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chesslab_setup2_interfaces__srv__SetRobConf_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chesslab_setup2_interfaces__srv__SetRobConf_Event * data =
      (chesslab_setup2_interfaces__srv__SetRobConf_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chesslab_setup2_interfaces__srv__SetRobConf_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chesslab_setup2_interfaces__srv__SetRobConf_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chesslab_setup2_interfaces__srv__SetRobConf_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
