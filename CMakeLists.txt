# cmake version
cmake_minimum_required(VERSION 3.10)
# project name
project(IndexProject)
#采用c++14标准
set(CMAKE_CXX_STANDARD 17)

include(CTest)
# enable_testing将会自动被include(CTest)调用
# enable_testing()

include_directories(src)

add_subdirectory(src)

# add_subdirectory(gtest)
# add_subdirectory(boost-test)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)