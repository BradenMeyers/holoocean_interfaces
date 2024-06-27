// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from holoocean_interfaces:msg/IMUSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "holoocean_interfaces/msg/detail/imu_sensor__struct.hpp"
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

void IMUSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) holoocean_interfaces::msg::IMUSensor(_init);
}

void IMUSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<holoocean_interfaces::msg::IMUSensor *>(message_memory);
  typed_message->~IMUSensor();
}

size_t size_function__IMUSensor__acceleration(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__IMUSensor__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__IMUSensor__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMUSensor__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMUSensor__acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMUSensor__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMUSensor__acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__IMUSensor__angular_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__IMUSensor__angular_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__IMUSensor__angular_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMUSensor__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMUSensor__angular_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMUSensor__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMUSensor__angular_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__IMUSensor__acceleration_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__IMUSensor__acceleration_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__IMUSensor__acceleration_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMUSensor__acceleration_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMUSensor__acceleration_bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMUSensor__acceleration_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMUSensor__acceleration_bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__IMUSensor__angular_velocity_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__IMUSensor__angular_velocity_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__IMUSensor__angular_velocity_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__IMUSensor__angular_velocity_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__IMUSensor__angular_velocity_bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__IMUSensor__angular_velocity_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__IMUSensor__angular_velocity_bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IMUSensor_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::IMUSensor, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::IMUSensor, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMUSensor__acceleration,  // size() function pointer
    get_const_function__IMUSensor__acceleration,  // get_const(index) function pointer
    get_function__IMUSensor__acceleration,  // get(index) function pointer
    fetch_function__IMUSensor__acceleration,  // fetch(index, &value) function pointer
    assign_function__IMUSensor__acceleration,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::IMUSensor, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMUSensor__angular_velocity,  // size() function pointer
    get_const_function__IMUSensor__angular_velocity,  // get_const(index) function pointer
    get_function__IMUSensor__angular_velocity,  // get(index) function pointer
    fetch_function__IMUSensor__angular_velocity,  // fetch(index, &value) function pointer
    assign_function__IMUSensor__angular_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::IMUSensor, acceleration_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMUSensor__acceleration_bias,  // size() function pointer
    get_const_function__IMUSensor__acceleration_bias,  // get_const(index) function pointer
    get_function__IMUSensor__acceleration_bias,  // get(index) function pointer
    fetch_function__IMUSensor__acceleration_bias,  // fetch(index, &value) function pointer
    assign_function__IMUSensor__acceleration_bias,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::IMUSensor, angular_velocity_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__IMUSensor__angular_velocity_bias,  // size() function pointer
    get_const_function__IMUSensor__angular_velocity_bias,  // get_const(index) function pointer
    get_function__IMUSensor__angular_velocity_bias,  // get(index) function pointer
    fetch_function__IMUSensor__angular_velocity_bias,  // fetch(index, &value) function pointer
    assign_function__IMUSensor__angular_velocity_bias,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IMUSensor_message_members = {
  "holoocean_interfaces::msg",  // message namespace
  "IMUSensor",  // message name
  5,  // number of fields
  sizeof(holoocean_interfaces::msg::IMUSensor),
  IMUSensor_message_member_array,  // message members
  IMUSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  IMUSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IMUSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMUSensor_message_members,
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
get_message_type_support_handle<holoocean_interfaces::msg::IMUSensor>()
{
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::IMUSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, holoocean_interfaces, msg, IMUSensor)() {
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::IMUSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
