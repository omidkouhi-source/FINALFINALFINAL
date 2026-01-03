// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chesslab_setup2_interfaces:msg/InverseKinematicsSolution.idl
// generated code does not contain a copyright notice
#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ik`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__init(chesslab_setup2_interfaces__msg__InverseKinematicsSolution * msg)
{
  if (!msg) {
    return false;
  }
  // ik
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ik, 0)) {
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(msg);
    return false;
  }
  return true;
}

void
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(chesslab_setup2_interfaces__msg__InverseKinematicsSolution * msg)
{
  if (!msg) {
    return;
  }
  // ik
  rosidl_runtime_c__double__Sequence__fini(&msg->ik);
}

bool
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__are_equal(const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * lhs, const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * rhs)
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
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__copy(
  const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * input,
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution * output)
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

chesslab_setup2_interfaces__msg__InverseKinematicsSolution *
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution * msg = (chesslab_setup2_interfaces__msg__InverseKinematicsSolution *)allocator.allocate(sizeof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution));
  bool success = chesslab_setup2_interfaces__msg__InverseKinematicsSolution__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__destroy(chesslab_setup2_interfaces__msg__InverseKinematicsSolution * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__init(chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution * data = NULL;

  if (size) {
    data = (chesslab_setup2_interfaces__msg__InverseKinematicsSolution *)allocator.zero_allocate(size, sizeof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesslab_setup2_interfaces__msg__InverseKinematicsSolution__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(&data[i - 1]);
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
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__fini(chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * array)
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
      chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(&array->data[i]);
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

chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence *
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * array = (chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence *)allocator.allocate(sizeof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__destroy(chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__are_equal(const chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * lhs, const chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!chesslab_setup2_interfaces__msg__InverseKinematicsSolution__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__copy(
  const chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * input,
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(chesslab_setup2_interfaces__msg__InverseKinematicsSolution);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    chesslab_setup2_interfaces__msg__InverseKinematicsSolution * data =
      (chesslab_setup2_interfaces__msg__InverseKinematicsSolution *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!chesslab_setup2_interfaces__msg__InverseKinematicsSolution__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          chesslab_setup2_interfaces__msg__InverseKinematicsSolution__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!chesslab_setup2_interfaces__msg__InverseKinematicsSolution__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
