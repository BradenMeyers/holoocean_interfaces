// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from holoocean_interfaces:msg/RotationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__STRUCT_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__holoocean_interfaces__msg__RotationSensor __attribute__((deprecated))
#else
# define DEPRECATED__holoocean_interfaces__msg__RotationSensor __declspec(deprecated)
#endif

namespace holoocean_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RotationSensor_
{
  using Type = RotationSensor_<ContainerAllocator>;

  explicit RotationSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit RotationSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    holoocean_interfaces::msg::RotationSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const holoocean_interfaces::msg::RotationSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::RotationSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::RotationSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__holoocean_interfaces__msg__RotationSensor
    std::shared_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__holoocean_interfaces__msg__RotationSensor
    std::shared_ptr<holoocean_interfaces::msg::RotationSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotationSensor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotationSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotationSensor_

// alias to use template instance with default allocator
using RotationSensor =
  holoocean_interfaces::msg::RotationSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__STRUCT_HPP_
