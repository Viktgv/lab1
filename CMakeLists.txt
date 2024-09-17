cmake_minimum_required(VERSION 3.23)
project(lab1 C)

set(CMAKE_C_STANDARD 17)

set(SOURCE_FILES "main.c")
add_executable(lab1 ${SOURCE_FILES})

target_link_libraries(lab1)
