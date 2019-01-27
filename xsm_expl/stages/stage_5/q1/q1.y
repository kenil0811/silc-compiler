%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q1.h"
	#include "q1.c"
	#include "sym_table.c"
	int yylex(void);
	FILE *yyin, *out;
	int reg;
%}

%union {
	struct tnode *t;
	struct Param *p;
}
%token NUM STR1 VAR BEG END READ WRITE IF THEN ELSE WHILE DO ENDWHILE ENDIF BREAK CONTINUE REPEAT UNTIL DECL ENDDECL INT STR MAIN
%token PLUS MINUS MUL DIV MOD LT GT LTE GTE NE EQ
%type <t> NUM VAR STR1 STR expr Slist Stmt InStmt OutStmt AsgStmt IfStmt WhileStmt BrkStmt DoWhileStmt Type VarList pgm Variable 
%nonassoc LT GT LTE GTE EQ NE
%left PLUS MINUS
%left MUL DIV MOD

%%

progran : GDeclBlock FDefBlock MainBlock {fprintf(out, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
										fprintf(out, "MOV SP,%d\n",location+1);
										codeGen($2, out);
										freeregs();
										codeGen($3, out);
										fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
										return;
										}
		;

GDeclBlock	: DECL GDeclList END {}
			;

GDeclList	: GDeclList GDecl 	{}
			| GDecl	{}
			;

GDecl 	: Type GVarList	';'	{assignType($1->type, $2);}
		;

GVarList: GVarList ',' GVar	{$3->left=$1; $$=$3;}
		| GVar	{$1->left=NULL; $$=$1;}			


GVar	: VAR	{insertSymbol($1->varname, 1, 1); $1->left=NULL; $$=$1;}
		| VAR '[' NUM ']'	{insertSymbol($1->varname, $3->val, 1); $1->left=NULL; $$=$1;}
		| VAR '[' NUM ']' '[' NUM ']'  {insertSymbol($1->varname, $3->val, $6->val); $1->left=NULL; $$=$1;}
		| MUL VAR	{insertSymbol($2->varname, 1, 1); $2->left=NULL; $$=$2;}
		| Fname '(' ParamList ')'	{insertFunction($1->varname, $3); $$=$1;}
		;

Fname	: VAR	{$$=$1; currFunc=strdup($1->name);}

ParamList	: ParamList ',' Param	{$3->next=$1; $$=$3;}
			| Param	{$1->next=NULL; $$=$1;}
			;

Param	: TYPE VAR	{$$ = createParam($1->type, $2->varname);}
		;


FDefBlock	: FDefBlock FDef	{}
			| FDef	{}
			;

FDef	: TYPE Fname2 '(' VParamList ')' '{' LDeclBlock Body '}'	{}
		;

Fname2	: VAR	{struct Gsymbol *entry = lookup($1->name);
				if(entry == NULL) {
					printf("Function not declared\n"); exit(0);}
				createLocalTable($1->name);
				currFunc = strdup($1->name);
				}
		;

VParamList	: ParamList	{checkParamValidity(currFunc);}



LDeclBlock	: DECL LDeclList END {}
			| DECL END	{}
			;

LDeclList	: LDeclList LDecl 	{}
			| LDecl	{}
			;

LDecl 	: Type LVarList	';'	{}
		;

LVarList: LVarList ',' LVar	{}
		|			

LVar	: VAR	{}
		| MUL VAR	{}
		; 

Body	: BEG Slist RetStmt END	{}
		;

RetStmt : RETURN expr ';'	{}
		;

MainBlock	: INT MAIN '(' ')' '{' LDeclBlock Body '}'	{}
			;



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

VarList	:	VarList ',' VAR {insertSymbol($3->varname, 1, 1); $3->left=$1; $$=$3;}
		|	VarList ',' VAR '[' NUM ']' {insertSymbol($3->varname, $5->val, 1); $3->left=$1; $$=$3;}
		|	VarList ',' VAR '[' NUM ']' '[' NUM ']'	{ insertSymbol($3->varname, $5->val, $8->val); $3->left=$1; $$=$3;}
		|	VarList ',' MUL VAR 	{insertSymbol($4->varname, 1, 1); $4->left=$1; $$=$4;}
		|	VAR '[' NUM ']'	{insertSymbol($1->varname, $3->val, 1); $1->left=NULL; $$=$1;}
		|	VAR '[' NUM ']' '[' NUM ']'	{  insertSymbol($1->varname, $3->val, $6->val); $1->left=NULL; $$=$1;}
		|	VAR		{insertSymbol($1->varname, 1, 1); $1->left=NULL; $$=$1;}	
		|	MUL VAR 		{insertSymbol($2->varname, 1, 1); $2->left=NULL; $$=$2;}
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

AsgStmt	:	Variable '=' expr ';'		{  $$ = makeAssignNode(ASSIGN_, NOTYPE_, $1,$3);}
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
	 	|   expr MOD expr	{$$ = makeOperatorNode(MOD_, INTTYPE, $1,$3);}
	 	|	expr LT expr	{$$ = makeOperatorNode(LT_, BOOLTYPE, $1,$3);}
		|	expr GT expr	{$$ = makeOperatorNode(GT_, BOOLTYPE, $1,$3);}
		|	expr LTE expr	{$$ = makeOperatorNode(LTE_, BOOLTYPE, $1,$3);}
		|	expr GTE expr	{$$ = makeOperatorNode(GTE_, BOOLTYPE, $1,$3);}
		|	expr EQ expr	{$$ = makeOperatorNode(EQ_, BOOLTYPE, $1,$3);}
		|	expr NE expr	{$$ = makeOperatorNode(NE_, BOOLTYPE, $1,$3);}
		|  '(' expr ')'		{$$ = $2;}
	 	|   NUM				{$$ = $1;}
	 	|   Variable		{$$ = $1;}
	 	|	STR1 			{$$ = $1; }
	 	|	VAR '(' ')'		{}
	 	|	VAR '(' ArgList ')'	{}
		;

ArgList	:	ArgList ',' expr	{}
		|	expr	{}
		;		

Variable: 	VAR 	{struct Gsymbol *temp = lookup($1->varname);
					if(temp == NULL) {
						printf("%s undeclared\n", $1->varname);	exit(0);}
					$1->nodetype = VAR_;
					$1->type = temp->type;
					$$=$1;
					}
		|	VAR '[' expr ']'	{struct Gsymbol *temp = lookup($1->varname);
								if(temp==NULL) {
									printf("%s undeclared\n", $1->varname); exit(0);}
								$1->left = $3;
								$1->nodetype = ARR_;
								$1->type = temp->type;
								$$ = $1;
								}
		|	VAR '[' expr ']' '[' expr ']'	{struct Gsymbol *temp = lookup($1->varname);
											if(temp==NULL) {
												printf("%s undeclared\n", $1->varname); exit(0); }
											$1->left = $3;
											$1->right = $6;
											$1->nodetype = DARR_;
											$1->type = temp->type;
											$$ = $1;
											}
		|	MUL VAR 	{struct Gsymbol *temp = lookup($2->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", $2->varname); exit(0);}
						$2->nodetype = PTR_;
						$2->type = temp->type;
						$$ = $2;

						}
		|	'&' VAR 	{struct Gsymbol *temp = lookup($2->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", $2->varname); exit(0);}
						$2->nodetype = ADDPTR_;
						$2->type = temp->type;
						$$ = $2;}
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