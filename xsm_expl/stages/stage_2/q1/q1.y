%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q1.h"
	#include "q1.c"
	int yylex(void);
	FILE *yyin, *out;
	int reg;
%}

%union {struct tnode *t;}
%token NUM VAR PLUS MINUS MUL DIV BEG END READ WRITE 
%type <t> NUM VAR expr Slist Stmt InStmt OutStmt AsgStmt
%left PLUS MINUS
%left MUL DIV

%%

program	:	BEG Slist END	{codeGen($2, out);
							return;}
		|	BEG END	{return;}
		;
Slist	:	Slist Stmt	{$$ = makeOperatorNode('c',$1,$2);}
		|	Stmt	{$$ = $1;}
		;
Stmt	:	InStmt	{$$ = $1;}
		|	OutStmt	{$$ = $1;}
		|	AsgStmt	{$$ = $1;}
		;
InStmt	:	READ '(' VAR ')' ';'	{$$ = makeIONode('r',$3);}
		;
OutStmt	:	WRITE '(' expr ')' ';'	{$$ = makeIONode('w',$3);}
		;
AsgStmt	:	VAR '=' expr ';'		{$$ = makeOperatorNode('=',$1,$3);}
		;
expr 	: expr PLUS expr	{$$ = makeOperatorNode('+',$1,$3);}
	 	| expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 	| expr MUL expr		{$$ = makeOperatorNode('*',$1,$3);}
	 	| expr DIV expr		{$$ = makeOperatorNode('/',$1,$3);}
	 	| '(' expr ')'		{$$ = $2;}
	 	| NUM				{$$ = $1;}
	 	| VAR				{$$ = $1;}
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

	out = fopen("out.xsm", "w");
	fprintf(out, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(out, "MOV SP,4122\n");

	yyparse();
	fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
	return 0;
}