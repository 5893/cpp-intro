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

fractional operator + ( fractional &l, fractional &r )
{
    // 分母が同じなら
    if (l.denom == r.denom)
    {
        // 単に分子を足す
        return fractional { l.num + r.num, l.denom };
    }
    else
    {
        // 分母をあわせて分子を足す
        return fractional { l.num * r.denom + r.num * l.denom, l.denom * r.denom };
    }
}

int main() {
    fractional a {1,2};
    fractional b {1,3};
    auto c = a + b;
    std::cout << c.value() << "\n"s;
    return 0;
}
