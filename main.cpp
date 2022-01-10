#include "all.h"

// 複数設定も可能
// T N : T型の値N
template < typename T, T N >
T value()
{
    return N;
}

int main() {
    value<int, 1>();
    value<short, 1>();
}
