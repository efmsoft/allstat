add_definitions(/D _UNICODE /D UNICODE /D _AFXDLL)
set(CMAKE_MFC_FLAG 2)

include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp" "*.rc") 
add_executable(ErrorLookup WIN32 ${SOURCES}) 

target_link_libraries (ErrorLookup LINK_PUBLIC allstat)
