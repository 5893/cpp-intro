#include "all.h"

int main() {
    // 変数の最初の値は = 値 の代わりに {値}や(値)と書いても良い
    auto a = 1;
    auto b(2);
    auto c{3};

    // 具体的な型を書いた初期化。autoで宣言しても後から代入で別の型は入れられない。
    int i = 123;
    double d = 1.23;
    std::string s = "123"s;

    // 整数の変数
    auto answer = 42;
    std::cout << answer << "\n"s;
    // 浮動小数点の変数
    auto pi = 3.14;
    std::cout << pi << "\n"s;

    // 文字列の変数
    auto question = "Lif, The Universe, and Everything."s;
    std::cout << question;

    return 0;
}
