include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
add_executable(bpwin ${SOURCES}) 
target_link_libraries(bpwin LINK_PUBLIC allstat)

set_target_properties(bpwin PROPERTIES FOLDER "Examples")
install(TARGETS bpwin CONFIGURATIONS ${CMAKE_BUILD_TYPE} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})