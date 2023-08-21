// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kobuki_ros_interfaces:msg/DigitalInputEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kobuki_ros_interfaces/msg/detail/digital_input_event__rosidl_typesupport_introspection_c.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kobuki_ros_interfaces/msg/detail/digital_input_event__functions.h"
#include "kobuki_ros_interfaces/msg/detail/digital_input_event__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kobuki_ros_interfaces__msg__DigitalInputEvent__init(message_memory);
}

void kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_fini_function(void * message_memory)
{
  kobuki_ros_interfaces__msg__DigitalInputEvent__fini(message_memory);
}

size_t kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__size_function__DigitalInputEvent__values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__get_const_function__DigitalInputEvent__values(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__get_function__DigitalInputEvent__values(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__fetch_function__DigitalInputEvent__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__get_const_function__DigitalInputEvent__values(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__assign_function__DigitalInputEvent__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__get_function__DigitalInputEvent__values(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_member_array[1] = {
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__DigitalInputEvent, values),  // bytes offset in struct
    NULL,  // default value
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__size_function__DigitalInputEvent__values,  // size() function pointer
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__get_const_function__DigitalInputEvent__values,  // get_const(index) function pointer
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__get_function__DigitalInputEvent__values,  // get(index) function pointer
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__fetch_function__DigitalInputEvent__values,  // fetch(index, &value) function pointer
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__assign_function__DigitalInputEvent__values,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_members = {
  "kobuki_ros_interfaces__msg",  // message namespace
  "DigitalInputEvent",  // message name
  1,  // number of fields
  sizeof(kobuki_ros_interfaces__msg__DigitalInputEvent),
  kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_member_array,  // message members
  kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_type_support_handle = {
  0,
  &kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kobuki_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, msg, DigitalInputEvent)() {
  if (!kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_type_support_handle.typesupport_identifier) {
    kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kobuki_ros_interfaces__msg__DigitalInputEvent__rosidl_typesupport_introspection_c__DigitalInputEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
