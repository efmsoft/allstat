add_definitions(/D _UNICODE /D UNICODE /D _AFXDLL)
set(CMAKE_MFC_FLAG 2)

include_directories(${CMAKE_SOURCE_DIR}/AllStat/include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp" "*.rc") 
add_executable(ErrorLookup WIN32 ${SOURCES}) 
target_link_libraries(ErrorLookup LINK_PUBLIC allstat)
target_link_options(ErrorLookup PUBLIC /entry:wWinMainCRTStartup)

set_target_properties(ErrorLookup PROPERTIES FOLDER "Examples")
install(TARGETS ErrorLookup CONFIGURATIONS ${CMAKE_BUILD_TYPE} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})