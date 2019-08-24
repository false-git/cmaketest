add_subdirectory(hogelib)

add_executable(hello hello.cc)

target_link_libraries(hello hoge)
