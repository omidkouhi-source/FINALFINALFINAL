// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robotiq_85_gripper_server:srv/GripperClose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robotiq_85_gripper_server/srv/gripper_close.h"


#ifndef ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_CLOSE__FUNCTIONS_H_
#define ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_CLOSE__FUNCTIONS_H_

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
#include "robotiq_85_gripper_server/msg/rosidl_generator_c__visibility_control.h"

#include "robotiq_85_gripper_server/srv/detail/gripper_close__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperClose__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperClose__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperClose__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperClose__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GripperClose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_85_gripper_server__srv__GripperClose_Request
 * )) before or use
 * robotiq_85_gripper_server__srv__GripperClose_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Request__init(robotiq_85_gripper_server__srv__GripperClose_Request * msg);

/// Finalize srv/GripperClose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Request__fini(robotiq_85_gripper_server__srv__GripperClose_Request * msg);

/// Create srv/GripperClose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_85_gripper_server__srv__GripperClose_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
robotiq_85_gripper_server__srv__GripperClose_Request *
robotiq_85_gripper_server__srv__GripperClose_Request__create(void);

/// Destroy srv/GripperClose message.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Request__destroy(robotiq_85_gripper_server__srv__GripperClose_Request * msg);

/// Check for srv/GripperClose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Request__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Request * lhs, const robotiq_85_gripper_server__srv__GripperClose_Request * rhs);

/// Copy a srv/GripperClose message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Request__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Request * input,
  robotiq_85_gripper_server__srv__GripperClose_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperClose_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperClose_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperClose_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GripperClose messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_85_gripper_server__srv__GripperClose_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__init(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array, size_t size);

/// Finalize array of srv/GripperClose messages.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__fini(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array);

/// Create array of srv/GripperClose messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__create(size_t size);

/// Destroy array of srv/GripperClose messages.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__destroy(robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * array);

/// Check for srv/GripperClose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * lhs, const robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * rhs);

/// Copy an array of srv/GripperClose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Request__Sequence__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * input,
  robotiq_85_gripper_server__srv__GripperClose_Request__Sequence * output);

/// Initialize srv/GripperClose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_85_gripper_server__srv__GripperClose_Response
 * )) before or use
 * robotiq_85_gripper_server__srv__GripperClose_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Response__init(robotiq_85_gripper_server__srv__GripperClose_Response * msg);

/// Finalize srv/GripperClose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Response__fini(robotiq_85_gripper_server__srv__GripperClose_Response * msg);

/// Create srv/GripperClose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_85_gripper_server__srv__GripperClose_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
robotiq_85_gripper_server__srv__GripperClose_Response *
robotiq_85_gripper_server__srv__GripperClose_Response__create(void);

/// Destroy srv/GripperClose message.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Response__destroy(robotiq_85_gripper_server__srv__GripperClose_Response * msg);

/// Check for srv/GripperClose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Response__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Response * lhs, const robotiq_85_gripper_server__srv__GripperClose_Response * rhs);

/// Copy a srv/GripperClose message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Response__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Response * input,
  robotiq_85_gripper_server__srv__GripperClose_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperClose_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperClose_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperClose_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GripperClose messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_85_gripper_server__srv__GripperClose_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__init(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array, size_t size);

/// Finalize array of srv/GripperClose messages.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__fini(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array);

/// Create array of srv/GripperClose messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__create(size_t size);

/// Destroy array of srv/GripperClose messages.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__destroy(robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * array);

/// Check for srv/GripperClose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * lhs, const robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * rhs);

/// Copy an array of srv/GripperClose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Response__Sequence__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * input,
  robotiq_85_gripper_server__srv__GripperClose_Response__Sequence * output);

/// Initialize srv/GripperClose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robotiq_85_gripper_server__srv__GripperClose_Event
 * )) before or use
 * robotiq_85_gripper_server__srv__GripperClose_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Event__init(robotiq_85_gripper_server__srv__GripperClose_Event * msg);

/// Finalize srv/GripperClose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Event__fini(robotiq_85_gripper_server__srv__GripperClose_Event * msg);

/// Create srv/GripperClose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robotiq_85_gripper_server__srv__GripperClose_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
robotiq_85_gripper_server__srv__GripperClose_Event *
robotiq_85_gripper_server__srv__GripperClose_Event__create(void);

/// Destroy srv/GripperClose message.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Event__destroy(robotiq_85_gripper_server__srv__GripperClose_Event * msg);

/// Check for srv/GripperClose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Event__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Event * lhs, const robotiq_85_gripper_server__srv__GripperClose_Event * rhs);

/// Copy a srv/GripperClose message.
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
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Event__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Event * input,
  robotiq_85_gripper_server__srv__GripperClose_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_type_hash_t *
robotiq_85_gripper_server__srv__GripperClose_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeDescription *
robotiq_85_gripper_server__srv__GripperClose_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource *
robotiq_85_gripper_server__srv__GripperClose_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GripperClose messages.
/**
 * It allocates the memory for the number of elements and calls
 * robotiq_85_gripper_server__srv__GripperClose_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__init(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array, size_t size);

/// Finalize array of srv/GripperClose messages.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__fini(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array);

/// Create array of srv/GripperClose messages.
/**
 * It allocates the memory for the array and calls
 * robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence *
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__create(size_t size);

/// Destroy array of srv/GripperClose messages.
/**
 * It calls
 * robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
void
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__destroy(robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * array);

/// Check for srv/GripperClose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__are_equal(const robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * lhs, const robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * rhs);

/// Copy an array of srv/GripperClose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robotiq_85_gripper_server
bool
robotiq_85_gripper_server__srv__GripperClose_Event__Sequence__copy(
  const robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * input,
  robotiq_85_gripper_server__srv__GripperClose_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_85_GRIPPER_SERVER__SRV__DETAIL__GRIPPER_CLOSE__FUNCTIONS_H_
