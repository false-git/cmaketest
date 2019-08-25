find_package(GTest REQUIRED)

add_executable(hogetest hogetest.cc)
target_link_libraries(hogetest hoge GTest::GTest GTest::Main)

add_test(NAME hogetest COMMAND hogetest)
