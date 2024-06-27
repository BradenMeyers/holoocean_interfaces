// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/RotationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/rotation_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_RotationSensor_yaw
{
public:
  explicit Init_RotationSensor_yaw(::holoocean_interfaces::msg::RotationSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::RotationSensor yaw(::holoocean_interfaces::msg::RotationSensor::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::RotationSensor msg_;
};

class Init_RotationSensor_pitch
{
public:
  explicit Init_RotationSensor_pitch(::holoocean_interfaces::msg::RotationSensor & msg)
  : msg_(msg)
  {}
  Init_RotationSensor_yaw pitch(::holoocean_interfaces::msg::RotationSensor::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_RotationSensor_yaw(msg_);
  }

private:
  ::holoocean_interfaces::msg::RotationSensor msg_;
};

class Init_RotationSensor_roll
{
public:
  explicit Init_RotationSensor_roll(::holoocean_interfaces::msg::RotationSensor & msg)
  : msg_(msg)
  {}
  Init_RotationSensor_pitch roll(::holoocean_interfaces::msg::RotationSensor::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_RotationSensor_pitch(msg_);
  }

private:
  ::holoocean_interfaces::msg::RotationSensor msg_;
};

class Init_RotationSensor_timestamp
{
public:
  Init_RotationSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotationSensor_roll timestamp(::holoocean_interfaces::msg::RotationSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RotationSensor_roll(msg_);
  }

private:
  ::holoocean_interfaces::msg::RotationSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::RotationSensor>()
{
  return holoocean_interfaces::msg::builder::Init_RotationSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__BUILDER_HPP_
