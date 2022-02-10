cmake_minimum_required(VERSION 3.0.0)
project(AllStat VERSION 1.1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_BUILD_TYPE STREQUAL "")
  message(STATUS "  Diag: Build type was unspecified, set to Release")
  set(CMAKE_BUILD_TYPE Release)
else ()
  message(STATUS "  Diag: Build type specified as '${CMAKE_BUILD_TYPE}'")
endif ()

if (${CMAKE_BUILD_TYPE} STREQUAL Debug)
  set_directory_properties(PROPERTIES COMPILE_DEFINITIONS "_DEBUG")
endif ()

string(TOLOWER ${CMAKE_BUILD_TYPE} ALLSTAT_INSTALL_SUBDIR)
set(ALLSTAT_INSTALL_DIR ${ALLSTAT_INSTALL_SUBDIR}/bin)

enable_testing() 

include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

add_subdirectory(AllStat)
add_subdirectory(Dll/AllStatDll)

add_subdirectory(Tests)
add_subdirectory(Examples)
