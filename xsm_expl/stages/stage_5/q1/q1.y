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
%token NUM STR1 VAR BEG END READ WRITE IF THEN ELSE WHILE DO ENDWHILE ENDIF BREAK CONTINUE REPEAT UNTIL DECL ENDDECL INT STR MAIN RETURN
%token PLUS MINUS MUL DIV MOD LT GT LTE GTE NE EQ AND OR
%type <t> NUM VAR STR1 STR expr Slist Stmt InStmt OutStmt AsgStmt IfStmt WhileStmt BrkStmt DoWhileStmt
%type <t> RetStmt Type Variable FDefBlock MainBlock GDecl GVarList LVarList LVar GVar Fname Body FDef ArgList
%type <p> ParamList Param ParamDeclList
%nonassoc LT GT LTE GTE EQ NE
%left PLUS MINUS
%left MUL DIV MOD

%%

program : GDeclBlock FDefBlock MainBlock {showTables();
										fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
										fprintf(out, "MOV SP,%d\n",location+1);
										//printf("lol\n");
										codeGen($2, out);
										freeAllReg();
										codeGen($3, out);
										fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
										return;
										}
		| GDeclBlock MainBlock {fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
								fprintf(out, "MOV SP,%d\n",location+1);
								codeGen($2, out);
								fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
								return; 
								}
		;

GDeclBlock	: DECL GDeclList ENDDECL {}
            |   {}
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
		| Fname '(' ParamDeclList ')'	{insertFunction($1->varname, $3); $$=$1;}
		;

Fname	: VAR	{$$=$1; currfunc=strdup($1->varname);}

ParamDeclList	: ParamDeclList ',' Param	{if(checkParamValidity($1,$3)==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					$3->next=$1; $$=$3;}
			| Param	{$1->next=NULL; $$=$1;}
			;

ParamList	: ParamList ',' Param	{if(checkParamValidity($1,$3)==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					$1->next=$3; $$=$1;}
			| Param	{$1->next=NULL; $$=$1;}
			;

Param	: Type VAR	{$$ = createParam($1->type, $2->varname);}
		;


FDefBlock	: FDefBlock FDef	{$2->left = $1; $$=$2;}
			| FDef	{$$=$1;}
			;

FDef	: Type Fname2 '(' VParamList ')' '{' LDeclBlock Body '}'	{checkTypeValidity(currfunc, $1->type); 
																	$$ = makeFuncNode($1->type, currfunc, $8);
																	resetLocalSpace();
																	}
		;

Fname2	: VAR	{struct Gsymbol *entry = gLookup($1->varname);
				if(entry == NULL) {
					printf("Function not declared\n"); exit(0);}
				createLocalTable($1->varname);
				currfunc = strdup($1->varname);
				}
		;

VParamList	: ParamList	{checkAndCreateParam(currfunc, $1);}


 
LDeclBlock	: DECL LDeclList ENDDECL {}
		| 	{}
		;

LDeclList	: LDeclList LDecl 	{}
		| LDecl	{}
		;

LDecl 	: Type LVarList	';'	{assignLocType($1->type, $2);}
		;

LVarList: LVarList ',' LVar	{$3->left=$1; $$=$3;}
	| LVar	{$1->left=NULL; $$=$1;}			

LVar	: VAR	{insertLocSymbol($1->varname); $1->left=NULL; $$=$1;}
	| MUL VAR	{insertLocSymbol($2->varname); $2->left=NULL; $$=$2;}
	; 

Body	: BEG Slist RetStmt END	{$$ = makeBodyNode($2, $3);}
	;

RetStmt : RETURN expr ';'	{$$ = makeReturnNode($2, currfunc);}
	;

MainBlock	: INT Main '(' ')' '{' LDeclBlock Body '}'	{$$ = makeFuncNode(INTTYPE, "main", $7);}
			;

Main    : MAIN {insertMain("main", INTTYPE);
				createLocalTable("main");
				currfunc = strdup("main");}

Type 	:	INT {$$ = createTypeNode(INTTYPE);}
		|	STR {$$ = createTypeNode(STRTYPE);}
		;


Slist	:	Slist Stmt	{$$ = makeOperatorNode(CONN_, NOTYPE_, $1,$2);}
		|	Stmt	{$$ = $1;}
		|   {$$=NULL;}
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
		|	expr AND expr	{$$ = makeOperatorNode(AND_, BOOLTYPE, $1, $3);}
		|	expr OR expr	{$$ = makeOperatorNode(OR_, BOOLTYPE, $1,$3);}
		|  '(' expr ')'		{$$ = $2;}
	 	|   NUM				{$$ = $1;}
	 	|   Variable		{$$ = $1;}
	 	|	STR1 			{$$ = $1; }
	 	|	Variable '(' ')'		{}
	 	|	Variable '(' ArgList ')'	{$$=makeFuncCallNode($1->varname, $3);}
		;

ArgList	:	ArgList ',' expr	{$3->mid=$1; $$=$3;}
		|	expr	{ $$=$1; $1->mid=NULL;}
		;		

Variable: 	VAR 	{struct TableEntry *temp = lookup($1->varname);
					if(temp == NULL) {
						printf("%s undeclared\n", $1->varname);	exit(0);}
					$1->nodetype = VAR_;
					if(temp->gentry!=NULL)
						$1->type = temp->gentry->type;
					else
						$1->type = temp->locentry->type;
					$$=$1;
					}
		|	VAR '[' expr ']'	{struct TableEntry *temp = lookup($1->varname);
								if(temp==NULL) {
									printf("%s undeclared\n", $1->varname); exit(0);}
								$1->left = $3;
								$1->nodetype = ARR_;
								if(temp->gentry!=NULL)
									$1->type = temp->gentry->type;
								else
									$1->type = temp->locentry->type;
								$$ = $1;
								}
		|	VAR '[' expr ']' '[' expr ']'	{struct TableEntry *temp = lookup($1->varname);
											if(temp==NULL) {
												printf("%s undeclared\n", $1->varname); exit(0); }
											$1->left = $3;
											$1->right = $6;
											$1->nodetype = DARR_;
											if(temp->gentry!=NULL)
												$1->type = temp->gentry->type;
											else
												$1->type = temp->locentry->type;
											$$ = $1;
											}
		|	MUL VAR 	{struct TableEntry *temp = lookup($2->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", $2->varname); exit(0);}
						$2->nodetype = PTR_;
						if(temp->gentry!=NULL)
							$2->type = temp->gentry->type;
						else
							$2->type = temp->locentry->type;
						$$ = $2;

						}
		|	'&' VAR 	{struct TableEntry *temp = lookup($2->varname);
						if(temp == NULL) {
							printf("%s undeclared\n", $2->varname); exit(0);}
						$2->nodetype = ADDPTR_;
						if(temp->gentry!=NULL)
							$2->type = temp->gentry->type;
						else
							$2->type = temp->locentry->type;
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
