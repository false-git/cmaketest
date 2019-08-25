# libhoge
add_library(hoge SHARED hogelib/hogelib.cc)
target_include_directories(hoge PUBLIC ${PROJECT_SOURCE_DIR}/include)

# hello
add_executable(hello hello.cc)
target_link_libraries(hello hoge)

