#include "all.h"

int main() {
    // エイリアス宣言
    using Number = int;

    // Numberはintの別名
    Number x = 0;

    // 昔はこういう型宣言の書き方を使っている。
    // ライブラリを読むときには頻出なので覚えておくこと
    typedef int Number;

    // この書き方はコンパイル通ってしまうが、型によっては通らないものがあるらしい
    int typedef Number;

    return 0;
}
