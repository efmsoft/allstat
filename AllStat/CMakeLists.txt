include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "source/*.cpp")
add_library(allstat STATIC ${SOURCES}) 

target_include_directories(allstat PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include") 

set_target_properties(allstat PROPERTIES
  POSITION_INDEPENDENT_CODE ON
)
