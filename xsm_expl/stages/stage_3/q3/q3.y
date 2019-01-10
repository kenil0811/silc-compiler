%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q3.h"
	#include "q3.c"
	int yylex(void);
	FILE *yyin, *out;
	int reg;
%}

%union {struct tnode *t;}
%token NUM VAR BEG END READ WRITE IF THEN ELSE WHILE DO ENDWHILE ENDIF 
%token PLUS MINUS MUL DIV LT GT LTE GTE NE EQ 
%type <t> NUM VAR expr Slist Stmt InStmt OutStmt AsgStmt IfStmt WhileStmt
%left PLUS MINUS
%left MUL DIV
%nonassoc LT GT LTE GTE EQ NE

%%

program	:	BEG Slist END	{codeGen($2, out);
							return;}
		|	BEG END			{return;}
		;
Slist	:	Slist Stmt	{$$ = makeOperatorNode(CONN_, NOTYPE_, $1,$2);}
		|	Stmt	{$$ = $1;}
		;
Stmt	:	InStmt	{$$ = $1;}
		|	OutStmt	{$$ = $1;}
		|	AsgStmt	{$$ = $1;}
		|	IfStmt	{$$ = $1;}
		|	WhileStmt	{$$ = $1;}
		;
InStmt	:	READ '(' VAR ')' ';'	{$$ = makeIONode(READ_, INT_, $3);}
		;
OutStmt	:	WRITE '(' expr ')' ';'	{$$ = makeIONode(WRITE_, INT_, $3);}
		;
AsgStmt	:	VAR '=' expr ';'		{$$ = makeOperatorNode(ASSIGN_, NOTYPE_, $1,$3);}
		;
IfStmt	: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'	{$$ = makeIfElseNode(IF_, BOOL_, $3, $6, $8);}
		| IF '(' expr ')' THEN Slist ENDIF ';'				{$$ = makeIfElseNode(IF_, BOOL_, $3, $6, NULL);}
		;
WhileStmt	: WHILE '(' expr ')' DO Slist ENDWHILE ';'	{$$ = makeOperatorNode(WHILE_, BOOL_, $3, $6);}
			;
expr 	:	expr PLUS expr	{$$ = makeOperatorNode(PLUS_, INT_, $1,$3);}
	 	|	expr MINUS expr {$$ = makeOperatorNode(MINUS_, INT_, $1,$3);}
	 	| 	expr MUL expr	{$$ = makeOperatorNode(MUL_, INT_, $1,$3);}
	 	|   expr DIV expr	{$$ = makeOperatorNode(DIV_, INT_, $1,$3);}
	 	|	expr LT expr	{$$ = makeOperatorNode(LT_, BOOL_, $1,$3);}
		|	expr GT expr	{$$ = makeOperatorNode(GT_, BOOL_, $1,$3);}
		|	expr LTE expr	{$$ = makeOperatorNode(LTE_, BOOL_, $1,$3);}
		|	expr GTE expr	{$$ = makeOperatorNode(GTE_, BOOL_, $1,$3);}
		|	expr EQ expr	{$$ = makeOperatorNode(EQ_, BOOL_, $1,$3);}
		|	expr NE expr	{$$ = makeOperatorNode(NE_, BOOL_, $1,$3);}
		|  '(' expr ')'		{$$ = $2;}
	 	|   NUM				{$$ = $1;}
	 	|   VAR				{$$ = $1;}
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

	out = fopen("temp", "w");
	fprintf(out, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(out, "MOV SP,4122\n");

	yyparse();
	fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
	return 0;
}