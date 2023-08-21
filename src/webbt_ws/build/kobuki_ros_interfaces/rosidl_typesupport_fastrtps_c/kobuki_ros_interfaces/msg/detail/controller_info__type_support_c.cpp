// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kobuki_ros_interfaces:msg/ControllerInfo.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/controller_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kobuki_ros_interfaces/msg/detail/controller_info__struct.h"
#include "kobuki_ros_interfaces/msg/detail/controller_info__functions.h"
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


using _ControllerInfo__ros_msg_type = kobuki_ros_interfaces__msg__ControllerInfo;

static bool _ControllerInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControllerInfo__ros_msg_type * ros_message = static_cast<const _ControllerInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: p_gain
  {
    cdr << ros_message->p_gain;
  }

  // Field name: i_gain
  {
    cdr << ros_message->i_gain;
  }

  // Field name: d_gain
  {
    cdr << ros_message->d_gain;
  }

  return true;
}

static bool _ControllerInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControllerInfo__ros_msg_type * ros_message = static_cast<_ControllerInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: p_gain
  {
    cdr >> ros_message->p_gain;
  }

  // Field name: i_gain
  {
    cdr >> ros_message->i_gain;
  }

  // Field name: d_gain
  {
    cdr >> ros_message->d_gain;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t get_serialized_size_kobuki_ros_interfaces__msg__ControllerInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerInfo__ros_msg_type * ros_message = static_cast<const _ControllerInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_gain
  {
    size_t item_size = sizeof(ros_message->p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_gain
  {
    size_t item_size = sizeof(ros_message->i_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_gain
  {
    size_t item_size = sizeof(ros_message->d_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControllerInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kobuki_ros_interfaces__msg__ControllerInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t max_serialized_size_kobuki_ros_interfaces__msg__ControllerInfo(
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

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: p_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: i_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: d_gain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ControllerInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kobuki_ros_interfaces__msg__ControllerInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerInfo = {
  "kobuki_ros_interfaces::msg",
  "ControllerInfo",
  _ControllerInfo__cdr_serialize,
  _ControllerInfo__cdr_deserialize,
  _ControllerInfo__get_serialized_size,
  _ControllerInfo__max_serialized_size
};

static rosidl_message_type_support_t _ControllerInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, msg, ControllerInfo)() {
  return &_ControllerInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
