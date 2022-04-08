# cmake version
cmake_minimum_required(VERSION 3.10)
# project name
project(IndexProject)
#采用c++14标准
set(CMAKE_CXX_STANDARD 17)

include(CTest)
# enable_testing将会自动被include(CTest)调用
# enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  # URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(src)

add_subdirectory(src)
add_subdirectory(gtest)
add_subdirectory(boost-test)



# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)