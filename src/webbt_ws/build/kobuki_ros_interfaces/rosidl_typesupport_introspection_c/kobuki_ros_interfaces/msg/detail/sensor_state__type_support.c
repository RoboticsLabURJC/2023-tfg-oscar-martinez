// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kobuki_ros_interfaces/msg/detail/sensor_state__rosidl_typesupport_introspection_c.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kobuki_ros_interfaces/msg/detail/sensor_state__functions.h"
#include "kobuki_ros_interfaces/msg/detail/sensor_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `bottom`
// Member `current`
// Member `analog_input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kobuki_ros_interfaces__msg__SensorState__init(message_memory);
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function(void * message_memory)
{
  kobuki_ros_interfaces__msg__SensorState__fini(message_memory);
}

size_t kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__bottom(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__bottom(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__bottom(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__bottom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__bottom(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__bottom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__bottom(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__bottom(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__current(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__current(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__current(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__analog_input(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__analog_input(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__analog_input(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__analog_input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__analog_input(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__analog_input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__analog_input(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__analog_input(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[17] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bumper",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, bumper),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_drop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, wheel_drop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cliff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, cliff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_encoder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, left_encoder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_encoder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, right_encoder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, left_pwm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, right_pwm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buttons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, buttons),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charger",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, charger),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, battery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, bottom),  // bytes offset in struct
    NULL,  // default value
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__bottom,  // size() function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__bottom,  // get_const(index) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__bottom,  // get(index) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__bottom,  // fetch(index, &value) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__bottom,  // assign(index, value) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__bottom  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, current),  // bytes offset in struct
    NULL,  // default value
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__current,  // size() function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__current,  // get_const(index) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__current,  // get(index) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__current,  // fetch(index, &value) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__current,  // assign(index, value) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__current  // resize(index) function pointer
  },
  {
    "over_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, over_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "digital_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, digital_input),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "analog_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__SensorState, analog_input),  // bytes offset in struct
    NULL,  // default value
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__size_function__SensorState__analog_input,  // size() function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_const_function__SensorState__analog_input,  // get_const(index) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__get_function__SensorState__analog_input,  // get(index) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__fetch_function__SensorState__analog_input,  // fetch(index, &value) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__assign_function__SensorState__analog_input,  // assign(index, value) function pointer
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__resize_function__SensorState__analog_input  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members = {
  "kobuki_ros_interfaces__msg",  // message namespace
  "SensorState",  // message name
  17,  // number of fields
  sizeof(kobuki_ros_interfaces__msg__SensorState),
  kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array,  // message members
  kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_init_function,  // function to initialize message memory (memory has to be allocated)
  kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle = {
  0,
  &kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kobuki_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, msg, SensorState)() {
  kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier) {
    kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kobuki_ros_interfaces__msg__SensorState__rosidl_typesupport_introspection_c__SensorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
