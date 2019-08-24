add_library(hoge SHARED hogelib.cc)

target_include_directories(hoge PUBLIC ${PROJECT_SOURCE_DIR}/include)
