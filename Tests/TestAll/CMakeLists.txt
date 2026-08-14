include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../AllStat/include)

add_executable(TestAll TestAll.cpp)
target_link_libraries(TestAll LINK_PUBLIC allstat)

string(TOUPPER "${ALLSTAT_LANGUAGE}" ALLSTAT_LANGUAGE_UPPER)
target_compile_definitions(
  TestAll
  PRIVATE
  "ALLSTAT_LANGUAGE_${ALLSTAT_LANGUAGE_UPPER}")

if (MSVC)
  target_compile_options(TestAll PRIVATE /utf-8)
endif ()

set_target_properties(TestAll PROPERTIES FOLDER "Tests")
install(TARGETS TestAll CONFIGURATIONS ${ALLSTAT_INSTALL_CONFIGURATIONS} RUNTIME DESTINATION ${ALLSTAT_INSTALL_DIR})
