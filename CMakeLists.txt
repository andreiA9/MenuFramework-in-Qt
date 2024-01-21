cmake_minimum_required(VERSION 3.16)

project(MenuFramework-in-Qt)

# INSTRUCT CMake to call COMPILER=MOC automatically
set(CMAKE_AUTOMOC ON)

add_subdirectory(Main)
add_subdirectory(BuildManager)
add_subdirectory(BuildTool)
add_subdirectory(Menu)
