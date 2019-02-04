#!/bin/bash

yacc -d q1.y
lex q1.l
gcc y.tab.c lex.yy.c -w -o mid.exe
lex label.l
gcc lex.yy.c -w -o res.exe
