# コメントが書ける

binary_name = hello
entry_point = main.cpp
gcc_options = -std=c++17 -Wall --pedantic-errors

# make コマンドの引数に何もなければ、先頭のルールが実行される
run: $(binary_name)
	./$(binary_name)

# runで実行する為のバイナリがなければ、make buildする
$(binary_name): build

# make build を実行した際、all.h.gchファイルが無いもしくはあるが変更されていれば、make all.h.gchが実行される
# 	all.h.gch が存在していて、前回の実行から変更がなければ、make all.h.gchは実行されない
build: $(entry_point) all.h.gch
	g++ $(gcc_options) -include all.h -o $(binary_name) $(entry_point)

# $@ はターゲット名になる
# $< は事前要件の先頭
# $^ はすべての事前要件の空白区切り
all.h.gch: all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

clean:
	rm -f $(binary_name) all.h.gch

# make runをしても、runというファイルが存在していると実行できない為、.PHONYの事前要件としてrunを定義しておく
# これがないと、 make: `run' is up to date. となってしまう。
.PHONY: run clean
