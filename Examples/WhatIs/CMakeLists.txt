include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
add_executable(whatis ${SOURCES}) 
target_link_libraries (whatis LINK_PUBLIC allstat)

set_target_properties(whatis PROPERTIES FOLDER "Examples")
install(TARGETS whatis CONFIGURATIONS ${CMAKE_BUILD_TYPE} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})

