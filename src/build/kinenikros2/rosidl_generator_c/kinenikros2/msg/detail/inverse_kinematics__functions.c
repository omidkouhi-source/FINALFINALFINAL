// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice
#include "kinenikros2/msg/detail/inverse_kinematics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ik`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kinenikros2__msg__InverseKinematics__init(kinenikros2__msg__InverseKinematics * msg)
{
  if (!msg) {
    return false;
  }
  // ik
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ik, 0)) {
    kinenikros2__msg__InverseKinematics__fini(msg);
    return false;
  }
  return true;
}

void
kinenikros2__msg__InverseKinematics__fini(kinenikros2__msg__InverseKinematics * msg)
{
  if (!msg) {
    return;
  }
  // ik
  rosidl_runtime_c__double__Sequence__fini(&msg->ik);
}

bool
kinenikros2__msg__InverseKinematics__are_equal(const kinenikros2__msg__InverseKinematics * lhs, const kinenikros2__msg__InverseKinematics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ik
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ik), &(rhs->ik)))
  {
    return false;
  }
  return true;
}

bool
kinenikros2__msg__InverseKinematics__copy(
  const kinenikros2__msg__InverseKinematics * input,
  kinenikros2__msg__InverseKinematics * output)
{
  if (!input || !output) {
    return false;
  }
  // ik
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ik), &(output->ik)))
  {
    return false;
  }
  return true;
}

kinenikros2__msg__InverseKinematics *
kinenikros2__msg__InverseKinematics__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__msg__InverseKinematics * msg = (kinenikros2__msg__InverseKinematics *)allocator.allocate(sizeof(kinenikros2__msg__InverseKinematics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kinenikros2__msg__InverseKinematics));
  bool success = kinenikros2__msg__InverseKinematics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kinenikros2__msg__InverseKinematics__destroy(kinenikros2__msg__InverseKinematics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kinenikros2__msg__InverseKinematics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kinenikros2__msg__InverseKinematics__Sequence__init(kinenikros2__msg__InverseKinematics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__msg__InverseKinematics * data = NULL;

  if (size) {
    data = (kinenikros2__msg__InverseKinematics *)allocator.zero_allocate(size, sizeof(kinenikros2__msg__InverseKinematics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kinenikros2__msg__InverseKinematics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kinenikros2__msg__InverseKinematics__fini(&data[i - 1]);
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
kinenikros2__msg__InverseKinematics__Sequence__fini(kinenikros2__msg__InverseKinematics__Sequence * array)
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
      kinenikros2__msg__InverseKinematics__fini(&array->data[i]);
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

kinenikros2__msg__InverseKinematics__Sequence *
kinenikros2__msg__InverseKinematics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kinenikros2__msg__InverseKinematics__Sequence * array = (kinenikros2__msg__InverseKinematics__Sequence *)allocator.allocate(sizeof(kinenikros2__msg__InverseKinematics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kinenikros2__msg__InverseKinematics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kinenikros2__msg__InverseKinematics__Sequence__destroy(kinenikros2__msg__InverseKinematics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kinenikros2__msg__InverseKinematics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kinenikros2__msg__InverseKinematics__Sequence__are_equal(const kinenikros2__msg__InverseKinematics__Sequence * lhs, const kinenikros2__msg__InverseKinematics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kinenikros2__msg__InverseKinematics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kinenikros2__msg__InverseKinematics__Sequence__copy(
  const kinenikros2__msg__InverseKinematics__Sequence * input,
  kinenikros2__msg__InverseKinematics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kinenikros2__msg__InverseKinematics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kinenikros2__msg__InverseKinematics * data =
      (kinenikros2__msg__InverseKinematics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kinenikros2__msg__InverseKinematics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kinenikros2__msg__InverseKinematics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kinenikros2__msg__InverseKinematics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
