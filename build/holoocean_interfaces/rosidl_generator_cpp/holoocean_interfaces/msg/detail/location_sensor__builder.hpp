// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/LocationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__LOCATION_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__LOCATION_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/location_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_LocationSensor_position
{
public:
  explicit Init_LocationSensor_position(::holoocean_interfaces::msg::LocationSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::LocationSensor position(::holoocean_interfaces::msg::LocationSensor::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::LocationSensor msg_;
};

class Init_LocationSensor_timestamp
{
public:
  Init_LocationSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationSensor_position timestamp(::holoocean_interfaces::msg::LocationSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LocationSensor_position(msg_);
  }

private:
  ::holoocean_interfaces::msg::LocationSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::LocationSensor>()
{
  return holoocean_interfaces::msg::builder::Init_LocationSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__LOCATION_SENSOR__BUILDER_HPP_
