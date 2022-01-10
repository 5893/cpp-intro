#include "all.h"

namespace very_long_name {
    int f() { return 0; }
}

namespace A::B::C {
    int f() { return 0; }
}

inline namespace Inline {
    int a { };
}

using namespace std;

int main() {
    // 名前空間エイリアス
    namespace vln = very_long_name;
    vln::f();

    // 入れ子に対しても使える
    namespace D = A::B::C;
    D::f();

    cout << "usingすると、namespace::部分を省略できる\n"s;

    // inline namespaceは名前空間を指定しないで使うことができる
    a = 0;
    Inline::a = 0;

    return 0;
}
