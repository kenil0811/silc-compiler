#!/bin/bash

yacc -d q3.y
lex q3.l
gcc y.tab.c lex.yy.c -w -o mid.exe
lex label.l
gcc lex.yy.c -w -o res.exe