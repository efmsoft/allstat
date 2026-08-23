cmake_minimum_required(VERSION 3.0.0)
project(AllStat VERSION 1.1.0)

set(
  ALLSTAT_LANGUAGE
  "en"
  CACHE STRING
  "Language of generated AllStat tables")
set_property(CACHE ALLSTAT_LANGUAGE PROPERTY STRINGS en ru es zh)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CONFIGURATION_TYPES)
  message(STATUS "  Diag: Multi-config generator '${CMAKE_GENERATOR}'")
  set(ALLSTAT_INSTALL_CONFIGURATIONS ${CMAKE_CONFIGURATION_TYPES})
  set(ALLSTAT_INSTALL_DIR "$<LOWER_CASE:$<CONFIG>>/bin")
  set_property(
    DIRECTORY
    APPEND
    PROPERTY COMPILE_DEFINITIONS "$<$<CONFIG:Debug>:_DEBUG>")
else ()
  if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "  Diag: Build type was unspecified, set to Release")
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
  else ()
    message(STATUS "  Diag: Build type specified as '${CMAKE_BUILD_TYPE}'")
  endif ()

  if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set_directory_properties(PROPERTIES COMPILE_DEFINITIONS "_DEBUG")
  endif ()

  string(TOLOWER "${CMAKE_BUILD_TYPE}" ALLSTAT_INSTALL_SUBDIR)
  set(ALLSTAT_INSTALL_DIR ${ALLSTAT_INSTALL_SUBDIR}/bin)
  set(ALLSTAT_INSTALL_CONFIGURATIONS ${CMAKE_BUILD_TYPE})
endif ()

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

add_subdirectory(AllStat)
add_subdirectory(Dll/AllStatDll)

add_subdirectory(Tests)
add_subdirectory(Examples)
