// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/RGBCamera.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/rgb_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_RGBCamera_image
{
public:
  explicit Init_RGBCamera_image(::holoocean_interfaces::msg::RGBCamera & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::RGBCamera image(::holoocean_interfaces::msg::RGBCamera::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::RGBCamera msg_;
};

class Init_RGBCamera_channels
{
public:
  explicit Init_RGBCamera_channels(::holoocean_interfaces::msg::RGBCamera & msg)
  : msg_(msg)
  {}
  Init_RGBCamera_image channels(::holoocean_interfaces::msg::RGBCamera::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_RGBCamera_image(msg_);
  }

private:
  ::holoocean_interfaces::msg::RGBCamera msg_;
};

class Init_RGBCamera_height
{
public:
  explicit Init_RGBCamera_height(::holoocean_interfaces::msg::RGBCamera & msg)
  : msg_(msg)
  {}
  Init_RGBCamera_channels height(::holoocean_interfaces::msg::RGBCamera::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_RGBCamera_channels(msg_);
  }

private:
  ::holoocean_interfaces::msg::RGBCamera msg_;
};

class Init_RGBCamera_width
{
public:
  explicit Init_RGBCamera_width(::holoocean_interfaces::msg::RGBCamera & msg)
  : msg_(msg)
  {}
  Init_RGBCamera_height width(::holoocean_interfaces::msg::RGBCamera::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_RGBCamera_height(msg_);
  }

private:
  ::holoocean_interfaces::msg::RGBCamera msg_;
};

class Init_RGBCamera_timestamp
{
public:
  Init_RGBCamera_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBCamera_width timestamp(::holoocean_interfaces::msg::RGBCamera::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RGBCamera_width(msg_);
  }

private:
  ::holoocean_interfaces::msg::RGBCamera msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::RGBCamera>()
{
  return holoocean_interfaces::msg::builder::Init_RGBCamera_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__BUILDER_HPP_
