#include "all.h"

void assign_3( int x )
{
    x = 3;  // コピーされた x は 元の a とは違うアドレスを指しているので、代入しても a には反映されない
}

void assign_3_ref (int & x )
{
    x = 3;
}

int main() {
    {
        int a = 1;
        int b = 2;

        b = a;
        // b == 1 aの値がコピーされて代入されている

        b = 3;
        // a == 1
        // b == 3

        assign_3( a );  // 値はコピーされて渡されている

        // a == 1
    }

    {
        int a = 1;
        int & ref = a;  // 参照 ref は a を参照する

        ref = 3;

        // a == 3
        // ref は a なので同じく 3

        ref = 1;    // 一旦戻して
        assign_3_ref(a);  // 関数は参照として受け取っているので、関数側でaへアクセス可能

        // a == 3
    }

    return 0;
}
