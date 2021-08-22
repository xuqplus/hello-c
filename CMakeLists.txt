cmake_minimum_required(VERSION 3.0.0)
project(hello-c VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(hello-c main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

enable_testing()
add_executable(tester tester.cpp)
add_test(test-01 tester)
add_test(test-02 tester)
add_test(test-02 hello-c)

# add lib
add_subdirectory(lib)
target_link_libraries(hello-c hello-lib)
