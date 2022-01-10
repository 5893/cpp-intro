#include "all.h"

// テンプレートは型を引数に取ることができる
template < typename T >
T twice(T n)
{
    return n * 2;
}

template < typename T >
void f(T const & x)
{
    std::cout << x << "\n"s;
}

// テンプレート引数は型だけでなく、整数型の値を渡すこともできる
template < int N >
void i_number()
{
    std::cout << N << "\n"s;
}

int main() {
    // テンプレートが「使われる時」に、テンプレート引数に対する具体的な型が決定する。
    twice(123);     // int
    twice(1.23);    // double

    // T == int
    f(0);
    // T == dobule
    f(0.0);
    // T == std::string
    f("hello"s);

    // 明示的にテンプレート引数の型を指定することもできる
    f<int>(0);
    f<double>(0);   // int 0 から double 0.0 への変換が行われる

    // 整数型の値を渡す
    i_number<0>();
    i_number<123>();

    // ※コンパイル時にすべてが決定されるので、コンパイル時にテンプレート引数が不明な場合はエラーとなる
    int x {};
    std::cin >> x;
    // エラー (int型ではあるが、値が不明)
//    i_number<x>();
}
