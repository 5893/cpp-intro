#include "all.h"

int main() {
    auto print = [](auto s){ std::cout << s << "\n"s ; } ;
    int a[5] ;
    print( sizeof(a) ) ;        // 20: 要素型 * 要素数になる為、 5 * 4 = 20 となる
    print( sizeof(int) );       // 4
    print( sizeof(a) / sizeof(int) );   // こうやって要素数を出力すると良い

    double b [5] ;
    print( sizeof(b) ) ;            // 40: 要素型 * 要素数になる為、 5 * 8 = 40 となる
    print( sizeof(double) ) ;       // 8
    print( sizeof(b) / sizeof(double) );   // こうやって要素数を出力すると良い
}
