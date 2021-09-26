cmake_minimum_required(VERSION 3.20)
project(Lab1)

set(CMAKE_CXX_STANDARD 14)

file(GLOB Patterns_SRC CONFIGURE_DEPENDS "*.h" "*.cpp")

add_executable(Lab1 ${Patterns_SRC})
