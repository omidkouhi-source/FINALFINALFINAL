// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from chesslab_setup2_interfaces:srv/InverseKinematicsSimple.idl
// generated code does not contain a copyright notice
#include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "chesslab_setup2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.h"
#include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // pose

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _InverseKinematicsSimple_Request__ros_msg_type = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  eprosima::fastcdr::Cdr & cdr,
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message)
{
  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsSimple_Request__ros_msg_type * ros_message = static_cast<const _InverseKinematicsSimple_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
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

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request;
    is_plain =
      (
      offsetof(DataType, pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsSimple_Request__ros_msg_type * ros_message = static_cast<const _InverseKinematicsSimple_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
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
  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request;
    is_plain =
      (
      offsetof(DataType, pose) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematicsSimple_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message = static_cast<const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(ros_message, cdr);
}

static bool _InverseKinematicsSimple_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message = static_cast<chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(cdr, ros_message);
}

static uint32_t _InverseKinematicsSimple_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
      untyped_ros_message, 0));
}

static size_t _InverseKinematicsSimple_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematicsSimple_Request = {
  "chesslab_setup2_interfaces::srv",
  "InverseKinematicsSimple_Request",
  _InverseKinematicsSimple_Request__cdr_serialize,
  _InverseKinematicsSimple_Request__cdr_deserialize,
  _InverseKinematicsSimple_Request__get_serialized_size,
  _InverseKinematicsSimple_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematicsSimple_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematicsSimple_Request,
  get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Request)() {
  return &_InverseKinematicsSimple_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "chesslab_setup2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "chesslab_setup2_interfaces/msg/detail/inverse_kinematics_solution__functions.h"  // ik_solution

// forward declare type support functions

bool cdr_serialize_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  eprosima::fastcdr::Cdr & cdr,
  chesslab_setup2_interfaces__msg__InverseKinematicsSolution * ros_message);

size_t get_serialized_size_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const chesslab_setup2_interfaces__msg__InverseKinematicsSolution * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, msg, InverseKinematicsSolution)();


using _InverseKinematicsSimple_Response__ros_msg_type = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ik_solution
  {
    size_t size = ros_message->ik_solution.size;
    auto array_ptr = ros_message->ik_solution.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
        &array_ptr[i], cdr);
    }
  }

  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  eprosima::fastcdr::Cdr & cdr,
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message)
{
  // Field name: ik_solution
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

    if (ros_message->ik_solution.data) {
      chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__fini(&ros_message->ik_solution);
    }
    if (!chesslab_setup2_interfaces__msg__InverseKinematicsSolution__Sequence__init(&ros_message->ik_solution, size)) {
      fprintf(stderr, "failed to create array for field 'ik_solution'");
      return false;
    }
    auto array_ptr = ros_message->ik_solution.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(cdr, &array_ptr[i]);
    }
  }

  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsSimple_Response__ros_msg_type * ros_message = static_cast<const _InverseKinematicsSimple_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ik_solution
  {
    size_t array_size = ros_message->ik_solution.size;
    auto array_ptr = ros_message->ik_solution.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
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

  // Field name: ik_solution
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ik_solution
  {
    size_t size = ros_message->ik_solution.size;
    auto array_ptr = ros_message->ik_solution.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
        &array_ptr[i], cdr);
    }
  }

  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsSimple_Response__ros_msg_type * ros_message = static_cast<const _InverseKinematicsSimple_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ik_solution
  {
    size_t array_size = ros_message->ik_solution.size;
    auto array_ptr = ros_message->ik_solution.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
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
  // Field name: ik_solution
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_chesslab_setup2_interfaces__msg__InverseKinematicsSolution(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematicsSimple_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message = static_cast<const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(ros_message, cdr);
}

static bool _InverseKinematicsSimple_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message = static_cast<chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(cdr, ros_message);
}

static uint32_t _InverseKinematicsSimple_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
      untyped_ros_message, 0));
}

static size_t _InverseKinematicsSimple_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematicsSimple_Response = {
  "chesslab_setup2_interfaces::srv",
  "InverseKinematicsSimple_Response",
  _InverseKinematicsSimple_Response__cdr_serialize,
  _InverseKinematicsSimple_Response__cdr_deserialize,
  _InverseKinematicsSimple_Response__get_serialized_size,
  _InverseKinematicsSimple_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematicsSimple_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematicsSimple_Response,
  get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Response)() {
  return &_InverseKinematicsSimple_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "chesslab_setup2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__struct.h"
// already included above
// #include "chesslab_setup2_interfaces/srv/detail/inverse_kinematics_simple__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  eprosima::fastcdr::Cdr & cdr,
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message);

size_t get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Request)();

bool cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  eprosima::fastcdr::Cdr & cdr,
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message);

size_t get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_chesslab_setup2_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _InverseKinematicsSimple_Event__ros_msg_type = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
  eprosima::fastcdr::Cdr & cdr,
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
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

    if (ros_message->request.data) {
      chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__Sequence__fini(&ros_message->request);
    }
    if (!chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
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

    if (ros_message->response.data) {
      chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__Sequence__fini(&ros_message->response);
    }
    if (!chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsSimple_Event__ros_msg_type * ros_message = static_cast<const _InverseKinematicsSimple_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
bool cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InverseKinematicsSimple_Event__ros_msg_type * ros_message = static_cast<const _InverseKinematicsSimple_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_chesslab_setup2_interfaces
size_t max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _InverseKinematicsSimple_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event * ros_message = static_cast<const chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(ros_message, cdr);
}

static bool _InverseKinematicsSimple_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event * ros_message = static_cast<chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(cdr, ros_message);
}

static uint32_t _InverseKinematicsSimple_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
      untyped_ros_message, 0));
}

static size_t _InverseKinematicsSimple_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InverseKinematicsSimple_Event = {
  "chesslab_setup2_interfaces::srv",
  "InverseKinematicsSimple_Event",
  _InverseKinematicsSimple_Event__cdr_serialize,
  _InverseKinematicsSimple_Event__cdr_deserialize,
  _InverseKinematicsSimple_Event__get_serialized_size,
  _InverseKinematicsSimple_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _InverseKinematicsSimple_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InverseKinematicsSimple_Event,
  get_message_typesupport_handle_function,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Event)() {
  return &_InverseKinematicsSimple_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "chesslab_setup2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "chesslab_setup2_interfaces/srv/inverse_kinematics_simple.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t InverseKinematicsSimple__callbacks = {
  "chesslab_setup2_interfaces::srv",
  "InverseKinematicsSimple",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple_Response)(),
};

static rosidl_service_type_support_t InverseKinematicsSimple__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &InverseKinematicsSimple__callbacks,
  get_service_typesupport_handle_function,
  &_InverseKinematicsSimple_Request__type_support,
  &_InverseKinematicsSimple_Response__type_support,
  &_InverseKinematicsSimple_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chesslab_setup2_interfaces,
    srv,
    InverseKinematicsSimple
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    chesslab_setup2_interfaces,
    srv,
    InverseKinematicsSimple
  ),
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple__get_type_hash,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple__get_type_description,
  &chesslab_setup2_interfaces__srv__InverseKinematicsSimple__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesslab_setup2_interfaces, srv, InverseKinematicsSimple)() {
  return &InverseKinematicsSimple__handle;
}

#if defined(__cplusplus)
}
#endif
