#!/bin/bash

yacc -d q2.y
lex q2.l
gcc y.tab.c lex.yy.c -w -o mid.exe
lex label.l
gcc lex.yy.c -w -o res.exe