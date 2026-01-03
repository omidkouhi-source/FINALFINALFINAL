// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tablesens:msg/MarkerFixList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tablesens/msg/detail/marker_fix_list__rosidl_typesupport_introspection_c.h"
#include "tablesens/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tablesens/msg/detail/marker_fix_list__functions.h"
#include "tablesens/msg/detail/marker_fix_list__struct.h"


// Include directives for member types
// Member `marker_fix_list`
#include "tablesens/msg/marker_fix.h"
// Member `marker_fix_list`
#include "tablesens/msg/detail/marker_fix__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tablesens__msg__MarkerFixList__init(message_memory);
}

void tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_fini_function(void * message_memory)
{
  tablesens__msg__MarkerFixList__fini(message_memory);
}

size_t tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__size_function__MarkerFixList__marker_fix_list(
  const void * untyped_member)
{
  const tablesens__msg__MarkerFix__Sequence * member =
    (const tablesens__msg__MarkerFix__Sequence *)(untyped_member);
  return member->size;
}

const void * tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__get_const_function__MarkerFixList__marker_fix_list(
  const void * untyped_member, size_t index)
{
  const tablesens__msg__MarkerFix__Sequence * member =
    (const tablesens__msg__MarkerFix__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__get_function__MarkerFixList__marker_fix_list(
  void * untyped_member, size_t index)
{
  tablesens__msg__MarkerFix__Sequence * member =
    (tablesens__msg__MarkerFix__Sequence *)(untyped_member);
  return &member->data[index];
}

void tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__fetch_function__MarkerFixList__marker_fix_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tablesens__msg__MarkerFix * item =
    ((const tablesens__msg__MarkerFix *)
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__get_const_function__MarkerFixList__marker_fix_list(untyped_member, index));
  tablesens__msg__MarkerFix * value =
    (tablesens__msg__MarkerFix *)(untyped_value);
  *value = *item;
}

void tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__assign_function__MarkerFixList__marker_fix_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tablesens__msg__MarkerFix * item =
    ((tablesens__msg__MarkerFix *)
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__get_function__MarkerFixList__marker_fix_list(untyped_member, index));
  const tablesens__msg__MarkerFix * value =
    (const tablesens__msg__MarkerFix *)(untyped_value);
  *item = *value;
}

bool tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__resize_function__MarkerFixList__marker_fix_list(
  void * untyped_member, size_t size)
{
  tablesens__msg__MarkerFix__Sequence * member =
    (tablesens__msg__MarkerFix__Sequence *)(untyped_member);
  tablesens__msg__MarkerFix__Sequence__fini(member);
  return tablesens__msg__MarkerFix__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_member_array[1] = {
  {
    "marker_fix_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tablesens__msg__MarkerFixList, marker_fix_list),  // bytes offset in struct
    NULL,  // default value
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__size_function__MarkerFixList__marker_fix_list,  // size() function pointer
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__get_const_function__MarkerFixList__marker_fix_list,  // get_const(index) function pointer
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__get_function__MarkerFixList__marker_fix_list,  // get(index) function pointer
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__fetch_function__MarkerFixList__marker_fix_list,  // fetch(index, &value) function pointer
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__assign_function__MarkerFixList__marker_fix_list,  // assign(index, value) function pointer
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__resize_function__MarkerFixList__marker_fix_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_members = {
  "tablesens__msg",  // message namespace
  "MarkerFixList",  // message name
  1,  // number of fields
  sizeof(tablesens__msg__MarkerFixList),
  false,  // has_any_key_member_
  tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_member_array,  // message members
  tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_init_function,  // function to initialize message memory (memory has to be allocated)
  tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_type_support_handle = {
  0,
  &tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_members,
  get_message_typesupport_handle_function,
  &tablesens__msg__MarkerFixList__get_type_hash,
  &tablesens__msg__MarkerFixList__get_type_description,
  &tablesens__msg__MarkerFixList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tablesens
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, msg, MarkerFixList)() {
  tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tablesens, msg, MarkerFix)();
  if (!tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_type_support_handle.typesupport_identifier) {
    tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tablesens__msg__MarkerFixList__rosidl_typesupport_introspection_c__MarkerFixList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
