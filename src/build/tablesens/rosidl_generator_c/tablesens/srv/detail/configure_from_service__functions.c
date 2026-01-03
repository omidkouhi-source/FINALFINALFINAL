// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tablesens:srv/ConfigureFromService.idl
// generated code does not contain a copyright notice
#include "tablesens/srv/detail/configure_from_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `fix_list`
#include "tablesens/msg/detail/marker_fix_list__functions.h"

bool
tablesens__srv__ConfigureFromService_Request__init(tablesens__srv__ConfigureFromService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // fix_list
  if (!tablesens__msg__MarkerFixList__init(&msg->fix_list)) {
    tablesens__srv__ConfigureFromService_Request__fini(msg);
    return false;
  }
  return true;
}

void
tablesens__srv__ConfigureFromService_Request__fini(tablesens__srv__ConfigureFromService_Request * msg)
{
  if (!msg) {
    return;
  }
  // fix_list
  tablesens__msg__MarkerFixList__fini(&msg->fix_list);
}

bool
tablesens__srv__ConfigureFromService_Request__are_equal(const tablesens__srv__ConfigureFromService_Request * lhs, const tablesens__srv__ConfigureFromService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fix_list
  if (!tablesens__msg__MarkerFixList__are_equal(
      &(lhs->fix_list), &(rhs->fix_list)))
  {
    return false;
  }
  return true;
}

bool
tablesens__srv__ConfigureFromService_Request__copy(
  const tablesens__srv__ConfigureFromService_Request * input,
  tablesens__srv__ConfigureFromService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // fix_list
  if (!tablesens__msg__MarkerFixList__copy(
      &(input->fix_list), &(output->fix_list)))
  {
    return false;
  }
  return true;
}

