%{
	#include <stdio.h>
	#include "y.tab.h"
	#include "q4.h"
	YYSTYPE yylval;
	int number;
%}

%%

[0-9]+	{number = atoi(yytext); yylval.t = makeLeafNumNode(number, INT_); return NUM;}
[a-z]	{yylval.t = makeLeafVarNode(yytext[0], INT_); return VAR;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"<"	{return LT;}
">"	{return GT;}
"<="	{return LTE;}
">="	{return GTE;}
"=="	{return EQ;}
"!="	{return NE;}
"begin"	{return BEG;}
"end"	{return END;}
"read"	{return READ;}
"write"	{return WRITE;}
"if" 	{return IF;}
"then"	{return THEN;}
"else"	{return ELSE;}
"while"	{return WHILE;}
"do"	{return DO;}
"endif"	{return ENDIF;}
"endwhile"	{return ENDWHILE;}
"break"	{return BREAK;}
"continue"	{return CONTINUE;}
[ \t]	{}
[()=;]	{return *yytext;}
[\n]	{}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}