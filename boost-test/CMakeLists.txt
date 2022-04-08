set(BINARY ${CMAKE_PROJECT_NAME}_ctest)

find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories(include ${Boost_INCLUDE_DIRS}/boost)
add_definitions(-DBOOST_TEST_DYN_LINK -g)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY}
  ${CMAKE_PROJECT_NAME}_lib
  ${Boost_FILESYSTEM_LIBRARY}
  ${Boost_SYSTEM_LIBRARY}
  ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)

# message(WARNING ${Boost_FILESYSTEM_LIBRARY})
# message(WARNING ${Boost_SYSTEM_LIBRARY})
# message(WARNING ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})