#设置 BINARY 为项目名IndexProject
set(BINARY ${CMAKE_PROJECT_NAME})

# find_package(OpenCV REQUIRED)
# find_package(Boost REQUIRED COMPONENTS graph)
find_package(gflags REQUIRED)
find_package(glog REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR TRUE)
include_directories(${Boost_INCLUDE_DIRS})

if(${USE_GPU})
add_compile_definitions(USE_GPU)
endif(${USE_GPU})

link_libraries(
  pthread
  ${OpenCV_LIBS}
  ${Boost_LIBRARIES}
  gflags
  glog
)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)
# set(SOURCES ${SOURCES})
add_executable(${BINARY}_run ${SOURCES})
set_property(TARGET ${BINARY}_run PROPERTY RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

if (${BUILD_TEST})
  # 为了让单元测试的时候src下的代码能被作为静态链接库使用
  add_library(${BINARY}_lib STATIC ${SOURCES})
endif()
