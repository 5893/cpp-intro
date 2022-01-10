#include "all.h"

int main() {

    auto a = 1 == 1;    // bool型
    bool b = 2 == 2;

    if (a) { std::cout << a << "\n"s; }     // 1 が出力される
    if (b) { std::cout << b << "\n"s; }     // 1 が出力される
    if (0) { std::cout << "boolでは0はfalse扱い"s << "\n"; } // 出力されない
    std::cout << false << "\n"s;    // 0 が出力される

    // bool型の値を正しく出力するには std::boolalpha を出力する
    // 出力後のbool値はtrue/falseで出力される
    std::cout << std::boolalpha;
    std::cout << true << "\n"s << false << "\n"s;

    // 元に戻すには、std::noboolalphaを出力する
    std::cout << std::noboolalpha;
    std::cout << true << "\n"s << false << "\n"s;

    return 0;
}
