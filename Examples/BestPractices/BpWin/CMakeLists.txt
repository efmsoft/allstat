include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
add_executable(bpwin ${SOURCES}) 

target_link_libraries (bpwin LINK_PUBLIC allstat)

