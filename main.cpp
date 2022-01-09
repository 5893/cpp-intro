#include "all.h"

int main() {
    // std::cout << 1 + "234"s << std::endl;   // error: invalid operands to binary expression ('int' and 'basic_string<char>')
    std::cout << 1 + "234" << std::endl;    // 34 が出力される
    return 0;
}
