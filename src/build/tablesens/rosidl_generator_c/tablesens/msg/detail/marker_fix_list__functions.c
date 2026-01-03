// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice
#include "tablesens/msg/detail/marker_fix_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `marker_fix_list`
#include "tablesens/msg/detail/marker_fix__functions.h"

bool
tablesens__msg__MarkerFixList__init(tablesens__msg__MarkerFixList * msg)
{
  if (!msg) {
    return false;
  }
  // marker_fix_list
  if (!tablesens__msg__MarkerFix__Sequence__init(&msg->marker_fix_list, 0)) {
    tablesens__msg__MarkerFixList__fini(msg);
    return false;
  }
  return true;
}

void
tablesens__msg__MarkerFixList__fini(tablesens__msg__MarkerFixList * msg)
{
  if (!msg) {
    return;
  }
  // marker_fix_list
  tablesens__msg__MarkerFix__Sequence__fini(&msg->marker_fix_list);
}

bool
tablesens__msg__MarkerFixList__are_equal(const tablesens__msg__MarkerFixList * lhs, const tablesens__msg__MarkerFixList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // marker_fix_list
  if (!tablesens__msg__MarkerFix__Sequence__are_equal(
      &(lhs->marker_fix_list), &(rhs->marker_fix_list)))
  {
    return false;
  }
  return true;
}

bool
tablesens__msg__MarkerFixList__copy(
  const tablesens__msg__MarkerFixList * input,
  tablesens__msg__MarkerFixList * output)
{
  if (!input || !output) {
    return false;
  }
  // marker_fix_list
  if (!tablesens__msg__MarkerFix__Sequence__copy(
      &(input->marker_fix_list), &(output->marker_fix_list)))
  {
    return false;
  }
  return true;
}

tablesens__msg__MarkerFixList *
tablesens__msg__MarkerFixList__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__msg__MarkerFixList * msg = (tablesens__msg__MarkerFixList *)allocator.allocate(sizeof(tablesens__msg__MarkerFixList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tablesens__msg__MarkerFixList));
  bool success = tablesens__msg__MarkerFixList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tablesens__msg__MarkerFixList__destroy(tablesens__msg__MarkerFixList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tablesens__msg__MarkerFixList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tablesens__msg__MarkerFixList__Sequence__init(tablesens__msg__MarkerFixList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__msg__MarkerFixList * data = NULL;

  if (size) {
    data = (tablesens__msg__MarkerFixList *)allocator.zero_allocate(size, sizeof(tablesens__msg__MarkerFixList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tablesens__msg__MarkerFixList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tablesens__msg__MarkerFixList__fini(&data[i - 1]);
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
tablesens__msg__MarkerFixList__Sequence__fini(tablesens__msg__MarkerFixList__Sequence * array)
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
      tablesens__msg__MarkerFixList__fini(&array->data[i]);
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

tablesens__msg__MarkerFixList__Sequence *
tablesens__msg__MarkerFixList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tablesens__msg__MarkerFixList__Sequence * array = (tablesens__msg__MarkerFixList__Sequence *)allocator.allocate(sizeof(tablesens__msg__MarkerFixList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tablesens__msg__MarkerFixList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tablesens__msg__MarkerFixList__Sequence__destroy(tablesens__msg__MarkerFixList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tablesens__msg__MarkerFixList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tablesens__msg__MarkerFixList__Sequence__are_equal(const tablesens__msg__MarkerFixList__Sequence * lhs, const tablesens__msg__MarkerFixList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tablesens__msg__MarkerFixList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tablesens__msg__MarkerFixList__Sequence__copy(
  const tablesens__msg__MarkerFixList__Sequence * input,
  tablesens__msg__MarkerFixList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tablesens__msg__MarkerFixList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tablesens__msg__MarkerFixList * data =
      (tablesens__msg__MarkerFixList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tablesens__msg__MarkerFixList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tablesens__msg__MarkerFixList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tablesens__msg__MarkerFixList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
