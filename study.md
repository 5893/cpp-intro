# コンパイルコマンド

## compiler option

-std=c++17: C++の規格を選択するオプション。これはC++17を指定している

-Wall: コンパイラの警告メッセージをほぼ全て有効にするオプション

--pedantic-errors: C++の規格を厳格に守るオプション。規約違反コードはコンパイルエラーとなる

## 先にヘッダだけコンパイルする

- all.hに標準ライブラリを含めておく
- all.hを .gch ファイルとして先にコンパイルする

```shell
g++ -std=c++17 -Wall --pedantic-errors -x c++-header -o all.h.gch all.h
```

- ヘッダの事前コンパイルの有無で、速度はかなり変わる

```shell
# ヘッダの事前コンパイルをしない
$ time g++ -std=c++17 -Wall --pedantic-errors -o hello main.cpp                                      
g++ -std=c++17 -Wall --pedantic-errors -o hello main.cpp  1.00s user 0.14s system 75% cpu 1.503 total

# ヘッダの事前コンパイルを含める
$ time g++ -std=c++17 -Wall --pedantic-errors -include all.h -o hello main.cpp
g++ -std=c++17 -Wall --pedantic-errors -include all.h -o hello main.cpp  0.25s user 0.06s system 77% cpu 0.398 total
```


## まとめ

```shell
g++ -std=c++17 -Wall --pedantic-errors -include all.h -o 出力ファイル名 入力ファイル名
```
