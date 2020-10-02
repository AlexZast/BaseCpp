cmake_minimum_required(VERSION 3.5)

project(HW2)
add_executable(HW2 src/program.cpp)

target_include_directories(HW2 PRIVATE 
${CMAKE_CURRENT_SOURCE_DIR}/include)