tablesens__srv__ConfigureFromService_Request *
tablesens__srv__ConfigureFromService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Request * msg = (tablesens__srv__ConfigureFromService_Request *)allocator.allocate(sizeof(tablesens__srv__ConfigureFromService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tablesens__srv__ConfigureFromService_Request));
  bool success = tablesens__srv__ConfigureFromService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tablesens__srv__ConfigureFromService_Request__destroy(tablesens__srv__ConfigureFromService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tablesens__srv__ConfigureFromService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tablesens__srv__ConfigureFromService_Request__Sequence__init(tablesens__srv__ConfigureFromService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Request * data = NULL;

  if (size) {
    data = (tablesens__srv__ConfigureFromService_Request *)allocator.zero_allocate(size, sizeof(tablesens__srv__ConfigureFromService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tablesens__srv__ConfigureFromService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tablesens__srv__ConfigureFromService_Request__fini(&data[i - 1]);
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
tablesens__srv__ConfigureFromService_Request__Sequence__fini(tablesens__srv__ConfigureFromService_Request__Sequence * array)
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
      tablesens__srv__ConfigureFromService_Request__fini(&array->data[i]);
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

tablesens__srv__ConfigureFromService_Request__Sequence *
tablesens__srv__ConfigureFromService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Request__Sequence * array = (tablesens__srv__ConfigureFromService_Request__Sequence *)allocator.allocate(sizeof(tablesens__srv__ConfigureFromService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tablesens__srv__ConfigureFromService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tablesens__srv__ConfigureFromService_Request__Sequence__destroy(tablesens__srv__ConfigureFromService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tablesens__srv__ConfigureFromService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tablesens__srv__ConfigureFromService_Request__Sequence__are_equal(const tablesens__srv__ConfigureFromService_Request__Sequence * lhs, const tablesens__srv__ConfigureFromService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tablesens__srv__ConfigureFromService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tablesens__srv__ConfigureFromService_Request__Sequence__copy(
  const tablesens__srv__ConfigureFromService_Request__Sequence * input,
  tablesens__srv__ConfigureFromService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tablesens__srv__ConfigureFromService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tablesens__srv__ConfigureFromService_Request * data =
      (tablesens__srv__ConfigureFromService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tablesens__srv__ConfigureFromService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tablesens__srv__ConfigureFromService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tablesens__srv__ConfigureFromService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tablesens__srv__ConfigureFromService_Response__init(tablesens__srv__ConfigureFromService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
tablesens__srv__ConfigureFromService_Response__fini(tablesens__srv__ConfigureFromService_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
tablesens__srv__ConfigureFromService_Response__are_equal(const tablesens__srv__ConfigureFromService_Response * lhs, const tablesens__srv__ConfigureFromService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
tablesens__srv__ConfigureFromService_Response__copy(
  const tablesens__srv__ConfigureFromService_Response * input,
  tablesens__srv__ConfigureFromService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

tablesens__srv__ConfigureFromService_Response *
tablesens__srv__ConfigureFromService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Response * msg = (tablesens__srv__ConfigureFromService_Response *)allocator.allocate(sizeof(tablesens__srv__ConfigureFromService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tablesens__srv__ConfigureFromService_Response));
  bool success = tablesens__srv__ConfigureFromService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tablesens__srv__ConfigureFromService_Response__destroy(tablesens__srv__ConfigureFromService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tablesens__srv__ConfigureFromService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tablesens__srv__ConfigureFromService_Response__Sequence__init(tablesens__srv__ConfigureFromService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Response * data = NULL;

  if (size) {
    data = (tablesens__srv__ConfigureFromService_Response *)allocator.zero_allocate(size, sizeof(tablesens__srv__ConfigureFromService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tablesens__srv__ConfigureFromService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tablesens__srv__ConfigureFromService_Response__fini(&data[i - 1]);
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
tablesens__srv__ConfigureFromService_Response__Sequence__fini(tablesens__srv__ConfigureFromService_Response__Sequence * array)
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
      tablesens__srv__ConfigureFromService_Response__fini(&array->data[i]);
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

tablesens__srv__ConfigureFromService_Response__Sequence *
tablesens__srv__ConfigureFromService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Response__Sequence * array = (tablesens__srv__ConfigureFromService_Response__Sequence *)allocator.allocate(sizeof(tablesens__srv__ConfigureFromService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tablesens__srv__ConfigureFromService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tablesens__srv__ConfigureFromService_Response__Sequence__destroy(tablesens__srv__ConfigureFromService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tablesens__srv__ConfigureFromService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tablesens__srv__ConfigureFromService_Response__Sequence__are_equal(const tablesens__srv__ConfigureFromService_Response__Sequence * lhs, const tablesens__srv__ConfigureFromService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tablesens__srv__ConfigureFromService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tablesens__srv__ConfigureFromService_Response__Sequence__copy(
  const tablesens__srv__ConfigureFromService_Response__Sequence * input,
  tablesens__srv__ConfigureFromService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tablesens__srv__ConfigureFromService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tablesens__srv__ConfigureFromService_Response * data =
      (tablesens__srv__ConfigureFromService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tablesens__srv__ConfigureFromService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tablesens__srv__ConfigureFromService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tablesens__srv__ConfigureFromService_Response__copy(
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
// #include "tablesens/srv/detail/configure_from_service__functions.h"

bool
tablesens__srv__ConfigureFromService_Event__init(tablesens__srv__ConfigureFromService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    tablesens__srv__ConfigureFromService_Event__fini(msg);
    return false;
  }
  // request
  if (!tablesens__srv__ConfigureFromService_Request__Sequence__init(&msg->request, 0)) {
    tablesens__srv__ConfigureFromService_Event__fini(msg);
    return false;
  }
  // response
  if (!tablesens__srv__ConfigureFromService_Response__Sequence__init(&msg->response, 0)) {
    tablesens__srv__ConfigureFromService_Event__fini(msg);
    return false;
  }
  return true;
}

void
tablesens__srv__ConfigureFromService_Event__fini(tablesens__srv__ConfigureFromService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  tablesens__srv__ConfigureFromService_Request__Sequence__fini(&msg->request);
  // response
  tablesens__srv__ConfigureFromService_Response__Sequence__fini(&msg->response);
}

bool
tablesens__srv__ConfigureFromService_Event__are_equal(const tablesens__srv__ConfigureFromService_Event * lhs, const tablesens__srv__ConfigureFromService_Event * rhs)
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
  if (!tablesens__srv__ConfigureFromService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!tablesens__srv__ConfigureFromService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
tablesens__srv__ConfigureFromService_Event__copy(
  const tablesens__srv__ConfigureFromService_Event * input,
  tablesens__srv__ConfigureFromService_Event * output)
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
  if (!tablesens__srv__ConfigureFromService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!tablesens__srv__ConfigureFromService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

tablesens__srv__ConfigureFromService_Event *
tablesens__srv__ConfigureFromService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Event * msg = (tablesens__srv__ConfigureFromService_Event *)allocator.allocate(sizeof(tablesens__srv__ConfigureFromService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tablesens__srv__ConfigureFromService_Event));
  bool success = tablesens__srv__ConfigureFromService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tablesens__srv__ConfigureFromService_Event__destroy(tablesens__srv__ConfigureFromService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tablesens__srv__ConfigureFromService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tablesens__srv__ConfigureFromService_Event__Sequence__init(tablesens__srv__ConfigureFromService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Event * data = NULL;

  if (size) {
    data = (tablesens__srv__ConfigureFromService_Event *)allocator.zero_allocate(size, sizeof(tablesens__srv__ConfigureFromService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tablesens__srv__ConfigureFromService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tablesens__srv__ConfigureFromService_Event__fini(&data[i - 1]);
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
tablesens__srv__ConfigureFromService_Event__Sequence__fini(tablesens__srv__ConfigureFromService_Event__Sequence * array)
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
      tablesens__srv__ConfigureFromService_Event__fini(&array->data[i]);
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

tablesens__srv__ConfigureFromService_Event__Sequence *
tablesens__srv__ConfigureFromService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__srv__ConfigureFromService_Event__Sequence * array = (tablesens__srv__ConfigureFromService_Event__Sequence *)allocator.allocate(sizeof(tablesens__srv__ConfigureFromService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tablesens__srv__ConfigureFromService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tablesens__srv__ConfigureFromService_Event__Sequence__destroy(tablesens__srv__ConfigureFromService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tablesens__srv__ConfigureFromService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tablesens__srv__ConfigureFromService_Event__Sequence__are_equal(const tablesens__srv__ConfigureFromService_Event__Sequence * lhs, const tablesens__srv__ConfigureFromService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tablesens__srv__ConfigureFromService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tablesens__srv__ConfigureFromService_Event__Sequence__copy(
  const tablesens__srv__ConfigureFromService_Event__Sequence * input,
  tablesens__srv__ConfigureFromService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tablesens__srv__ConfigureFromService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tablesens__srv__ConfigureFromService_Event * data =
      (tablesens__srv__ConfigureFromService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tablesens__srv__ConfigureFromService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tablesens__srv__ConfigureFromService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tablesens__srv__ConfigureFromService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
