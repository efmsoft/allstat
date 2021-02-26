cmake_minimum_required(VERSION 3.0.0)
project(allstat_root VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(allstat_root main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
