// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/version_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kobuki_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kobuki_ros_interfaces/msg/detail/version_info__struct.h"
#include "kobuki_ros_interfaces/msg/detail/version_info__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // udid
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // udid
#include "rosidl_runtime_c/string.h"  // firmware, hardware, software
#include "rosidl_runtime_c/string_functions.h"  // firmware, hardware, software

// forward declare type support functions


using _VersionInfo__ros_msg_type = kobuki_ros_interfaces__msg__VersionInfo;

static bool _VersionInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VersionInfo__ros_msg_type * ros_message = static_cast<const _VersionInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: hardware
  {
    const rosidl_runtime_c__String * str = &ros_message->hardware;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: firmware
  {
    const rosidl_runtime_c__String * str = &ros_message->firmware;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: software
  {
    const rosidl_runtime_c__String * str = &ros_message->software;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: udid
  {
    size_t size = ros_message->udid.size;
    auto array_ptr = ros_message->udid.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: features
  {
    cdr << ros_message->features;
  }

  return true;
}

static bool _VersionInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VersionInfo__ros_msg_type * ros_message = static_cast<_VersionInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: hardware
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hardware.data) {
      rosidl_runtime_c__String__init(&ros_message->hardware);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hardware,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hardware'\n");
      return false;
    }
  }

  // Field name: firmware
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->firmware.data) {
      rosidl_runtime_c__String__init(&ros_message->firmware);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->firmware,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'firmware'\n");
      return false;
    }
  }

  // Field name: software
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->software.data) {
      rosidl_runtime_c__String__init(&ros_message->software);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->software,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'software'\n");
      return false;
    }
  }

  // Field name: udid
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->udid.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->udid);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->udid, size)) {
      fprintf(stderr, "failed to create array for field 'udid'");
      return false;
    }
    auto array_ptr = ros_message->udid.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: features
  {
    cdr >> ros_message->features;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t get_serialized_size_kobuki_ros_interfaces__msg__VersionInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VersionInfo__ros_msg_type * ros_message = static_cast<const _VersionInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hardware
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hardware.size + 1);
  // field.name firmware
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->firmware.size + 1);
  // field.name software
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->software.size + 1);
  // field.name udid
  {
    size_t array_size = ros_message->udid.size;
    auto array_ptr = ros_message->udid.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name features
  {
    size_t item_size = sizeof(ros_message->features);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VersionInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kobuki_ros_interfaces__msg__VersionInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kobuki_ros_interfaces
size_t max_serialized_size_kobuki_ros_interfaces__msg__VersionInfo(
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

  // member: hardware
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: firmware
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: software
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: udid
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: features
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VersionInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_kobuki_ros_interfaces__msg__VersionInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VersionInfo = {
  "kobuki_ros_interfaces::msg",
  "VersionInfo",
  _VersionInfo__cdr_serialize,
  _VersionInfo__cdr_deserialize,
  _VersionInfo__get_serialized_size,
  _VersionInfo__max_serialized_size
};

static rosidl_message_type_support_t _VersionInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VersionInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kobuki_ros_interfaces, msg, VersionInfo)() {
  return &_VersionInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
