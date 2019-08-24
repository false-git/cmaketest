#include <iostream>
#include "hogelib/hogelib.h"

int main(int argc, char *argv[]) {
    Hoge hoge;
    std::cout << "hello " << hoge.hoge() << std::endl;
    return 0;
}
