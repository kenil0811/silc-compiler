%{
	#include <stdio.h>
	#include "y.tab.h"
	#include "q1.h"
	YYSTYPE yylval;
	char *arr;
	int number;
%}



%%

"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"%"	{return MOD;}
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
"repeat"	{return REPEAT;}
"until"	{return UNTIL;}
"decl"	{return DECL;}
"enddecl"	{return ENDDECL;}
"int"	{return INT;}
"str"	{return STR;}
[ \t]	{}
"["		{return *yytext;}
"]"		{return *yytext;}
[()=;,&]	{return *yytext;}
[\n]	{}
[0-9]+	{number = atoi(yytext); yylval.t = makeLeafNumNode(number, INTTYPE, NUM_); return NUM;}
[a-zA-Z]+[a-zA-Z0-9_]*	{arr= (char *)malloc(20*sizeof(char)); strcpy(arr,yytext);
						yylval.t = makeLeafVarNode(arr, VAR_); return VAR;}
"\"".*"\""	{arr=(char *)malloc(yyleng*sizeof(char));
			for(int i=1; i<yyleng-1; i++)
				arr[i-1]=yytext[i];
			yylval.t = makeLeafStringNode(arr, STRTYPE, STR_);
			return STR1;
			}

.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}