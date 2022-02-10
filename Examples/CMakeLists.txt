source_group(Examples FILES CMakeLists.txt)

add_subdirectory(asinfo)
add_subdirectory(PureC)
add_subdirectory(WhatIs)

if(WIN32)
  add_subdirectory(BestPractices/BpWin)
  add_subdirectory(ErrorLookup)
endif()
