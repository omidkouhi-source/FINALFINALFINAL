// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef TABLESENS__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define TABLESENS__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_tablesens __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_tablesens __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_tablesens __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_tablesens __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_tablesens
    #define ROSIDL_GENERATOR_CPP_PUBLIC_tablesens ROSIDL_GENERATOR_CPP_EXPORT_tablesens
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_tablesens ROSIDL_GENERATOR_CPP_IMPORT_tablesens
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_tablesens __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_tablesens
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_tablesens __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_tablesens
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // TABLESENS__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
