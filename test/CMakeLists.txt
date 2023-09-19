
find_package(GTest)

aux_source_directory(. DIR_SOURCES)

add_executable(do_test ${DIR_SOURCES})

target_link_libraries(do_test GTest::gtest GTest::gtest_main pthread)

add_test(ExeTest do_test)

include(GoogleTest)
gtest_discover_tests(do_test)
