#include "all.h"

int main() {
    std::vector<int> v;

    // std::size_t型
    // 負の値が使えない整数型
    std::size_t size = v.size();

    v.push_back(0);

    // std::size_t型
    std::size_t index = 0;
    auto _val_0 = v.at( index );

    return 0;
}
