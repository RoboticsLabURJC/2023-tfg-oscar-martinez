// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kobuki_ros_interfaces:msg/CliffEvent.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/cliff_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kobuki_ros_interfaces/msg/detail/cliff_event__struct.h"
#include "kobuki_ros_interfaces/msg/detail/cliff_event__functions.h"
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


// forward declare type support functions


using _CliffEvent__ros_msg_type = kobuki_ros_interfaces__msg__CliffEvent;

static bool _CliffEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CliffEvent__ros_msg_type * ros_message = static_cast<const _CliffEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor
  {
    cdr << ros_message->sensor;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: bottom
  {
    cdr << ros_message->bottom;
  }

  return true;
}

static bool _CliffEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CliffEvent__ros_msg_type * ros_message = static_cast<_CliffEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor
  {
    cdr >> ros_message->sensor;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: bottom
  {
    cdr >> ros_message->bottom;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t get_serialized_size_kobuki_ros_interfaces__msg__CliffEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CliffEvent__ros_msg_type * ros_message = static_cast<const _CliffEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor
  {
    size_t item_size = sizeof(ros_message->sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bottom
  {
    size_t item_size = sizeof(ros_message->bottom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CliffEvent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kobuki_ros_interfaces__msg__CliffEvent(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t max_serialized_size_kobuki_ros_interfaces__msg__CliffEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bottom
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CliffEvent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kobuki_ros_interfaces__msg__CliffEvent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CliffEvent = {
  "kobuki_ros_interfaces::msg",
  "CliffEvent",
  _CliffEvent__cdr_serialize,
  _CliffEvent__cdr_deserialize,
  _CliffEvent__get_serialized_size,
  _CliffEvent__max_serialized_size
};

static rosidl_message_type_support_t _CliffEvent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CliffEvent,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, msg, CliffEvent)() {
  return &_CliffEvent__type_support;
}

#if defined(__cplusplus)
}
#endif