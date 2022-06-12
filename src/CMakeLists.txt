#设置 BINARY 为项目名IndexProject
set(BINARY ${CMAKE_PROJECT_NAME})

# find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED COMPONENTS graph)

set(CMAKE_INCLUDE_CURRENT_DIR TRUE)

include_directories(${Boost_INCLUDE_DIRS})

link_libraries(
  pthread
  ${OpenCV_LIBS}
  ${Boost_LIBRARIES}
)

# 1
# add_executable(ExampleProject main.cpp file1.cpp file1.h)

# 2
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
set(SOURCES ${SOURCES})
add_executable(${BINARY}_run ${SOURCES})
# 为了让单元测试的时候src下的代码能被作为静态链接库使用

add_library(${BINARY}_lib STATIC ${SOURCES})
