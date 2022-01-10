#include "all.h"

int main() {
    // int型の最小値と最大値
    std::cout
        << std::numeric_limits<int>::min() << "\n"s
        << std::numeric_limits<int>::max() << "\n"s;

    // unsigned int型の最小値と最大値
    std::cout
        << std::numeric_limits<unsigned int>::min() << "\n"s
        << std::numeric_limits<unsigned int>::max() << "\n"s;

    // 最小値に-1したり、最大値に+1したりすると、
    // 最小値は最大値に、最大値は最小値に反転する → ビットで考えると自然
    int min = std::numeric_limits<int>::min() ;
    int max = std::numeric_limits<int>::max() ;

    int min_minus_one = min - 1 ;
    int max_plus_one = max + 1 ;

    std::cout << "min="s << min << "\n"s << "max="s << max << "\n"s
              << "min-1="s << min_minus_one << "\n"s << "max+1=" << max_plus_one << "\n"s;

    return 0;
}
