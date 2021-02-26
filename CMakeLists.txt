cmake_minimum_required(VERSION 3.0.0)
project(liballstat VERSION 1.1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(AllStat)
add_subdirectory(Dll/AllStatDll)

add_subdirectory(Tests/TestAll)

add_subdirectory(Examples/WhatIs)

if(WIN32)
add_subdirectory(Examples/BestPractices/BpWin)
add_subdirectory(Examples/ErrorLookup)
endif()

if(WIN32)
install(TARGETS allstat allstatd TestAll whatis bpwin ErrorLookup CONFIGURATIONS Release RUNTIME DESTINATION release/bin)
install(TARGETS allstat allstatd TestAll whatis bpwin ErrorLookup CONFIGURATIONS Debug RUNTIME DESTINATION debug/bin)
else()
install(TARGETS allstat allstatd TestAll whatis CONFIGURATIONS Release RUNTIME DESTINATION release/bin)
install(TARGETS allstat allstatd TestAll whatis CONFIGURATIONS Debug RUNTIME DESTINATION debug/bin)
endif()
