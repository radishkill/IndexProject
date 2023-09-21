set(BINARY ${CMAKE_PROJECT_NAME}_ctest)

find_package(GTest)

aux_source_directory(. DIR_SOURCES)

add_executable(${BINARY} ${DIR_SOURCES})

target_link_libraries(${BINARY} GTest::gtest GTest::gtest_main pthread)
target_link_libraries(${BINARY} ${CMAKE_PROJECT_NAME}_lib)

add_test(ExeTest ${BINARY})

include(GoogleTest)
gtest_discover_tests(${BINARY})
