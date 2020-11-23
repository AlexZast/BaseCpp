cmake_minimum_required(VERSION 3.5)

#CMAKE_GENERATOR(MinGW Makefiles)

project(HW1)

file(GLOB sources "src/*.cpp")

add_executable(HW1 ${sources})

target_include_directories(HW1 PRIVATE
${CMAKE_CURRENT_SOURCE_DIR}/include)



