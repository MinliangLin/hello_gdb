cmake_minimum_required(VERSION 3.1)
project(Hello)

set(CMAKE_BUILD_TYPE Debug)

add_library(foo SHARED foo.c)
add_executable(main.out main.c)
target_link_libraries(main.out foo)
