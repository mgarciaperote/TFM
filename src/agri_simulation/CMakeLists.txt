cmake_minimum_required(VERSION 3.20)
project(agri_simulation)

find_package(ament_cmake REQUIRED)
find_package(ros_gz_sim REQUIRED)
find_package(ros_gz_bridge REQUIRED)

install(
  DIRECTORY
    launch
    worlds
    models
  DESTINATION share/${PROJECT_NAME}
)

ament_package()