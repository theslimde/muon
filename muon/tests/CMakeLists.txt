
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(Boost_INCLUDE_DIR)

add_executable(test01 main.cpp)

target_link_libraries(test01 ${Boost_unit_test_framework_LIBRARY_RELEASE})

enable_testing()
ADD_TEST(test01 test01)