// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:msg/ScanAngle.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/msg/detail/scan_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
kobuki_ros_interfaces__msg__ScanAngle__init(kobuki_ros_interfaces__msg__ScanAngle * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kobuki_ros_interfaces__msg__ScanAngle__fini(msg);
    return false;
  }
  // scan_angle
  return true;
}

void
kobuki_ros_interfaces__msg__ScanAngle__fini(kobuki_ros_interfaces__msg__ScanAngle * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // scan_angle
}

bool
kobuki_ros_interfaces__msg__ScanAngle__are_equal(const kobuki_ros_interfaces__msg__ScanAngle * lhs, const kobuki_ros_interfaces__msg__ScanAngle * rhs)
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
  // scan_angle
  if (lhs->scan_angle != rhs->scan_angle) {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__ScanAngle__copy(
  const kobuki_ros_interfaces__msg__ScanAngle * input,
  kobuki_ros_interfaces__msg__ScanAngle * output)
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
  // scan_angle
  output->scan_angle = input->scan_angle;
  return true;
}

kobuki_ros_interfaces__msg__ScanAngle *
kobuki_ros_interfaces__msg__ScanAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__ScanAngle * msg = (kobuki_ros_interfaces__msg__ScanAngle *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__ScanAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__msg__ScanAngle));
  bool success = kobuki_ros_interfaces__msg__ScanAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__msg__ScanAngle__destroy(kobuki_ros_interfaces__msg__ScanAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__msg__ScanAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__msg__ScanAngle__Sequence__init(kobuki_ros_interfaces__msg__ScanAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__ScanAngle * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__msg__ScanAngle *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__msg__ScanAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__msg__ScanAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__msg__ScanAngle__fini(&data[i - 1]);
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
kobuki_ros_interfaces__msg__ScanAngle__Sequence__fini(kobuki_ros_interfaces__msg__ScanAngle__Sequence * array)
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
      kobuki_ros_interfaces__msg__ScanAngle__fini(&array->data[i]);
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

kobuki_ros_interfaces__msg__ScanAngle__Sequence *
kobuki_ros_interfaces__msg__ScanAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__msg__ScanAngle__Sequence * array = (kobuki_ros_interfaces__msg__ScanAngle__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__msg__ScanAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__msg__ScanAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__msg__ScanAngle__Sequence__destroy(kobuki_ros_interfaces__msg__ScanAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__msg__ScanAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__msg__ScanAngle__Sequence__are_equal(const kobuki_ros_interfaces__msg__ScanAngle__Sequence * lhs, const kobuki_ros_interfaces__msg__ScanAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__msg__ScanAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__msg__ScanAngle__Sequence__copy(
  const kobuki_ros_interfaces__msg__ScanAngle__Sequence * input,
  kobuki_ros_interfaces__msg__ScanAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__msg__ScanAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__msg__ScanAngle * data =
      (kobuki_ros_interfaces__msg__ScanAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__msg__ScanAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__msg__ScanAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__msg__ScanAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
