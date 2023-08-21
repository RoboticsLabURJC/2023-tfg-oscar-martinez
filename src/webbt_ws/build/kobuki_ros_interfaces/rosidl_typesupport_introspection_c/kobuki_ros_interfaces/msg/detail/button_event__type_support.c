// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kobuki_ros_interfaces:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kobuki_ros_interfaces/msg/detail/button_event__rosidl_typesupport_introspection_c.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kobuki_ros_interfaces/msg/detail/button_event__functions.h"
#include "kobuki_ros_interfaces/msg/detail/button_event__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kobuki_ros_interfaces__msg__ButtonEvent__init(message_memory);
}

void kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_fini_function(void * message_memory)
{
  kobuki_ros_interfaces__msg__ButtonEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_member_array[2] = {
  {
    "button",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__ButtonEvent, button),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kobuki_ros_interfaces__msg__ButtonEvent, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_members = {
  "kobuki_ros_interfaces__msg",  // message namespace
  "ButtonEvent",  // message name
  2,  // number of fields
  sizeof(kobuki_ros_interfaces__msg__ButtonEvent),
  kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_member_array,  // message members
  kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_type_support_handle = {
  0,
  &kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kobuki_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kobuki_ros_interfaces, msg, ButtonEvent)() {
  if (!kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_type_support_handle.typesupport_identifier) {
    kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kobuki_ros_interfaces__msg__ButtonEvent__rosidl_typesupport_introspection_c__ButtonEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
