#!/bin/bash

yacc -d q4.y
lex q4.l
gcc y.tab.c lex.yy.c -w -o mid.exe
lex label.l
gcc lex.yy.c -w -o res.exe