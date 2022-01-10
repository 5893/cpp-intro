#include "all.h"

int main() {
    {
        std::vector<int> v = {1,2,3,4,5};
        auto i = std::begin(v); // イテレータの取得

        // イテレータの参照する要素へのアクセスは * 演算しを使う
        int x = *i; // 1

        *i = 0; // v = {0,2,3,4,5} となる

        // イテレータの参照する要素を変更する

        *i; // 0
        ++i;
        *i; // 2
        ++i;
        *i; // 3

        --i;
        *i; // 2
        --i;
        *i; // 0
    }

    {
        // vectorの全要素を先頭からイテレータでアクセスするには、要素数分だけ++iすれば良いということ
        std::vector<int> v = {1, 2, 3, 4, 5};
        auto iter = std::begin(v);
        for (std::size_t i = 0; i < std::size(v); ++i, ++iter)
        {
            std::cout << *iter << "\n"s;
        }
    }

    {
        // beginではなくendでイテレータを取得する
        // end 最後の要素の”次”を示す
        std::vector<int> v = {1,2,3,4,5};
        auto i = std::end(v);

        // *i; // エラー
        --i;    // 最後の要素を示す
        std::cout << "auto i = end(v) → --i の結果 *i = "s
            << *i << "\n"s;   // 5
    }

    {
        // endを使って、要素全てへアクセスするループをもう少し意味的に書き直すことができる
        std::vector<int> v = {1,2,3,4,5};
        for (auto iter = std::begin(v), last = std::end(v);
            iter != last; ++iter)
        {
            std::cout << *iter << "\n"s;
        }
    }

    return 0;
}
