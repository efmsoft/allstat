set(ALLSTAT_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../AllStat")
include_directories(${ALLSTAT_ROOT}/include)

if (NOT DEFINED ALLSTAT_LANGUAGE)
  set(
    ALLSTAT_LANGUAGE
    "en"
    CACHE STRING
    "Language of generated AllStat tables")
endif ()

set_property(CACHE ALLSTAT_LANGUAGE PROPERTY STRINGS en ru es zh)

file(TO_CMAKE_PATH ${ALLSTAT_ROOT}/source SRCROOT)
set(
  ALLSTAT_GENERATED_SOURCE_DIR
  "${SRCROOT}/generated/${ALLSTAT_LANGUAGE}")

if (NOT IS_DIRECTORY "${ALLSTAT_GENERATED_SOURCE_DIR}")
  message(
    FATAL_ERROR
    "Generated AllStat tables for language '${ALLSTAT_LANGUAGE}' were not found in '${ALLSTAT_GENERATED_SOURCE_DIR}'")
endif ()

file(GLOB_RECURSE ALLSTAT_SOURCE_CANDIDATES ${SRCROOT}/*.cpp)

set(SOURCES)
foreach (SOURCE ${ALLSTAT_SOURCE_CANDIDATES})
  if (NOT SOURCE MATCHES "/generated/")
    list(APPEND SOURCES ${SOURCE})
  endif ()
endforeach ()

file(GLOB GENERATED_SOURCES "${ALLSTAT_GENERATED_SOURCE_DIR}/*.cpp")

if (NOT GENERATED_SOURCES)
  message(
    FATAL_ERROR
    "No generated AllStat sources were found for language '${ALLSTAT_LANGUAGE}'")
endif ()

list(APPEND SOURCES ${GENERATED_SOURCES})

add_definitions(-DAS_DLL_IMPL -DAS_DLL)
add_library(allstatd SHARED ${SOURCES} ${ALLSTAT_VERSION_RC})

if (MSVC)
  target_compile_options(allstatd PRIVATE /utf-8)
endif ()
