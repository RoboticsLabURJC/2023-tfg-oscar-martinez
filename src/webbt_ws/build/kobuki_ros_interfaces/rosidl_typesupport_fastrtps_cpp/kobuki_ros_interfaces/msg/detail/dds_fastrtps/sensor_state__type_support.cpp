// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/sensor_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kobuki_ros_interfaces/msg/detail/sensor_state__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace kobuki_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
cdr_serialize(
  const kobuki_ros_interfaces::msg::SensorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: time_stamp
  cdr << ros_message.time_stamp;
  // Member: bumper
  cdr << ros_message.bumper;
  // Member: wheel_drop
  cdr << ros_message.wheel_drop;
  // Member: cliff
  cdr << ros_message.cliff;
  // Member: left_encoder
  cdr << ros_message.left_encoder;
  // Member: right_encoder
  cdr << ros_message.right_encoder;
  // Member: left_pwm
  cdr << ros_message.left_pwm;
  // Member: right_pwm
  cdr << ros_message.right_pwm;
  // Member: buttons
  cdr << ros_message.buttons;
  // Member: charger
  cdr << ros_message.charger;
  // Member: battery
  cdr << ros_message.battery;
  // Member: bottom
  {
    cdr << ros_message.bottom;
  }
  // Member: current
  {
    cdr << ros_message.current;
  }
  // Member: over_current
  cdr << ros_message.over_current;
  // Member: digital_input
  cdr << ros_message.digital_input;
  // Member: analog_input
  {
    cdr << ros_message.analog_input;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kobuki_ros_interfaces::msg::SensorState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: time_stamp
  cdr >> ros_message.time_stamp;

  // Member: bumper
  cdr >> ros_message.bumper;

  // Member: wheel_drop
  cdr >> ros_message.wheel_drop;

  // Member: cliff
  cdr >> ros_message.cliff;

  // Member: left_encoder
  cdr >> ros_message.left_encoder;

  // Member: right_encoder
  cdr >> ros_message.right_encoder;

  // Member: left_pwm
  cdr >> ros_message.left_pwm;

  // Member: right_pwm
  cdr >> ros_message.right_pwm;

  // Member: buttons
  cdr >> ros_message.buttons;

  // Member: charger
  cdr >> ros_message.charger;

  // Member: battery
  cdr >> ros_message.battery;

  // Member: bottom
  {
    cdr >> ros_message.bottom;
  }

  // Member: current
  {
    cdr >> ros_message.current;
  }

  // Member: over_current
  cdr >> ros_message.over_current;

  // Member: digital_input
  cdr >> ros_message.digital_input;

  // Member: analog_input
  {
    cdr >> ros_message.analog_input;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
get_serialized_size(
  const kobuki_ros_interfaces::msg::SensorState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: time_stamp
  {
    size_t item_size = sizeof(ros_message.time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bumper
  {
    size_t item_size = sizeof(ros_message.bumper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_drop
  {
    size_t item_size = sizeof(ros_message.wheel_drop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cliff
  {
    size_t item_size = sizeof(ros_message.cliff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_encoder
  {
    size_t item_size = sizeof(ros_message.left_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_encoder
  {
    size_t item_size = sizeof(ros_message.right_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_pwm
  {
    size_t item_size = sizeof(ros_message.left_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_pwm
  {
    size_t item_size = sizeof(ros_message.right_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: buttons
  {
    size_t item_size = sizeof(ros_message.buttons);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: charger
  {
    size_t item_size = sizeof(ros_message.charger);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery
  {
    size_t item_size = sizeof(ros_message.battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bottom
  {
    size_t array_size = ros_message.bottom.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bottom[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current
  {
    size_t array_size = ros_message.current.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.current[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: over_current
  {
    size_t item_size = sizeof(ros_message.over_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: digital_input
  {
    size_t item_size = sizeof(ros_message.digital_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_input
  {
    size_t array_size = ros_message.analog_input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.analog_input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kobuki_ros_interfaces
max_serialized_size_SensorState(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: time_stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: bumper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wheel_drop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cliff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_encoder
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_encoder
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_pwm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_pwm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: buttons
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: charger
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bottom
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: current
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: over_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: digital_input
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: analog_input
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SensorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kobuki_ros_interfaces::msg::SensorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kobuki_ros_interfaces::msg::SensorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kobuki_ros_interfaces::msg::SensorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorState__callbacks = {
  "kobuki_ros_interfaces::msg",
  "SensorState",
  _SensorState__cdr_serialize,
  _SensorState__cdr_deserialize,
  _SensorState__get_serialized_size,
  _SensorState__max_serialized_size
};

static rosidl_message_type_support_t _SensorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorState__callbacks,
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
get_message_type_support_handle<kobuki_ros_interfaces::msg::SensorState>()
{
  return &kobuki_ros_interfaces::msg::typesupport_fastrtps_cpp::_SensorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kobuki_ros_interfaces, msg, SensorState)() {
  return &kobuki_ros_interfaces::msg::typesupport_fastrtps_cpp::_SensorState__handle;
}

#ifdef __cplusplus
}
#endif
