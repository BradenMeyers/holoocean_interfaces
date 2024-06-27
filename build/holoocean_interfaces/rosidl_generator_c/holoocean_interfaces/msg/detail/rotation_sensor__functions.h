// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from holoocean_interfaces:msg/RotationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__FUNCTIONS_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "holoocean_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "holoocean_interfaces/msg/detail/rotation_sensor__struct.h"

/// Initialize msg/RotationSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * holoocean_interfaces__msg__RotationSensor
 * )) before or use
 * holoocean_interfaces__msg__RotationSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
bool
holoocean_interfaces__msg__RotationSensor__init(holoocean_interfaces__msg__RotationSensor * msg);

/// Finalize msg/RotationSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
void
holoocean_interfaces__msg__RotationSensor__fini(holoocean_interfaces__msg__RotationSensor * msg);

/// Create msg/RotationSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * holoocean_interfaces__msg__RotationSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
holoocean_interfaces__msg__RotationSensor *
holoocean_interfaces__msg__RotationSensor__create();

/// Destroy msg/RotationSensor message.
/**
 * It calls
 * holoocean_interfaces__msg__RotationSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
void
holoocean_interfaces__msg__RotationSensor__destroy(holoocean_interfaces__msg__RotationSensor * msg);

/// Check for msg/RotationSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
bool
holoocean_interfaces__msg__RotationSensor__are_equal(const holoocean_interfaces__msg__RotationSensor * lhs, const holoocean_interfaces__msg__RotationSensor * rhs);

/// Copy a msg/RotationSensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
bool
holoocean_interfaces__msg__RotationSensor__copy(
  const holoocean_interfaces__msg__RotationSensor * input,
  holoocean_interfaces__msg__RotationSensor * output);

/// Initialize array of msg/RotationSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * holoocean_interfaces__msg__RotationSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
bool
holoocean_interfaces__msg__RotationSensor__Sequence__init(holoocean_interfaces__msg__RotationSensor__Sequence * array, size_t size);

/// Finalize array of msg/RotationSensor messages.
/**
 * It calls
 * holoocean_interfaces__msg__RotationSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
void
holoocean_interfaces__msg__RotationSensor__Sequence__fini(holoocean_interfaces__msg__RotationSensor__Sequence * array);

/// Create array of msg/RotationSensor messages.
/**
 * It allocates the memory for the array and calls
 * holoocean_interfaces__msg__RotationSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
holoocean_interfaces__msg__RotationSensor__Sequence *
holoocean_interfaces__msg__RotationSensor__Sequence__create(size_t size);

/// Destroy array of msg/RotationSensor messages.
/**
 * It calls
 * holoocean_interfaces__msg__RotationSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
void
holoocean_interfaces__msg__RotationSensor__Sequence__destroy(holoocean_interfaces__msg__RotationSensor__Sequence * array);

/// Check for msg/RotationSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
bool
holoocean_interfaces__msg__RotationSensor__Sequence__are_equal(const holoocean_interfaces__msg__RotationSensor__Sequence * lhs, const holoocean_interfaces__msg__RotationSensor__Sequence * rhs);

/// Copy an array of msg/RotationSensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_holoocean_interfaces
bool
holoocean_interfaces__msg__RotationSensor__Sequence__copy(
  const holoocean_interfaces__msg__RotationSensor__Sequence * input,
  holoocean_interfaces__msg__RotationSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ROTATION_SENSOR__FUNCTIONS_H_
