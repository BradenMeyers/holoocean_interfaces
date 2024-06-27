// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/VelocitySensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/velocity_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_VelocitySensor_velocity
{
public:
  explicit Init_VelocitySensor_velocity(::holoocean_interfaces::msg::VelocitySensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::VelocitySensor velocity(::holoocean_interfaces::msg::VelocitySensor::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::VelocitySensor msg_;
};

class Init_VelocitySensor_timestamp
{
public:
  Init_VelocitySensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocitySensor_velocity timestamp(::holoocean_interfaces::msg::VelocitySensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VelocitySensor_velocity(msg_);
  }

private:
  ::holoocean_interfaces::msg::VelocitySensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::VelocitySensor>()
{
  return holoocean_interfaces::msg::builder::Init_VelocitySensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__BUILDER_HPP_
