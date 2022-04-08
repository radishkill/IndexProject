set(BINARY ${CMAKE_PROJECT_NAME}_gtest)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})
# 链接src生成的lib库和gtest库
target_link_libraries(${BINARY} PUBLIC gtest_main gtest gmock ${CMAKE_PROJECT_NAME}_lib )