#include "all.h"

//auto output_all = []( auto first, auto last )
//{
//    for (auto iter = first; iter != last; ++iter)
//    {
//        std::cout << *iter << "\n"s;
//    }
//};

auto output_all = [](auto first, auto last, auto output_iter)
{
    for (auto iter = first; iter != last; ++iter, ++output_iter)
    {
        *output_iter = *iter;
    }
};

int main() {
    // 通常
//    std::vector<int> v = {1,2,3,4,5};
    // 標準入力から受け取るイテレータ
    // 受け取った瞬間 output_all で出力される
//    std::istream_iterator<int> first( std::cin ), last;
    // カレントディレクトリファイル一覧を取得するイテレータ
//    std::filesystem::directory_iterator first("./"), last;    // 何故か動かない……
    // コピーさせることもできる
    std::vector<int> source = {1,2,3,4,5};
    std::vector<int> destination(5);

//    output_all(first, last);
//    output_all(first, last, std::ostream_iterator<int>(std::cout));
    output_all( std::begin(source), std::end(source), std::begin(destination) );

    return 0;
}
