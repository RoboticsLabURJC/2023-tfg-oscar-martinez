// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:msg/SensorState.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/sensor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bottom`
// Member `current`
// Member `analog_input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
kobuki_ros_interfaces__msg__SensorState__init(kobuki_ros_interfaces__msg__SensorState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kobuki_ros_interfaces__msg__SensorState__fini(msg);
    return false;
  }
  // time_stamp
  // bumper
  // wheel_drop
  // cliff
  // left_encoder
  // right_encoder
  // left_pwm
  // right_pwm
  // buttons
  // charger
  // battery
  // bottom
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->bottom, 0)) {
    kobuki_ros_interfaces__msg__SensorState__fini(msg);
    return false;
  }
  // current
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->current, 0)) {
    kobuki_ros_interfaces__msg__SensorState__fini(msg);
    return false;
  }
  // over_current
  // digital_input
  // analog_input
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->analog_input, 0)) {
    kobuki_ros_interfaces__msg__SensorState__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__msg__SensorState__fini(kobuki_ros_interfaces__msg__SensorState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // bumper
  // wheel_drop
  // cliff
  // left_encoder
  // right_encoder
  // left_pwm
  // right_pwm
  // buttons
  // charger
  // battery
  // bottom
  rosidl_runtime_c__uint16__Sequence__fini(&msg->bottom);
  // current
  rosidl_runtime_c__uint8__Sequence__fini(&msg->current);
  // over_current
  // digital_input
  // analog_input
  rosidl_runtime_c__uint16__Sequence__fini(&msg->analog_input);
}

bool
kobuki_ros_interfaces__msg__SensorState__are_equal(const kobuki_ros_interfaces__msg__SensorState * lhs, const kobuki_ros_interfaces__msg__SensorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // bumper
  if (lhs->bumper != rhs->bumper) {
    return false;
  }
  // wheel_drop
  if (lhs->wheel_drop != rhs->wheel_drop) {
    return false;
  }
  // cliff
  if (lhs->cliff != rhs->cliff) {
    return false;
  }
  // left_encoder
  if (lhs->left_encoder != rhs->left_encoder) {
    return false;
  }
  // right_encoder
  if (lhs->right_encoder != rhs->right_encoder) {
    return false;
  }
  // left_pwm
  if (lhs->left_pwm != rhs->left_pwm) {
    return false;
  }
  // right_pwm
  if (lhs->right_pwm != rhs->right_pwm) {
    return false;
  }
  // buttons
  if (lhs->buttons != rhs->buttons) {
    return false;
  }
  // charger
  if (lhs->charger != rhs->charger) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // bottom
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->bottom), &(rhs->bottom)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  // over_current
  if (lhs->over_current != rhs->over_current) {
    return false;
  }
  // digital_input
  if (lhs->digital_input != rhs->digital_input) {
    return false;
  }
  // analog_input
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->analog_input), &(rhs->analog_input)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__SensorState__copy(
  const kobuki_ros_interfaces__msg__SensorState * input,
  kobuki_ros_interfaces__msg__SensorState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // bumper
  output->bumper = input->bumper;
  // wheel_drop
  output->wheel_drop = input->wheel_drop;
  // cliff
  output->cliff = input->cliff;
  // left_encoder
  output->left_encoder = input->left_encoder;
  // right_encoder
  output->right_encoder = input->right_encoder;
  // left_pwm
  output->left_pwm = input->left_pwm;
  // right_pwm
  output->right_pwm = input->right_pwm;
  // buttons
  output->buttons = input->buttons;
  // charger
  output->charger = input->charger;
  // battery
  output->battery = input->battery;
  // bottom
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->bottom), &(output->bottom)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  // over_current
  output->over_current = input->over_current;
  // digital_input
  output->digital_input = input->digital_input;
  // analog_input
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->analog_input), &(output->analog_input)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__msg__SensorState *
kobuki_ros_interfaces__msg__SensorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__SensorState * msg = (kobuki_ros_interfaces__msg__SensorState *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__SensorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__msg__SensorState));
  bool success = kobuki_ros_interfaces__msg__SensorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__msg__SensorState__destroy(kobuki_ros_interfaces__msg__SensorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__msg__SensorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__msg__SensorState__Sequence__init(kobuki_ros_interfaces__msg__SensorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__SensorState * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__msg__SensorState *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__msg__SensorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__msg__SensorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__msg__SensorState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kobuki_ros_interfaces__msg__SensorState__Sequence__fini(kobuki_ros_interfaces__msg__SensorState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kobuki_ros_interfaces__msg__SensorState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kobuki_ros_interfaces__msg__SensorState__Sequence *
kobuki_ros_interfaces__msg__SensorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__SensorState__Sequence * array = (kobuki_ros_interfaces__msg__SensorState__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__SensorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__msg__SensorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__msg__SensorState__Sequence__destroy(kobuki_ros_interfaces__msg__SensorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__msg__SensorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__msg__SensorState__Sequence__are_equal(const kobuki_ros_interfaces__msg__SensorState__Sequence * lhs, const kobuki_ros_interfaces__msg__SensorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__msg__SensorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__SensorState__Sequence__copy(
  const kobuki_ros_interfaces__msg__SensorState__Sequence * input,
  kobuki_ros_interfaces__msg__SensorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__msg__SensorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__msg__SensorState * data =
      (kobuki_ros_interfaces__msg__SensorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__msg__SensorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__msg__SensorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__msg__SensorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
