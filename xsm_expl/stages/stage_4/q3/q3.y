%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q3.h"
	#include "q3.c"
	#include "sym_table.c"
	int yylex(void);
	FILE *yyin, *out;
	int reg;
%}

%union {struct tnode *t;}
%token NUM VAR BEG END READ WRITE IF THEN ELSE WHILE DO ENDWHILE ENDIF BREAK CONTINUE REPEAT UNTIL DECL ENDDECL INT STR
%token PLUS MINUS MUL DIV LT GT LTE GTE NE EQ 
%type <t> NUM VAR STR expr Slist Stmt InStmt OutStmt AsgStmt IfStmt WhileStmt BrkStmt DoWhileStmt Type VarList pgm Variable 
%left PLUS MINUS
%left MUL DIV
%nonassoc LT GT LTE GTE EQ NE

%%

progran :	pgm 	{fprintf(out, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
					fprintf(out, "MOV SP,%d\n",location+1);
					codeGen($1, out);
					fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
					return;
					}

pgm	:	Declarations BEG Slist END 	{$$ = $3; }
		|	BEG Slist END	{$$ = $2; }
		|	BEG END			{return;}
		;

Declarations :	DECL DeclList ENDDECL	{}
			 |	DECL ENDDECL	{}
			 ;

DeclList	:	DeclList Decl 	{}
			|	Decl 	{}
			;

Decl 	:	Type VarList ';'	{assignType($1->type, $2);}
		;

Type 	:	INT {$$ = createTypeNode(INTTYPE);}
		|	STR {$$ = createTypeNode(STRTYPE);}
		;

VarList	:	VarList ',' VAR {insertSymbol($3->varname, 1); $3->left=$1; $$=$3;}
		|	VarList ',' VAR '[' NUM ']' {insertSymbol($3->varname, $5->val); $3->left=$1; $$=$3;}
		|	VAR '[' NUM ']'	{insertSymbol($1->varname, $3->val); $1->left=NULL; $$=$1;}
		|	VAR		{insertSymbol($1->varname, 1); $1->left=NULL; $$=$1;}	
		;

Slist	:	Slist Stmt	{$$ = makeOperatorNode(CONN_, NOTYPE_, $1,$2);}
		|	Stmt	{$$ = $1;}
		;

Stmt	:	InStmt	{$$ = $1;}
		|	OutStmt	{$$ = $1;}
		|	AsgStmt	{$$ = $1;}
		|	IfStmt	{$$ = $1;}
		|	WhileStmt	{$$ = $1;}
		|	BrkStmt	{$$ = $1;}
		|	DoWhileStmt	{$$ = $1;}
		;

InStmt	:	READ '(' Variable ')' ';'	{$$ = makeIONode(READ_, $3);}
		;

OutStmt	:	WRITE '(' expr ')' ';'	{$$ = makeIONode(WRITE_, $3);}
		;

AsgStmt	:	Variable '=' expr ';'		{$$ = makeOperatorNode(ASSIGN_, NOTYPE_, $1,$3);}
		;

IfStmt	: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'	{$$ = makeIfElseNode(IF_, BOOLTYPE, $3, $6, $8);}
		| IF '(' expr ')' THEN Slist ENDIF ';'				{$$ = makeIfElseNode(IF_, BOOLTYPE, $3, $6, NULL);}
		;

WhileStmt	: WHILE '(' expr ')' DO Slist ENDWHILE ';'	{$$ = makeOperatorNode(WHILE_, BOOLTYPE, $3, $6);}
			;

BrkStmt	:	BREAK ';'		{$$ = makeOperatorNode(BREAK_, NOTYPE_, NULL, NULL);}
		|	CONTINUE ';'	{$$ = makeOperatorNode(CONT_, NOTYPE_, NULL, NULL);}
		;

DoWhileStmt	: DO Slist WHILE '(' expr ')' ';'	{$$ = makeOperatorNode(DOWHILE_, BOOLTYPE, $2, $5);}
			| REPEAT Slist UNTIL '(' expr ')' ';'	{$$ = makeOperatorNode(DOWHILE_, BOOLTYPE, $2, $5);}
			;
				

expr 	:	expr PLUS expr	{$$ = makeOperatorNode(PLUS_, INTTYPE, $1,$3);}
	 	|	expr MINUS expr {$$ = makeOperatorNode(MINUS_, INTTYPE, $1,$3);}
	 	| 	expr MUL expr	{$$ = makeOperatorNode(MUL_, INTTYPE, $1,$3);}
	 	|   expr DIV expr	{$$ = makeOperatorNode(DIV_, INTTYPE, $1,$3);}
	 	|	expr LT expr	{$$ = makeOperatorNode(LT_, BOOLTYPE, $1,$3);}
		|	expr GT expr	{$$ = makeOperatorNode(GT_, BOOLTYPE, $1,$3);}
		|	expr LTE expr	{$$ = makeOperatorNode(LTE_, BOOLTYPE, $1,$3);}
		|	expr GTE expr	{$$ = makeOperatorNode(GTE_, BOOLTYPE, $1,$3);}
		|	expr EQ expr	{$$ = makeOperatorNode(EQ_, BOOLTYPE, $1,$3);}
		|	expr NE expr	{$$ = makeOperatorNode(NE_, BOOLTYPE, $1,$3);}
		|  '(' expr ')'		{$$ = $2;}
	 	|   NUM				{$$ = $1;}
	 	|   Variable		{$$ = $1;}
	 	|	STR 			{$$ = $1;}
		;

Variable: 	VAR 	{if(lookup($1->varname) == NULL) {
						printf("%s undeclared\n", $1->varname);	exit(0);}
					$$=$1;
					}
		|	VAR '[' expr ']'	{if(lookup($1->varname)==NULL) {
									printf("%s undeclared\n", $1->varname); exit(0);}
								$1->left = $3;
								$$ = $1;
								}
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

	yyparse();
	
	return 0;
}