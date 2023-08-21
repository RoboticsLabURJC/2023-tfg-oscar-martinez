// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kobuki_ros_interfaces:msg/VersionInfo.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/version_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kobuki_ros_interfaces/msg/detail/version_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace kobuki_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
cdr_serialize(
  const kobuki_ros_interfaces::msg::VersionInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hardware
  cdr << ros_message.hardware;
  // Member: firmware
  cdr << ros_message.firmware;
  // Member: software
  cdr << ros_message.software;
  // Member: udid
  {
    cdr << ros_message.udid;
  }
  // Member: features
  cdr << ros_message.features;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kobuki_ros_interfaces::msg::VersionInfo & ros_message)
{
  // Member: hardware
  cdr >> ros_message.hardware;

  // Member: firmware
  cdr >> ros_message.firmware;

  // Member: software
  cdr >> ros_message.software;

  // Member: udid
  {
    cdr >> ros_message.udid;
  }

  // Member: features
  cdr >> ros_message.features;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
get_serialized_size(
  const kobuki_ros_interfaces::msg::VersionInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hardware
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hardware.size() + 1);
  // Member: firmware
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware.size() + 1);
  // Member: software
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.software.size() + 1);
  // Member: udid
  {
    size_t array_size = ros_message.udid.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.udid[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: features
  {
    size_t item_size = sizeof(ros_message.features);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
max_serialized_size_VersionInfo(
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


  // Member: hardware
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

  // Member: firmware
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

  // Member: software
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

  // Member: udid
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: features
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VersionInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kobuki_ros_interfaces::msg::VersionInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VersionInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kobuki_ros_interfaces::msg::VersionInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VersionInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kobuki_ros_interfaces::msg::VersionInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VersionInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VersionInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VersionInfo__callbacks = {
  "kobuki_ros_interfaces::msg",
  "VersionInfo",
  _VersionInfo__cdr_serialize,
  _VersionInfo__cdr_deserialize,
  _VersionInfo__get_serialized_size,
  _VersionInfo__max_serialized_size
};

static rosidl_message_type_support_t _VersionInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VersionInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kobuki_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kobuki_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<kobuki_ros_interfaces::msg::VersionInfo>()
{
  return &kobuki_ros_interfaces::msg::typesupport_fastrtps_cpp::_VersionInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kobuki_ros_interfaces, msg, VersionInfo)() {
  return &kobuki_ros_interfaces::msg::typesupport_fastrtps_cpp::_VersionInfo__handle;
}

#ifdef __cplusplus
}
#endif
