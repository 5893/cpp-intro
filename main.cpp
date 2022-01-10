#include "all.h"

int main() {

    // 短絡評価
    // 左から順に最小に評価するので、この場合はbは評価されない ← 実行すらされない

    // ラムダ式は [](引数){ 処理 } で定義可能
    auto a = []()
    {
        std::cout << "a\n"s;
        return false;
    };
    auto b = []()
    {
        std::cout << "b\n"s;
        return true;
    };

    bool c = a() && b();
    std::cout << std::boolalpha << c;

    return 0;
}
