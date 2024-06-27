// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/OrientationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ORIENTATION_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ORIENTATION_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/orientation_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_OrientationSensor_matrix
{
public:
  explicit Init_OrientationSensor_matrix(::holoocean_interfaces::msg::OrientationSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::OrientationSensor matrix(::holoocean_interfaces::msg::OrientationSensor::_matrix_type arg)
  {
    msg_.matrix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::OrientationSensor msg_;
};

class Init_OrientationSensor_timestamp
{
public:
  Init_OrientationSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrientationSensor_matrix timestamp(::holoocean_interfaces::msg::OrientationSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OrientationSensor_matrix(msg_);
  }

private:
  ::holoocean_interfaces::msg::OrientationSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::OrientationSensor>()
{
  return holoocean_interfaces::msg::builder::Init_OrientationSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ORIENTATION_SENSOR__BUILDER_HPP_
