// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kinenikros2:msg/InverseKinematics.idl
// generated code does not contain a copyright notice
#include "kinenikros2/msg/detail/inverse_kinematics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kinenikros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kinenikros2/msg/detail/inverse_kinematics__struct.h"
#include "kinenikros2/msg/detail/inverse_kinematics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // ik
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ik

// forward declare type support functions


using _InverseKinematics__ros_msg_type = kinenikros2__msg__InverseKinematics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
bool cdr_serialize_kinenikros2__msg__InverseKinematics(
  const kinenikros2__msg__InverseKinematics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ik
  {
    size_t size = ros_message->ik.size;
    auto array_ptr = ros_message->ik.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
bool cdr_deserialize_kinenikros2__msg__InverseKinematics(
  eprosima::fastcdr::Cdr & cdr,
  kinenikros2__msg__InverseKinematics * ros_message)
{
  // Field name: ik
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ik.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ik);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ik, size)) {
      fprintf(stderr, "failed to create array for field 'ik'");
      return false;
    }
    auto array_ptr = ros_message->ik.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
size_t get_serialized_size_kinenikros2__msg__InverseKinematics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics__ros_msg_type * ros_message = static_cast<const _InverseKinematics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ik
  {
    size_t array_size = ros_message->ik.size;
    auto array_ptr = ros_message->ik.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
size_t max_serialized_size_kinenikros2__msg__InverseKinematics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: ik
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kinenikros2__msg__InverseKinematics;
    is_plain =
      (
      offsetof(DataType, ik) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
bool cdr_serialize_key_kinenikros2__msg__InverseKinematics(
  const kinenikros2__msg__InverseKinematics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ik
  {
    size_t size = ros_message->ik.size;
    auto array_ptr = ros_message->ik.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
size_t get_serialized_size_key_kinenikros2__msg__InverseKinematics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematics__ros_msg_type * ros_message = static_cast<const _InverseKinematics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ik
  {
    size_t array_size = ros_message->ik.size;
    auto array_ptr = ros_message->ik.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kinenikros2
size_t max_serialized_size_key_kinenikros2__msg__InverseKinematics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: ik
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = kinenikros2__msg__InverseKinematics;
    is_plain =
      (
      offsetof(DataType, ik) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const kinenikros2__msg__InverseKinematics * ros_message = static_cast<const kinenikros2__msg__InverseKinematics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_kinenikros2__msg__InverseKinematics(ros_message, cdr);
}

static bool _InverseKinematics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  kinenikros2__msg__InverseKinematics * ros_message = static_cast<kinenikros2__msg__InverseKinematics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_kinenikros2__msg__InverseKinematics(cdr, ros_message);
}

static uint32_t _InverseKinematics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kinenikros2__msg__InverseKinematics(
      untyped_ros_message, 0));
}

static size_t _InverseKinematics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kinenikros2__msg__InverseKinematics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematics = {
  "kinenikros2::msg",
  "InverseKinematics",
  _InverseKinematics__cdr_serialize,
  _InverseKinematics__cdr_deserialize,
  _InverseKinematics__get_serialized_size,
  _InverseKinematics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematics,
  get_message_typesupport_handle_function,
  &kinenikros2__msg__InverseKinematics__get_type_hash,
  &kinenikros2__msg__InverseKinematics__get_type_description,
  &kinenikros2__msg__InverseKinematics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kinenikros2, msg, InverseKinematics)() {
  return &_InverseKinematics__type_support;
}

#if defined(__cplusplus)
}
#endif
