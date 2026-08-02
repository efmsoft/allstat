option(ALLSTAT_STATIC_WINDOWS_RUNTIME "Use static (MT/MTd) Windows runtime" OFF)

set(LIBRARY_NAME allstat)

if (MSVC)
  if (ALLSTAT_STATIC_WINDOWS_RUNTIME)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    set(LIBRARY_NAME allstats)
  endif ()
endif ()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

if (NOT DEFINED ALLSTAT_LANGUAGE)
  set(
    ALLSTAT_LANGUAGE
    "en"
    CACHE STRING
    "Language of generated AllStat tables")
endif ()

set(
  ALLSTAT_GENERATED_SOURCE_DIR
  "${CMAKE_CURRENT_SOURCE_DIR}/source/generated/${ALLSTAT_LANGUAGE}")

if (NOT IS_DIRECTORY "${ALLSTAT_GENERATED_SOURCE_DIR}")
  message(
    FATAL_ERROR
    "Generated AllStat tables for language '${ALLSTAT_LANGUAGE}' were not found in '${ALLSTAT_GENERATED_SOURCE_DIR}'")
endif ()

file(
  GLOB_RECURSE ALLSTAT_SOURCE_CANDIDATES
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  "source/*.cpp")

set(SOURCES)
foreach (SOURCE ${ALLSTAT_SOURCE_CANDIDATES})
  if (NOT SOURCE MATCHES "^source/generated/")
    list(APPEND SOURCES ${SOURCE})
  endif ()
endforeach ()

file(
  GLOB GENERATED_SOURCES
  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
  "source/generated/${ALLSTAT_LANGUAGE}/*.cpp")

if (NOT GENERATED_SOURCES)
  message(
    FATAL_ERROR
    "No generated AllStat sources were found for language '${ALLSTAT_LANGUAGE}'")
endif ()

list(APPEND SOURCES ${GENERATED_SOURCES})

message(STATUS "AllStat table language: ${ALLSTAT_LANGUAGE}")

add_library(${LIBRARY_NAME} STATIC ${SOURCES})

target_include_directories(${LIBRARY_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")

set_target_properties(
  ${LIBRARY_NAME}
  PROPERTIES
  POSITION_INDEPENDENT_CODE ON)

if (MSVC)
  target_compile_options(${LIBRARY_NAME} PRIVATE /utf-8)
endif ()
