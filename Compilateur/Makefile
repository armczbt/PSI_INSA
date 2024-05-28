.PHONY: all clean

all: lex

lex.tab.c lex.tab.h:	lex.y
	bison -t -v -d lex.y

lex.yy.c: lex.l lex.tab.h
	flex lex.l

lex: lex.yy.c lex.tab.c lex.tab.h tab_symbol.c tab_symbol.h tab_instructions.c tab_instructions.h
	gcc -o lex lex.tab.c lex.yy.c tab_symbol.c tab_instructions.c


clean:
	rm lex lex.tab.c lex.yy.c lex.tab.h lex.output

test: all
	cat test.c | ./lex > f.txt
	python3 interp.py f.txt 
