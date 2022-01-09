#include "all.h"

int main() {
    std::cout << "Hello, World!\n"
              << "改行可能\n"
                 // operator << しなくても出力的には連結される
                 "\\を使う場合は更に" + "エスケープが必要"s // operator + で連結も可能
              << std::endl;
    return 0;
}
