%{
	#include <stdio.h>
	#include "y.tab.h"
	#include "q2.h"
	YYSTYPE yylval;
	int number;
%}

%%

[0-9]+	{number = atoi(yytext); yylval.t = makeLeafNumNode(number); return NUM;}
[a-z]	{yylval.t = makeLeafVarNode(yytext[0]); return VAR;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"begin"	{return BEG;}
"end"	{return END;}
"read"	{return READ;}
"write"	{return WRITE;}
[ \t]	{}
[()=;]	{return *yytext;}
[\n]	{}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}