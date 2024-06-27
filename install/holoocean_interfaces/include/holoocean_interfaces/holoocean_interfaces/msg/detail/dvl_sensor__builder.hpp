// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/DVLSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/dvl_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_DVLSensor_range
{
public:
  explicit Init_DVLSensor_range(::holoocean_interfaces::msg::DVLSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::DVLSensor range(::holoocean_interfaces::msg::DVLSensor::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::DVLSensor msg_;
};

class Init_DVLSensor_velocity
{
public:
  explicit Init_DVLSensor_velocity(::holoocean_interfaces::msg::DVLSensor & msg)
  : msg_(msg)
  {}
  Init_DVLSensor_range velocity(::holoocean_interfaces::msg::DVLSensor::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_DVLSensor_range(msg_);
  }

private:
  ::holoocean_interfaces::msg::DVLSensor msg_;
};

class Init_DVLSensor_timestamp
{
public:
  Init_DVLSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DVLSensor_velocity timestamp(::holoocean_interfaces::msg::DVLSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DVLSensor_velocity(msg_);
  }

private:
  ::holoocean_interfaces::msg::DVLSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::DVLSensor>()
{
  return holoocean_interfaces::msg::builder::Init_DVLSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__BUILDER_HPP_
