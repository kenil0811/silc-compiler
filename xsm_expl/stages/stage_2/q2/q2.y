%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q2.h"
	#include "q2.c"
	int yylex(void);
	FILE *yyin;
	int reg;
%}

%union {struct tnode *t;}
%token NUM VAR PLUS MINUS MUL DIV BEG END READ WRITE 
%type <t> NUM VAR expr Slist Stmt InStmt OutStmt AsgStmt
%left PLUS MINUS
%left MUL DIV

%%

program	:	BEG Slist END	{
							evaluate($2);
							return;}
		|	BEG END			{return;}
		;
Slist	:	Slist Stmt	{$$ = makeOperatorNode(CONN_,$1,$2);}
		|	Stmt	{$$ = $1;}
		;
Stmt	:	InStmt	{$$ = $1;}
		|	OutStmt	{$$ = $1;}
		|	AsgStmt	{$$ = $1;}
		;
InStmt	:	READ '(' VAR ')' ';'	{$$ = makeIONode(READ_,$3);}
		;
OutStmt	:	WRITE '(' expr ')' ';'	{$$ = makeIONode(WRITE_,$3);}
		;
AsgStmt	:	VAR '=' expr ';'		{$$ = makeOperatorNode(ASSIGN_,$1,$3);}
		;
expr 	: expr PLUS expr	{$$ = makeOperatorNode(PLUS_,$1,$3);}
	 	| expr MINUS expr  	{$$ = makeOperatorNode(MINUS_,$1,$3);}
	 	| expr MUL expr		{$$ = makeOperatorNode(MUL_,$1,$3);}
	 	| expr DIV expr		{$$ = makeOperatorNode(DIV_,$1,$3);}
	 	| '(' expr ')'		{$$ = $2;}
	 	| NUM				{$$ = $1;}
	 	| VAR				{ $$ = $1;}
	 	;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(int argc, char* argv[])
{
	FILE *in = fopen(argv[1], "r");
	if(in)
		yyin = in;

	yyparse();
	return 0;
}