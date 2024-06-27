// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/DepthSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__DEPTH_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__DEPTH_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/depth_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_DepthSensor_depth
{
public:
  explicit Init_DepthSensor_depth(::holoocean_interfaces::msg::DepthSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::DepthSensor depth(::holoocean_interfaces::msg::DepthSensor::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::DepthSensor msg_;
};

class Init_DepthSensor_timestamp
{
public:
  Init_DepthSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DepthSensor_depth timestamp(::holoocean_interfaces::msg::DepthSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DepthSensor_depth(msg_);
  }

private:
  ::holoocean_interfaces::msg::DepthSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::DepthSensor>()
{
  return holoocean_interfaces::msg::builder::Init_DepthSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__DEPTH_SENSOR__BUILDER_HPP_
