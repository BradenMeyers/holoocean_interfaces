// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from holoocean_interfaces:msg/RangeFinderSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "holoocean_interfaces/msg/detail/range_finder_sensor__struct.hpp"
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

void RangeFinderSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) holoocean_interfaces::msg::RangeFinderSensor(_init);
}

void RangeFinderSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<holoocean_interfaces::msg::RangeFinderSensor *>(message_memory);
  typed_message->~RangeFinderSensor();
}

size_t size_function__RangeFinderSensor__distances(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RangeFinderSensor__distances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RangeFinderSensor__distances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RangeFinderSensor__distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RangeFinderSensor__distances(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RangeFinderSensor__distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RangeFinderSensor__distances(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RangeFinderSensor__distances(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RangeFinderSensor__angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RangeFinderSensor__angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__RangeFinderSensor__angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__RangeFinderSensor__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RangeFinderSensor__angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RangeFinderSensor__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RangeFinderSensor__angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__RangeFinderSensor__angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RangeFinderSensor_message_member_array[4] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::RangeFinderSensor, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::RangeFinderSensor, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::RangeFinderSensor, distances),  // bytes offset in struct
    nullptr,  // default value
    size_function__RangeFinderSensor__distances,  // size() function pointer
    get_const_function__RangeFinderSensor__distances,  // get_const(index) function pointer
    get_function__RangeFinderSensor__distances,  // get(index) function pointer
    fetch_function__RangeFinderSensor__distances,  // fetch(index, &value) function pointer
    assign_function__RangeFinderSensor__distances,  // assign(index, value) function pointer
    resize_function__RangeFinderSensor__distances  // resize(index) function pointer
  },
  {
    "angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::RangeFinderSensor, angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__RangeFinderSensor__angles,  // size() function pointer
    get_const_function__RangeFinderSensor__angles,  // get_const(index) function pointer
    get_function__RangeFinderSensor__angles,  // get(index) function pointer
    fetch_function__RangeFinderSensor__angles,  // fetch(index, &value) function pointer
    assign_function__RangeFinderSensor__angles,  // assign(index, value) function pointer
    resize_function__RangeFinderSensor__angles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RangeFinderSensor_message_members = {
  "holoocean_interfaces::msg",  // message namespace
  "RangeFinderSensor",  // message name
  4,  // number of fields
  sizeof(holoocean_interfaces::msg::RangeFinderSensor),
  RangeFinderSensor_message_member_array,  // message members
  RangeFinderSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  RangeFinderSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RangeFinderSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RangeFinderSensor_message_members,
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
get_message_type_support_handle<holoocean_interfaces::msg::RangeFinderSensor>()
{
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::RangeFinderSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, holoocean_interfaces, msg, RangeFinderSensor)() {
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::RangeFinderSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
