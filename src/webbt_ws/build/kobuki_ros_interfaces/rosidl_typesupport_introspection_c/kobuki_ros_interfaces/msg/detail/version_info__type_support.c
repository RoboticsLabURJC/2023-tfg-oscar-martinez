// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kobuki_ros_interfaces/msg/detail/version_info__rosidl_typesupport_introspection_c.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kobuki_ros_interfaces/msg/detail/version_info__functions.h"
#include "kobuki_ros_interfaces/msg/detail/version_info__struct.h"


// Include directives for member types
// Member `hardware`
// Member `firmware`
// Member `software`
#include "rosidl_runtime_c/string_functions.h"
// Member `udid`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kobuki_ros_interfaces__msg__VersionInfo__init(message_memory);
}

void kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_fini_function(void * message_memory)
{
  kobuki_ros_interfaces__msg__VersionInfo__fini(message_memory);
}

size_t kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__size_function__VersionInfo__udid(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__get_const_function__VersionInfo__udid(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__get_function__VersionInfo__udid(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__fetch_function__VersionInfo__udid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__get_const_function__VersionInfo__udid(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__assign_function__VersionInfo__udid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__get_function__VersionInfo__udid(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__resize_function__VersionInfo__udid(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_member_array[5] = {
  {
    "hardware",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__VersionInfo, hardware),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "firmware",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__VersionInfo, firmware),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "software",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__VersionInfo, software),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "udid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__VersionInfo, udid),  // bytes offset in struct
    NULL,  // default value
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__size_function__VersionInfo__udid,  // size() function pointer
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__get_const_function__VersionInfo__udid,  // get_const(index) function pointer
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__get_function__VersionInfo__udid,  // get(index) function pointer
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__fetch_function__VersionInfo__udid,  // fetch(index, &value) function pointer
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__assign_function__VersionInfo__udid,  // assign(index, value) function pointer
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__resize_function__VersionInfo__udid  // resize(index) function pointer
  },
  {
    "features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__VersionInfo, features),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_members = {
  "kobuki_ros_interfaces__msg",  // message namespace
  "VersionInfo",  // message name
  5,  // number of fields
  sizeof(kobuki_ros_interfaces__msg__VersionInfo),
  kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_member_array,  // message members
  kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_type_support_handle = {
  0,
  &kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kobuki_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, msg, VersionInfo)() {
  if (!kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_type_support_handle.typesupport_identifier) {
    kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kobuki_ros_interfaces__msg__VersionInfo__rosidl_typesupport_introspection_c__VersionInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
