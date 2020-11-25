cmake_minimum_required(VERSION 3.5)
#CMAKE_GENERATOR(MinGW Makefiles)

project(HW2)
add_executable(HW2 src/HW2.cpp)

target_include_directories(HW2 PRIVATE 
${CMAKE_CURRENT_SOURCE_DIR}/include)


#set_target_properties(
#    HW1.exe PROPERTIES
#    CXX_STANDARD 14
#    CXX_STANDARD_REQUIRED ON
#    )
