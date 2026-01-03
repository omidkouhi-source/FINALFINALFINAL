// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kinenikros2/msg/inverse_kinematics.h"


#ifndef KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__FUNCTIONS_H_
#define KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "kinenikros2/msg/rosidl_generator_c__visibility_control.h"

#include "kinenikros2/msg/detail/inverse_kinematics__struct.h"

/// Initialize msg/InverseKinematics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kinenikros2__msg__InverseKinematics
 * )) before or use
 * kinenikros2__msg__InverseKinematics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
bool
kinenikros2__msg__InverseKinematics__init(kinenikros2__msg__InverseKinematics * msg);

/// Finalize msg/InverseKinematics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
void
kinenikros2__msg__InverseKinematics__fini(kinenikros2__msg__InverseKinematics * msg);

/// Create msg/InverseKinematics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kinenikros2__msg__InverseKinematics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
kinenikros2__msg__InverseKinematics *
kinenikros2__msg__InverseKinematics__create(void);

/// Destroy msg/InverseKinematics message.
/**
 * It calls
 * kinenikros2__msg__InverseKinematics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
void
kinenikros2__msg__InverseKinematics__destroy(kinenikros2__msg__InverseKinematics * msg);

/// Check for msg/InverseKinematics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
bool
kinenikros2__msg__InverseKinematics__are_equal(const kinenikros2__msg__InverseKinematics * lhs, const kinenikros2__msg__InverseKinematics * rhs);

/// Copy a msg/InverseKinematics message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
bool
kinenikros2__msg__InverseKinematics__copy(
  const kinenikros2__msg__InverseKinematics * input,
  kinenikros2__msg__InverseKinematics * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
const rosidl_type_hash_t *
kinenikros2__msg__InverseKinematics__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
const rosidl_runtime_c__type_description__TypeDescription *
kinenikros2__msg__InverseKinematics__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
const rosidl_runtime_c__type_description__TypeSource *
kinenikros2__msg__InverseKinematics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
kinenikros2__msg__InverseKinematics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/InverseKinematics messages.
/**
 * It allocates the memory for the number of elements and calls
 * kinenikros2__msg__InverseKinematics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
bool
kinenikros2__msg__InverseKinematics__Sequence__init(kinenikros2__msg__InverseKinematics__Sequence * array, size_t size);

/// Finalize array of msg/InverseKinematics messages.
/**
 * It calls
 * kinenikros2__msg__InverseKinematics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
void
kinenikros2__msg__InverseKinematics__Sequence__fini(kinenikros2__msg__InverseKinematics__Sequence * array);

/// Create array of msg/InverseKinematics messages.
/**
 * It allocates the memory for the array and calls
 * kinenikros2__msg__InverseKinematics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
kinenikros2__msg__InverseKinematics__Sequence *
kinenikros2__msg__InverseKinematics__Sequence__create(size_t size);

/// Destroy array of msg/InverseKinematics messages.
/**
 * It calls
 * kinenikros2__msg__InverseKinematics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
void
kinenikros2__msg__InverseKinematics__Sequence__destroy(kinenikros2__msg__InverseKinematics__Sequence * array);

/// Check for msg/InverseKinematics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
bool
kinenikros2__msg__InverseKinematics__Sequence__are_equal(const kinenikros2__msg__InverseKinematics__Sequence * lhs, const kinenikros2__msg__InverseKinematics__Sequence * rhs);

/// Copy an array of msg/InverseKinematics messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_kinenikros2
bool
kinenikros2__msg__InverseKinematics__Sequence__copy(
  const kinenikros2__msg__InverseKinematics__Sequence * input,
  kinenikros2__msg__InverseKinematics__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KINENIKROS2__MSG__DETAIL__INVERSE_KINEMATICS__FUNCTIONS_H_
