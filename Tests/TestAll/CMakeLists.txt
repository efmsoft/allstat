include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

add_executable(TestAll TestAll.cpp) 
target_link_libraries (TestAll LINK_PUBLIC allstat)

set_target_properties(TestAll PROPERTIES FOLDER "Tests") 
install(TARGETS TestAll CONFIGURATIONS ${CMAKE_BUILD_TYPE} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})
