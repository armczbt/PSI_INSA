flex -o lex.c lex.l || (err "step invalid: flex")
gcc -Wall -Werror lex.c -o lex || (err "step invalid: gcc")

./lex < test.c > res.txt
