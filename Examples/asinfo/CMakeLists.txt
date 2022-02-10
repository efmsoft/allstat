include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")
add_executable(asinfo ${SOURCES}) 
target_link_libraries(asinfo LINK_PUBLIC allstat)

set_target_properties(asinfo PROPERTIES FOLDER "Examples")
install(TARGETS asinfo CONFIGURATIONS ${CMAKE_BUILD_TYPE} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})

