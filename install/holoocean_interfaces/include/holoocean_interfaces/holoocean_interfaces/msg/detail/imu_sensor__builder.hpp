// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/IMUSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/imu_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_IMUSensor_angular_velocity_bias
{
public:
  explicit Init_IMUSensor_angular_velocity_bias(::holoocean_interfaces::msg::IMUSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::IMUSensor angular_velocity_bias(::holoocean_interfaces::msg::IMUSensor::_angular_velocity_bias_type arg)
  {
    msg_.angular_velocity_bias = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::IMUSensor msg_;
};

class Init_IMUSensor_acceleration_bias
{
public:
  explicit Init_IMUSensor_acceleration_bias(::holoocean_interfaces::msg::IMUSensor & msg)
  : msg_(msg)
  {}
  Init_IMUSensor_angular_velocity_bias acceleration_bias(::holoocean_interfaces::msg::IMUSensor::_acceleration_bias_type arg)
  {
    msg_.acceleration_bias = std::move(arg);
    return Init_IMUSensor_angular_velocity_bias(msg_);
  }

private:
  ::holoocean_interfaces::msg::IMUSensor msg_;
};

class Init_IMUSensor_angular_velocity
{
public:
  explicit Init_IMUSensor_angular_velocity(::holoocean_interfaces::msg::IMUSensor & msg)
  : msg_(msg)
  {}
  Init_IMUSensor_acceleration_bias angular_velocity(::holoocean_interfaces::msg::IMUSensor::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_IMUSensor_acceleration_bias(msg_);
  }

private:
  ::holoocean_interfaces::msg::IMUSensor msg_;
};

class Init_IMUSensor_acceleration
{
public:
  explicit Init_IMUSensor_acceleration(::holoocean_interfaces::msg::IMUSensor & msg)
  : msg_(msg)
  {}
  Init_IMUSensor_angular_velocity acceleration(::holoocean_interfaces::msg::IMUSensor::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_IMUSensor_angular_velocity(msg_);
  }

private:
  ::holoocean_interfaces::msg::IMUSensor msg_;
};

class Init_IMUSensor_timestamp
{
public:
  Init_IMUSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUSensor_acceleration timestamp(::holoocean_interfaces::msg::IMUSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_IMUSensor_acceleration(msg_);
  }

private:
  ::holoocean_interfaces::msg::IMUSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::IMUSensor>()
{
  return holoocean_interfaces::msg::builder::Init_IMUSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__BUILDER_HPP_
