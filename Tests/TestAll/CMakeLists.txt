include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

add_executable(TestAll TestAll.cpp) 
target_link_libraries (TestAll LINK_PUBLIC allstat)
