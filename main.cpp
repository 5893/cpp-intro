#include "all.h"

int main() {
    // 整数型intの値を保持するvector
    std::vector<int> vi;

    // 浮動小数点型doubleの値を保持するvector
    std::vector<double> vd;

    // 文字列型std::stringの値を保持するvector
    std::vector<std::string> vs;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 4; i <= 1000; i++)
    {
        v.push_back(i);
    }

    std::cout << "v's length: "s << v.size() << "\n"s;

    // vの中身全部出力する
    for (int i : v)
    {
        std::cout << i << "\n"s;
    }

    return 0;
}
