cmake_minimum_required(VERSION 3.22)

project("c++ project template")

set(CXX_STANDARD 20)

list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)