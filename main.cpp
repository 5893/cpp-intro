#include "all.h"

template < typename T, std::size_t N >
struct array
{
    using value_type = T;
    using reference = T &;

    using size_type = std::size_t;

    value_type storage[N];

    reference operator [] ( size_type i )
    {
        return storage[i];
    }
};

int main() {
    using array = std::array<int, 5>;
    array a = {1,2,3,4,5};

    array::value_type x = 0;
    array::reference ref = a[0];

    auto print = [](auto first, auto last) {
        for (auto iter = first; iter != last; ++iter)
        {
            std::cout << *iter << "\n"s;
        }
    };
    print( a.begin(), a.end() );
}
