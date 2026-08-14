include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")
add_executable(PureC ${SOURCES}) 
target_link_libraries (PureC LINK_PUBLIC allstat)

set_target_properties(PureC PROPERTIES FOLDER "Examples")
install(TARGETS PureC CONFIGURATIONS ${ALLSTAT_INSTALL_CONFIGURATIONS} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})

