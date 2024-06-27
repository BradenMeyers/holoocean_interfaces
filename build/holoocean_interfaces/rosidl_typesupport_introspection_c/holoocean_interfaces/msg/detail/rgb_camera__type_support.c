// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from holoocean_interfaces:msg/RGBCamera.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "holoocean_interfaces/msg/detail/rgb_camera__rosidl_typesupport_introspection_c.h"
#include "holoocean_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "holoocean_interfaces/msg/detail/rgb_camera__functions.h"
#include "holoocean_interfaces/msg/detail/rgb_camera__struct.h"


// Include directives for member types
// Member `image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  holoocean_interfaces__msg__RGBCamera__init(message_memory);
}

void holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_fini_function(void * message_memory)
{
  holoocean_interfaces__msg__RGBCamera__fini(message_memory);
}

size_t holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__size_function__RGBCamera__image(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__get_const_function__RGBCamera__image(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__get_function__RGBCamera__image(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__fetch_function__RGBCamera__image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__get_const_function__RGBCamera__image(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__assign_function__RGBCamera__image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__get_function__RGBCamera__image(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__resize_function__RGBCamera__image(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__RGBCamera, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__RGBCamera, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__RGBCamera, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__RGBCamera, channels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__RGBCamera, image),  // bytes offset in struct
    NULL,  // default value
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__size_function__RGBCamera__image,  // size() function pointer
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__get_const_function__RGBCamera__image,  // get_const(index) function pointer
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__get_function__RGBCamera__image,  // get(index) function pointer
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__fetch_function__RGBCamera__image,  // fetch(index, &value) function pointer
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__assign_function__RGBCamera__image,  // assign(index, value) function pointer
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__resize_function__RGBCamera__image  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_members = {
  "holoocean_interfaces__msg",  // message namespace
  "RGBCamera",  // message name
  5,  // number of fields
  sizeof(holoocean_interfaces__msg__RGBCamera),
  holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_member_array,  // message members
  holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_init_function,  // function to initialize message memory (memory has to be allocated)
  holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_type_support_handle = {
  0,
  &holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_holoocean_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, holoocean_interfaces, msg, RGBCamera)() {
  if (!holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_type_support_handle.typesupport_identifier) {
    holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &holoocean_interfaces__msg__RGBCamera__rosidl_typesupport_introspection_c__RGBCamera_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
