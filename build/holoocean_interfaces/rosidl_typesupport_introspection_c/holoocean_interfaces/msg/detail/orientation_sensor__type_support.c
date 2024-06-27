// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from holoocean_interfaces:msg/OrientationSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "holoocean_interfaces/msg/detail/orientation_sensor__rosidl_typesupport_introspection_c.h"
#include "holoocean_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "holoocean_interfaces/msg/detail/orientation_sensor__functions.h"
#include "holoocean_interfaces/msg/detail/orientation_sensor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  holoocean_interfaces__msg__OrientationSensor__init(message_memory);
}

void holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_fini_function(void * message_memory)
{
  holoocean_interfaces__msg__OrientationSensor__fini(message_memory);
}

size_t holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__size_function__OrientationSensor__matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__get_const_function__OrientationSensor__matrix(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__get_function__OrientationSensor__matrix(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__fetch_function__OrientationSensor__matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__get_const_function__OrientationSensor__matrix(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__assign_function__OrientationSensor__matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__get_function__OrientationSensor__matrix(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_member_array[2] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__OrientationSensor, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__OrientationSensor, matrix),  // bytes offset in struct
    NULL,  // default value
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__size_function__OrientationSensor__matrix,  // size() function pointer
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__get_const_function__OrientationSensor__matrix,  // get_const(index) function pointer
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__get_function__OrientationSensor__matrix,  // get(index) function pointer
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__fetch_function__OrientationSensor__matrix,  // fetch(index, &value) function pointer
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__assign_function__OrientationSensor__matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_members = {
  "holoocean_interfaces__msg",  // message namespace
  "OrientationSensor",  // message name
  2,  // number of fields
  sizeof(holoocean_interfaces__msg__OrientationSensor),
  holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_member_array,  // message members
  holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_type_support_handle = {
  0,
  &holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_holoocean_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, holoocean_interfaces, msg, OrientationSensor)() {
  if (!holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_type_support_handle.typesupport_identifier) {
    holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &holoocean_interfaces__msg__OrientationSensor__rosidl_typesupport_introspection_c__OrientationSensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif