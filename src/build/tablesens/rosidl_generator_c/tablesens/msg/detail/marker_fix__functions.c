// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tablesens:msg/MarkerFix.idl
// generated code does not contain a copyright notice
#include "tablesens/msg/detail/marker_fix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
tablesens__msg__MarkerFix__init(tablesens__msg__MarkerFix * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    tablesens__msg__MarkerFix__fini(msg);
    return false;
  }
  return true;
}

void
tablesens__msg__MarkerFix__fini(tablesens__msg__MarkerFix * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
tablesens__msg__MarkerFix__are_equal(const tablesens__msg__MarkerFix * lhs, const tablesens__msg__MarkerFix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
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
tablesens__msg__MarkerFix__copy(
  const tablesens__msg__MarkerFix * input,
  tablesens__msg__MarkerFix * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

tablesens__msg__MarkerFix *
tablesens__msg__MarkerFix__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__msg__MarkerFix * msg = (tablesens__msg__MarkerFix *)allocator.allocate(sizeof(tablesens__msg__MarkerFix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tablesens__msg__MarkerFix));
  bool success = tablesens__msg__MarkerFix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tablesens__msg__MarkerFix__destroy(tablesens__msg__MarkerFix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tablesens__msg__MarkerFix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tablesens__msg__MarkerFix__Sequence__init(tablesens__msg__MarkerFix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__msg__MarkerFix * data = NULL;

  if (size) {
    data = (tablesens__msg__MarkerFix *)allocator.zero_allocate(size, sizeof(tablesens__msg__MarkerFix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tablesens__msg__MarkerFix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tablesens__msg__MarkerFix__fini(&data[i - 1]);
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
tablesens__msg__MarkerFix__Sequence__fini(tablesens__msg__MarkerFix__Sequence * array)
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
      tablesens__msg__MarkerFix__fini(&array->data[i]);
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

tablesens__msg__MarkerFix__Sequence *
tablesens__msg__MarkerFix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__msg__MarkerFix__Sequence * array = (tablesens__msg__MarkerFix__Sequence *)allocator.allocate(sizeof(tablesens__msg__MarkerFix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tablesens__msg__MarkerFix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tablesens__msg__MarkerFix__Sequence__destroy(tablesens__msg__MarkerFix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tablesens__msg__MarkerFix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tablesens__msg__MarkerFix__Sequence__are_equal(const tablesens__msg__MarkerFix__Sequence * lhs, const tablesens__msg__MarkerFix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tablesens__msg__MarkerFix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tablesens__msg__MarkerFix__Sequence__copy(
  const tablesens__msg__MarkerFix__Sequence * input,
  tablesens__msg__MarkerFix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tablesens__msg__MarkerFix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tablesens__msg__MarkerFix * data =
      (tablesens__msg__MarkerFix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tablesens__msg__MarkerFix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tablesens__msg__MarkerFix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tablesens__msg__MarkerFix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
