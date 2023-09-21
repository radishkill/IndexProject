cmake_minimum_required(VERSION 3.20)
project(IndexProject)

set(CMAKE_CXX_STANDARD 17)

option(USE_GPU "Use GPU" OFF)
option(BUILD_TEST "" ON)

include_directories(src)

add_subdirectory(src)

if (${BUILD_TEST})
  # include(CTest)
  # enable_testing将会自动被include(CTest)调用
  enable_testing()
  add_subdirectory(test)
  add_subdirectory(gtest)
  # add_subdirectory(boost-test)
endif()

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)