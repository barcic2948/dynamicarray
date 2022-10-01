cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB_RECURSE SRC_FILES src/dynamic_array/*.cpp)

add_executable(main main.cpp ${SRC_FILES})

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/dynamic_array)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
