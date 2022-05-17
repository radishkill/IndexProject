# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   # URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
#   URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
# )
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

#add_subdirectory(lib/googletest)

#find_library(GTEST_LIB gtest)

set(BINARY ${CMAKE_PROJECT_NAME}_gtest)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})
# 链接src生成的lib库和gtest库
target_link_libraries(${BINARY} PUBLIC gtest_main gtest gmock ${CMAKE_PROJECT_NAME}_lib )