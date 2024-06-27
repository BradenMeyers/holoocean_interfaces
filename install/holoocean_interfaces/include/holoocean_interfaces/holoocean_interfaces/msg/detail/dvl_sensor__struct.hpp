// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from holoocean_interfaces:msg/DVLSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__STRUCT_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__holoocean_interfaces__msg__DVLSensor __attribute__((deprecated))
#else
# define DEPRECATED__holoocean_interfaces__msg__DVLSensor __declspec(deprecated)
#endif

namespace holoocean_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DVLSensor_
{
  using Type = DVLSensor_<ContainerAllocator>;

  explicit DVLSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->range.begin(), this->range.end(), 0.0f);
    }
  }

  explicit DVLSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_alloc),
    range(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      std::fill<typename std::array<float, 3>::iterator, float>(this->velocity.begin(), this->velocity.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->range.begin(), this->range.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _velocity_type =
    std::array<float, 3>;
  _velocity_type velocity;
  using _range_type =
    std::array<float, 4>;
  _range_type range;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<float, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__range(
    const std::array<float, 4> & _arg)
  {
    this->range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    holoocean_interfaces::msg::DVLSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const holoocean_interfaces::msg::DVLSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::DVLSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::DVLSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__holoocean_interfaces__msg__DVLSensor
    std::shared_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__holoocean_interfaces__msg__DVLSensor
    std::shared_ptr<holoocean_interfaces::msg::DVLSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DVLSensor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    return true;
  }
  bool operator!=(const DVLSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DVLSensor_

// alias to use template instance with default allocator
using DVLSensor =
  holoocean_interfaces::msg::DVLSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__STRUCT_HPP_
