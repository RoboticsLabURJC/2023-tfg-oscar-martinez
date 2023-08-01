// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kobuki_ros_interfaces:action/AutoDocking.idl
// generated code does not contain a copyright notice
#include "kobuki_ros_interfaces/action/detail/auto_docking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kobuki_ros_interfaces__action__AutoDocking_Goal__init(kobuki_ros_interfaces__action__AutoDocking_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_Goal__fini(kobuki_ros_interfaces__action__AutoDocking_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
kobuki_ros_interfaces__action__AutoDocking_Goal__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Goal * lhs, const kobuki_ros_interfaces__action__AutoDocking_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_Goal__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Goal * input,
  kobuki_ros_interfaces__action__AutoDocking_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_Goal *
kobuki_ros_interfaces__action__AutoDocking_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Goal * msg = (kobuki_ros_interfaces__action__AutoDocking_Goal *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_Goal));
  bool success = kobuki_ros_interfaces__action__AutoDocking_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_Goal__destroy(kobuki_ros_interfaces__action__AutoDocking_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Goal * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_Goal *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_Goal__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_Goal__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence *
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_Goal * data =
      (kobuki_ros_interfaces__action__AutoDocking_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_Result__init(kobuki_ros_interfaces__action__AutoDocking_Result * msg)
{
  if (!msg) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    kobuki_ros_interfaces__action__AutoDocking_Result__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_Result__fini(kobuki_ros_interfaces__action__AutoDocking_Result * msg)
{
  if (!msg) {
    return;
  }
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
kobuki_ros_interfaces__action__AutoDocking_Result__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Result * lhs, const kobuki_ros_interfaces__action__AutoDocking_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_Result__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Result * input,
  kobuki_ros_interfaces__action__AutoDocking_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_Result *
kobuki_ros_interfaces__action__AutoDocking_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Result * msg = (kobuki_ros_interfaces__action__AutoDocking_Result *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_Result));
  bool success = kobuki_ros_interfaces__action__AutoDocking_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_Result__destroy(kobuki_ros_interfaces__action__AutoDocking_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Result * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_Result *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_Result__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_Result__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_Result__Sequence *
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_Result__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_Result__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_Result * data =
      (kobuki_ros_interfaces__action__AutoDocking_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// Member `text`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__init(kobuki_ros_interfaces__action__AutoDocking_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(kobuki_ros_interfaces__action__AutoDocking_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
}

bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Feedback * lhs, const kobuki_ros_interfaces__action__AutoDocking_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Feedback * input,
  kobuki_ros_interfaces__action__AutoDocking_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_Feedback *
kobuki_ros_interfaces__action__AutoDocking_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Feedback * msg = (kobuki_ros_interfaces__action__AutoDocking_Feedback *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_Feedback));
  bool success = kobuki_ros_interfaces__action__AutoDocking_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_Feedback__destroy(kobuki_ros_interfaces__action__AutoDocking_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Feedback * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_Feedback *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence *
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_Feedback * data =
      (kobuki_ros_interfaces__action__AutoDocking_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!kobuki_ros_interfaces__action__AutoDocking_Goal__init(&msg->goal)) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  kobuki_ros_interfaces__action__AutoDocking_Goal__fini(&msg->goal);
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!kobuki_ros_interfaces__action__AutoDocking_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!kobuki_ros_interfaces__action__AutoDocking_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg = (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request));
  bool success = kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request * data =
      (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg = (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response));
  bool success = kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence *
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response * data =
      (kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_GetResult_Request *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg = (kobuki_ros_interfaces__action__AutoDocking_GetResult_Request *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request));
  bool success = kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_GetResult_Request *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Request * data =
      (kobuki_ros_interfaces__action__AutoDocking_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!kobuki_ros_interfaces__action__AutoDocking_Result__init(&msg->result)) {
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  kobuki_ros_interfaces__action__AutoDocking_Result__fini(&msg->result);
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!kobuki_ros_interfaces__action__AutoDocking_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!kobuki_ros_interfaces__action__AutoDocking_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_GetResult_Response *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg = (kobuki_ros_interfaces__action__AutoDocking_GetResult_Response *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response));
  bool success = kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_GetResult_Response *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence *
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_GetResult_Response * data =
      (kobuki_ros_interfaces__action__AutoDocking_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "kobuki_ros_interfaces/action/detail/auto_docking__functions.h"

bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!kobuki_ros_interfaces__action__AutoDocking_Feedback__init(&msg->feedback)) {
    kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  kobuki_ros_interfaces__action__AutoDocking_Feedback__fini(&msg->feedback);
}

bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__are_equal(const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * lhs, const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!kobuki_ros_interfaces__action__AutoDocking_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__copy(
  const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * input,
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!kobuki_ros_interfaces__action__AutoDocking_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage *
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg = (kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage));
  bool success = kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__destroy(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__init(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * data = NULL;

  if (size) {
    data = (kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage *)allocator.zero_allocate(size, sizeof(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(&data[i - 1]);
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
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__fini(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array)
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
      kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(&array->data[i]);
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

kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence *
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array = (kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence *)allocator.allocate(sizeof(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__destroy(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__are_equal(const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * lhs, const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence__copy(
  const kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * input,
  kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage * data =
      (kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kobuki_ros_interfaces__action__AutoDocking_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
