#include "all.h"

int main() {
    int a[5] = { 1,2,3,4,5 };
//    int b[5] = a;   // エラー: コピーできない

    std::array<int, 5> c = {1,2,3,4,5};
    std::array<int, 5> d = c;   // コピーできる
}
