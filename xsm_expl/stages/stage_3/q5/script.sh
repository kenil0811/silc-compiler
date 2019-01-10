#!/bin/bash

yacc -d q5.y
lex q5.l
gcc y.tab.c lex.yy.c -w -o mid.exe
lex label.l
gcc lex.yy.c -w -o res.exe