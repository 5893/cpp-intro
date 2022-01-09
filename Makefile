# コメントが書ける
# make を実行すると、make build が実行される
# make build を実行した際、all.h.gchファイルが無いもしくはあるが変更されていれば、make all.h.gchが実行される
# 	all.h.gch が存在していて、前回の実行から変更がなければ、make all.h.gchは実行されない

build: all.h.gch
	g++ -std=c++17 -Wall --pedantic-errors -include all.h -o hello main.cpp

all.h.gch:
	g++ -std=c++17 -Wall --pedantic-errors -x c++-header -o all.h.gch all.h
