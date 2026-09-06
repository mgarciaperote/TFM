// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from agri_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice
#include "agri_interfaces/msg/detail/robot_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `robot_id`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
agri_interfaces__msg__RobotCommand__init(agri_interfaces__msg__RobotCommand * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    agri_interfaces__msg__RobotCommand__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    agri_interfaces__msg__RobotCommand__fini(msg);
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    agri_interfaces__msg__RobotCommand__fini(msg);
    return false;
  }
  // linear_speed
  // angular_speed
  return true;
}

void
agri_interfaces__msg__RobotCommand__fini(agri_interfaces__msg__RobotCommand * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // linear_speed
  // angular_speed
}

bool
agri_interfaces__msg__RobotCommand__are_equal(const agri_interfaces__msg__RobotCommand * lhs, const agri_interfaces__msg__RobotCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // linear_speed
  if (lhs->linear_speed != rhs->linear_speed) {
    return false;
  }
  // angular_speed
  if (lhs->angular_speed != rhs->angular_speed) {
    return false;
  }
  return true;
}

bool
agri_interfaces__msg__RobotCommand__copy(
  const agri_interfaces__msg__RobotCommand * input,
  agri_interfaces__msg__RobotCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // linear_speed
  output->linear_speed = input->linear_speed;
  // angular_speed
  output->angular_speed = input->angular_speed;
  return true;
}

agri_interfaces__msg__RobotCommand *
agri_interfaces__msg__RobotCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__RobotCommand * msg = (agri_interfaces__msg__RobotCommand *)allocator.allocate(sizeof(agri_interfaces__msg__RobotCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agri_interfaces__msg__RobotCommand));
  bool success = agri_interfaces__msg__RobotCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agri_interfaces__msg__RobotCommand__destroy(agri_interfaces__msg__RobotCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agri_interfaces__msg__RobotCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agri_interfaces__msg__RobotCommand__Sequence__init(agri_interfaces__msg__RobotCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__RobotCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(agri_interfaces__msg__RobotCommand)) {
      return false;
    }
    data = (agri_interfaces__msg__RobotCommand *)allocator.zero_allocate(size, sizeof(agri_interfaces__msg__RobotCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agri_interfaces__msg__RobotCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agri_interfaces__msg__RobotCommand__fini(&data[i - 1]);
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
agri_interfaces__msg__RobotCommand__Sequence__fini(agri_interfaces__msg__RobotCommand__Sequence * array)
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
      agri_interfaces__msg__RobotCommand__fini(&array->data[i]);
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

agri_interfaces__msg__RobotCommand__Sequence *
agri_interfaces__msg__RobotCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agri_interfaces__msg__RobotCommand__Sequence * array = (agri_interfaces__msg__RobotCommand__Sequence *)allocator.allocate(sizeof(agri_interfaces__msg__RobotCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agri_interfaces__msg__RobotCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agri_interfaces__msg__RobotCommand__Sequence__destroy(agri_interfaces__msg__RobotCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agri_interfaces__msg__RobotCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agri_interfaces__msg__RobotCommand__Sequence__are_equal(const agri_interfaces__msg__RobotCommand__Sequence * lhs, const agri_interfaces__msg__RobotCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agri_interfaces__msg__RobotCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agri_interfaces__msg__RobotCommand__Sequence__copy(
  const agri_interfaces__msg__RobotCommand__Sequence * input,
  agri_interfaces__msg__RobotCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(agri_interfaces__msg__RobotCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(agri_interfaces__msg__RobotCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agri_interfaces__msg__RobotCommand * data =
      (agri_interfaces__msg__RobotCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agri_interfaces__msg__RobotCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agri_interfaces__msg__RobotCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agri_interfaces__msg__RobotCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
