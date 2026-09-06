# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target agri_interfaces::agri_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${agri_interfaces_TARGETS}.
if(agri_interfaces_TARGETS AND NOT TARGET agri_interfaces::agri_interfaces)
  add_library(agri_interfaces::agri_interfaces INTERFACE IMPORTED)
  set_target_properties(agri_interfaces::agri_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${agri_interfaces_TARGETS}")
endif()
