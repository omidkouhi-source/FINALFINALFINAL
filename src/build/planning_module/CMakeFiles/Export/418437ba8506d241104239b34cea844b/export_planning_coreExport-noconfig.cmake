#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "planning_module::planning_core" for configuration ""
set_property(TARGET planning_module::planning_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(planning_module::planning_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libplanning_core.so"
  IMPORTED_SONAME_NOCONFIG "libplanning_core.so"
  )

list(APPEND _cmake_import_check_targets planning_module::planning_core )
list(APPEND _cmake_import_check_files_for_planning_module::planning_core "${_IMPORT_PREFIX}/lib/libplanning_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
