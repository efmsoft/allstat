cmake_minimum_required(VERSION 3.0.0)
project(liballstat VERSION 1.1.0)

add_subdirectory(AllStat)
add_subdirectory(Dll/AllStatDll)

add_subdirectory(Tests/TestAll)

add_subdirectory(Examples/WhatIs)
add_subdirectory(Examples/BestPractices/BpWin)
if(WIN32)
add_subdirectory(Examples/ErrorLookup)
endif()

if(WIN32)
install(TARGETS allstat allstatd TestAll whatis bpwin ErrorLookup CONFIGURATIONS Release RUNTIME DESTINATION release/bin)
install(TARGETS allstat allstatd TestAll whatis bpwin ErrorLookup CONFIGURATIONS Debug RUNTIME DESTINATION debug/bin)
else()
install(TARGETS allstat allstatd TestAll whatis CONFIGURATIONS Release RUNTIME DESTINATION release/bin)
install(TARGETS allstat allstatd TestAll whatis CONFIGURATIONS Debug RUNTIME DESTINATION debug/bin)
endif()
