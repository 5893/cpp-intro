#include "all.h"

namespace very_long_name {
    int f() { return 0; }
}

namespace A::B::C {
    int f() { return 0; }
}

int main() {
    // 名前空間エイリアス
    namespace vln = very_long_name;
    vln::f();

    // 入れ子に対しても使える
    namespace D = A::B::C;
    D::f();

    return 0;
}
