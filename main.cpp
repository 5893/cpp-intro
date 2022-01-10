#include "all.h"

int main() {
    int value = 123;

    // [=] で関数の外側の値をコピーして使うことが可能
    auto f = [=]{ return value; };
    std::cout << f() << "\n"s;    // 123

    // [&] で関数の外側の値をリファレンスで使うことが可能
    auto g = [&] { ++value; };
    g();
    std::cout << value << "\n"s; // 124

    return 0;
}
