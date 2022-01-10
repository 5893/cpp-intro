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

template < typename Array>
void print( Array & c )
{
    for ( std::size_t i = 0; i != c.size(); ++i )
    {
        std::cout << c[i] << "\n"s;
    }
}

int main() {
    using array = std::array<int, 5>;
    array a = {1,2,3,4,5};

    array::value_type x = 0;
    array::reference ref = a[0];

    print(a);
}
