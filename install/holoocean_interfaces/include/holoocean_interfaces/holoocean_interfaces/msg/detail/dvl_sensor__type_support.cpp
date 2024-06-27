// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from holoocean_interfaces:msg/DVLSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "holoocean_interfaces/msg/detail/dvl_sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace holoocean_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DVLSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) holoocean_interfaces::msg::DVLSensor(_init);
}

void DVLSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<holoocean_interfaces::msg::DVLSensor *>(message_memory);
  typed_message->~DVLSensor();
}

size_t size_function__DVLSensor__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__DVLSensor__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__DVLSensor__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__DVLSensor__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DVLSensor__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DVLSensor__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DVLSensor__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__DVLSensor__range(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__DVLSensor__range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__DVLSensor__range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__DVLSensor__range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DVLSensor__range(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DVLSensor__range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DVLSensor__range(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DVLSensor_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::DVLSensor, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::DVLSensor, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__DVLSensor__velocity,  // size() function pointer
    get_const_function__DVLSensor__velocity,  // get_const(index) function pointer
    get_function__DVLSensor__velocity,  // get(index) function pointer
    fetch_function__DVLSensor__velocity,  // fetch(index, &value) function pointer
    assign_function__DVLSensor__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::DVLSensor, range),  // bytes offset in struct
    nullptr,  // default value
    size_function__DVLSensor__range,  // size() function pointer
    get_const_function__DVLSensor__range,  // get_const(index) function pointer
    get_function__DVLSensor__range,  // get(index) function pointer
    fetch_function__DVLSensor__range,  // fetch(index, &value) function pointer
    assign_function__DVLSensor__range,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DVLSensor_message_members = {
  "holoocean_interfaces::msg",  // message namespace
  "DVLSensor",  // message name
  3,  // number of fields
  sizeof(holoocean_interfaces::msg::DVLSensor),
  DVLSensor_message_member_array,  // message members
  DVLSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  DVLSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DVLSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DVLSensor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace holoocean_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<holoocean_interfaces::msg::DVLSensor>()
{
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::DVLSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, holoocean_interfaces, msg, DVLSensor)() {
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::DVLSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
