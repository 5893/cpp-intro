#include "all.h"

struct fractional
{
    int num;
    int denom;

    double value()
    {
        return static_cast<double>(num) / static_cast<double>(denom);
    }

    fractional(int num, int denom)
    {
        // コンストラクタ処理
        fractional::num = num;
        fractional::denom = denom;
    }

    ~fractional()
    {
        // デストラクタ処理
    }
};

int main() {
    fractional x { 1, 2 };
    std::cout << x.value() << "\n"s;

    {
        // コンストラクタで初期化
        auto a = fractional(5, 5);
    }   // スコープを抜けて破棄される→デストラクタ発火

    return 0;
}
