include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(TO_CMAKE_PATH ${CMAKE_SOURCE_DIR}/AllStat/source SRCROOT)
file(GLOB_RECURSE SOURCES ${SRCROOT}/*.cpp)

add_definitions(-DAS_DLL_IMPL -DAS_DLL)
add_library(allstatd SHARED ${SOURCES}) 
