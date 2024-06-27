// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from holoocean_interfaces:msg/IMUSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__STRUCT_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__holoocean_interfaces__msg__IMUSensor __attribute__((deprecated))
#else
# define DEPRECATED__holoocean_interfaces__msg__IMUSensor __declspec(deprecated)
#endif

namespace holoocean_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUSensor_
{
  using Type = IMUSensor_<ContainerAllocator>;

  explicit IMUSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration.begin(), this->acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration_bias.begin(), this->acceleration_bias.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity_bias.begin(), this->angular_velocity_bias.end(), 0.0f);
    }
  }

  explicit IMUSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acceleration(_alloc),
    angular_velocity(_alloc),
    acceleration_bias(_alloc),
    angular_velocity_bias(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration.begin(), this->acceleration.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acceleration_bias.begin(), this->acceleration_bias.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity_bias.begin(), this->angular_velocity_bias.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _acceleration_type =
    std::array<float, 3>;
  _acceleration_type acceleration;
  using _angular_velocity_type =
    std::array<float, 3>;
  _angular_velocity_type angular_velocity;
  using _acceleration_bias_type =
    std::array<float, 3>;
  _acceleration_bias_type acceleration_bias;
  using _angular_velocity_bias_type =
    std::array<float, 3>;
  _angular_velocity_bias_type angular_velocity_bias;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std::array<float, 3> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<float, 3> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__acceleration_bias(
    const std::array<float, 3> & _arg)
  {
    this->acceleration_bias = _arg;
    return *this;
  }
  Type & set__angular_velocity_bias(
    const std::array<float, 3> & _arg)
  {
    this->angular_velocity_bias = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    holoocean_interfaces::msg::IMUSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const holoocean_interfaces::msg::IMUSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::IMUSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::IMUSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__holoocean_interfaces__msg__IMUSensor
    std::shared_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__holoocean_interfaces__msg__IMUSensor
    std::shared_ptr<holoocean_interfaces::msg::IMUSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUSensor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->acceleration_bias != other.acceleration_bias) {
      return false;
    }
    if (this->angular_velocity_bias != other.angular_velocity_bias) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUSensor_

// alias to use template instance with default allocator
using IMUSensor =
  holoocean_interfaces::msg::IMUSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__STRUCT_HPP_
