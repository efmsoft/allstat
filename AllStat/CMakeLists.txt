option(ALLSTAT_STATIC_WINDOWS_RUNTIME "Use static (MT/MTd) Windows runtime" OFF)

set(LIBRARY_NAME allstat)

if(MSVC)
  if (ALLSTAT_STATIC_WINDOWS_RUNTIME)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    set(LIBRARY_NAME allstats)
  endif()
endif()

include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "source/*.cpp")
add_library(${LIBRARY_NAME} STATIC ${SOURCES}) 

target_include_directories(${LIBRARY_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include") 

set_target_properties(${LIBRARY_NAME} PROPERTIES
  POSITION_INDEPENDENT_CODE ON
)
