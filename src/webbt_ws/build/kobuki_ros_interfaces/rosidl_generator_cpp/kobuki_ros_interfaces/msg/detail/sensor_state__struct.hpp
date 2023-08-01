// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kobuki_ros_interfaces__msg__SensorState __attribute__((deprecated))
#else
# define DEPRECATED__kobuki_ros_interfaces__msg__SensorState __declspec(deprecated)
#endif

namespace kobuki_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorState_
{
  using Type = SensorState_<ContainerAllocator>;

  explicit SensorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0;
      this->bumper = 0;
      this->wheel_drop = 0;
      this->cliff = 0;
      this->left_encoder = 0;
      this->right_encoder = 0;
      this->left_pwm = 0;
      this->right_pwm = 0;
      this->buttons = 0;
      this->charger = 0;
      this->battery = 0;
      this->over_current = 0;
      this->digital_input = 0;
    }
  }

  explicit SensorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0;
      this->bumper = 0;
      this->wheel_drop = 0;
      this->cliff = 0;
      this->left_encoder = 0;
      this->right_encoder = 0;
      this->left_pwm = 0;
      this->right_pwm = 0;
      this->buttons = 0;
      this->charger = 0;
      this->battery = 0;
      this->over_current = 0;
      this->digital_input = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint16_t;
  _time_stamp_type time_stamp;
  using _bumper_type =
    uint8_t;
  _bumper_type bumper;
  using _wheel_drop_type =
    uint8_t;
  _wheel_drop_type wheel_drop;
  using _cliff_type =
    uint8_t;
  _cliff_type cliff;
  using _left_encoder_type =
    uint16_t;
  _left_encoder_type left_encoder;
  using _right_encoder_type =
    uint16_t;
  _right_encoder_type right_encoder;
  using _left_pwm_type =
    int8_t;
  _left_pwm_type left_pwm;
  using _right_pwm_type =
    int8_t;
  _right_pwm_type right_pwm;
  using _buttons_type =
    uint8_t;
  _buttons_type buttons;
  using _charger_type =
    uint8_t;
  _charger_type charger;
  using _battery_type =
    uint8_t;
  _battery_type battery;
  using _bottom_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _bottom_type bottom;
  using _current_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _current_type current;
  using _over_current_type =
    uint8_t;
  _over_current_type over_current;
  using _digital_input_type =
    uint16_t;
  _digital_input_type digital_input;
  using _analog_input_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _analog_input_type analog_input;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint16_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__bumper(
    const uint8_t & _arg)
  {
    this->bumper = _arg;
    return *this;
  }
  Type & set__wheel_drop(
    const uint8_t & _arg)
  {
    this->wheel_drop = _arg;
    return *this;
  }
  Type & set__cliff(
    const uint8_t & _arg)
  {
    this->cliff = _arg;
    return *this;
  }
  Type & set__left_encoder(
    const uint16_t & _arg)
  {
    this->left_encoder = _arg;
    return *this;
  }
  Type & set__right_encoder(
    const uint16_t & _arg)
  {
    this->right_encoder = _arg;
    return *this;
  }
  Type & set__left_pwm(
    const int8_t & _arg)
  {
    this->left_pwm = _arg;
    return *this;
  }
  Type & set__right_pwm(
    const int8_t & _arg)
  {
    this->right_pwm = _arg;
    return *this;
  }
  Type & set__buttons(
    const uint8_t & _arg)
  {
    this->buttons = _arg;
    return *this;
  }
  Type & set__charger(
    const uint8_t & _arg)
  {
    this->charger = _arg;
    return *this;
  }
  Type & set__battery(
    const uint8_t & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__bottom(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->bottom = _arg;
    return *this;
  }
  Type & set__current(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__over_current(
    const uint8_t & _arg)
  {
    this->over_current = _arg;
    return *this;
  }
  Type & set__digital_input(
    const uint16_t & _arg)
  {
    this->digital_input = _arg;
    return *this;
  }
  Type & set__analog_input(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->analog_input = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BUMPER_RIGHT =
    1u;
  static constexpr uint8_t BUMPER_CENTRE =
    2u;
  static constexpr uint8_t BUMPER_LEFT =
    4u;
  static constexpr uint8_t WHEEL_DROP_RIGHT =
    1u;
  static constexpr uint8_t WHEEL_DROP_LEFT =
    2u;
  static constexpr uint8_t CLIFF_RIGHT =
    1u;
  static constexpr uint8_t CLIFF_CENTRE =
    2u;
  static constexpr uint8_t CLIFF_LEFT =
    4u;
  static constexpr uint8_t BUTTON0 =
    1u;
  static constexpr uint8_t BUTTON1 =
    2u;
  static constexpr uint8_t BUTTON2 =
    4u;
  static constexpr uint8_t DISCHARGING =
    0u;
  static constexpr uint8_t DOCKING_CHARGED =
    2u;
  static constexpr uint8_t DOCKING_CHARGING =
    6u;
  static constexpr uint8_t ADAPTER_CHARGED =
    18u;
  static constexpr uint8_t ADAPTER_CHARGING =
    22u;
  static constexpr uint8_t OVER_CURRENT_LEFT_WHEEL =
    1u;
  static constexpr uint8_t OVER_CURRENT_RIGHT_WHEEL =
    2u;
  static constexpr uint8_t OVER_CURRENT_BOTH_WHEELS =
    3u;
  static constexpr uint8_t DIGITAL_INPUT0 =
    1u;
  static constexpr uint8_t DIGITAL_INPUT1 =
    2u;
  static constexpr uint8_t DIGITAL_INPUT2 =
    4u;
  static constexpr uint8_t DIGITAL_INPUT3 =
    8u;
  static constexpr uint8_t DB25_TEST_BOARD_CONNECTED =
    64u;

  // pointer types
  using RawPtr =
    kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kobuki_ros_interfaces__msg__SensorState
    std::shared_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kobuki_ros_interfaces__msg__SensorState
    std::shared_ptr<kobuki_ros_interfaces::msg::SensorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->bumper != other.bumper) {
      return false;
    }
    if (this->wheel_drop != other.wheel_drop) {
      return false;
    }
    if (this->cliff != other.cliff) {
      return false;
    }
    if (this->left_encoder != other.left_encoder) {
      return false;
    }
    if (this->right_encoder != other.right_encoder) {
      return false;
    }
    if (this->left_pwm != other.left_pwm) {
      return false;
    }
    if (this->right_pwm != other.right_pwm) {
      return false;
    }
    if (this->buttons != other.buttons) {
      return false;
    }
    if (this->charger != other.charger) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->bottom != other.bottom) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->over_current != other.over_current) {
      return false;
    }
    if (this->digital_input != other.digital_input) {
      return false;
    }
    if (this->analog_input != other.analog_input) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorState_

// alias to use template instance with default allocator
using SensorState =
  kobuki_ros_interfaces::msg::SensorState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::BUMPER_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::BUMPER_CENTRE;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::BUMPER_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::WHEEL_DROP_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::WHEEL_DROP_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::CLIFF_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::CLIFF_CENTRE;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::CLIFF_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::BUTTON0;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::BUTTON1;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::BUTTON2;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DISCHARGING;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DOCKING_CHARGED;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DOCKING_CHARGING;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::ADAPTER_CHARGED;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::ADAPTER_CHARGING;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::OVER_CURRENT_LEFT_WHEEL;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::OVER_CURRENT_RIGHT_WHEEL;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::OVER_CURRENT_BOTH_WHEELS;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DIGITAL_INPUT0;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DIGITAL_INPUT1;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DIGITAL_INPUT2;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DIGITAL_INPUT3;
template<typename ContainerAllocator>
constexpr uint8_t SensorState_<ContainerAllocator>::DB25_TEST_BOARD_CONNECTED;

}  // namespace msg

}  // namespace kobuki_ros_interfaces

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__SENSOR_STATE__STRUCT_HPP_
