// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "holoocean_interfaces/msg/detail/imaging_sonar__struct.hpp"
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

void ImagingSonar_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) holoocean_interfaces::msg::ImagingSonar(_init);
}

void ImagingSonar_fini_function(void * message_memory)
{
  auto typed_message = static_cast<holoocean_interfaces::msg::ImagingSonar *>(message_memory);
  typed_message->~ImagingSonar();
}

size_t size_function__ImagingSonar__image_azimuth(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImagingSonar__image_azimuth(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImagingSonar__image_azimuth(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImagingSonar__image_azimuth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImagingSonar__image_azimuth(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImagingSonar__image_azimuth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImagingSonar__image_azimuth(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImagingSonar__image_azimuth(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImagingSonar__image_range(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImagingSonar__image_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImagingSonar__image_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImagingSonar__image_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImagingSonar__image_range(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImagingSonar__image_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImagingSonar__image_range(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImagingSonar__image_range(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImagingSonar_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::ImagingSonar, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bins_azimuth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::ImagingSonar, bins_azimuth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bins_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::ImagingSonar, bins_range),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_azimuth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::ImagingSonar, image_azimuth),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImagingSonar__image_azimuth,  // size() function pointer
    get_const_function__ImagingSonar__image_azimuth,  // get_const(index) function pointer
    get_function__ImagingSonar__image_azimuth,  // get(index) function pointer
    fetch_function__ImagingSonar__image_azimuth,  // fetch(index, &value) function pointer
    assign_function__ImagingSonar__image_azimuth,  // assign(index, value) function pointer
    resize_function__ImagingSonar__image_azimuth  // resize(index) function pointer
  },
  {
    "image_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces::msg::ImagingSonar, image_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImagingSonar__image_range,  // size() function pointer
    get_const_function__ImagingSonar__image_range,  // get_const(index) function pointer
    get_function__ImagingSonar__image_range,  // get(index) function pointer
    fetch_function__ImagingSonar__image_range,  // fetch(index, &value) function pointer
    assign_function__ImagingSonar__image_range,  // assign(index, value) function pointer
    resize_function__ImagingSonar__image_range  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImagingSonar_message_members = {
  "holoocean_interfaces::msg",  // message namespace
  "ImagingSonar",  // message name
  5,  // number of fields
  sizeof(holoocean_interfaces::msg::ImagingSonar),
  ImagingSonar_message_member_array,  // message members
  ImagingSonar_init_function,  // function to initialize message memory (memory has to be allocated)
  ImagingSonar_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImagingSonar_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImagingSonar_message_members,
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
get_message_type_support_handle<holoocean_interfaces::msg::ImagingSonar>()
{
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::ImagingSonar_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, holoocean_interfaces, msg, ImagingSonar)() {
  return &::holoocean_interfaces::msg::rosidl_typesupport_introspection_cpp::ImagingSonar_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
