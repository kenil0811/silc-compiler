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
%token PLUS MINUS MUL DIV MOD LT GT LTE GTE NE EQ AND OR TYPE ENDTYPE NULLTOKEN CLASS ENDCLASS SELF NEW
%type <t> NUM VAR STR1 STR expr Slist Stmt InStmt OutStmt AsgStmt IfStmt WhileStmt BrkStmt DoWhileStmt Field 
%type <t> RetStmt Type Variable FDefBlock MainBlock GDecl GVarList LVarList LVar GVar Fname Body FDef ArgList
%type <t> ClassDefBlock ClassDefList ClassDef Cname CMethodDef NewStmt FieldFunction SELF
%type <p> ParamList Param ParamDeclList
%nonassoc LT GT LTE GTE EQ NE
%left PLUS MINUS
%left MUL DIV MOD

%%

program : TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock {//showTables();
													fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
													fprintf(out, "MOV SP,%d\n",location+1);
													//printf("lol\n");
													codeGen($2, out);
													freeAllReg();
													codeGen($4, out);
													freeAllReg();
													codeGen($5, out);
													fprintf(out,"MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0");
													fprintf(out,"\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
													return;
													}
		| TypeDefBlock ClassDefBlock GDeclBlock MainBlock {//showTables();
											fprintf(out, "%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,0,0);
											fprintf(out, "MOV SP,%d\n",location+1);
											codeGen($2, out);
											freeAllReg();
											codeGen($4, out);
											fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\n");
											fprintf(out, "POP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
											return; 
											}
		;


//type
TypeDefBlock	: TYPE TypeDefList ENDTYPE	{}
				|	
				;

TypeDefList	: TypeDefList TypeDef	{}
			| TypeDef	{}
			;

TypeDef	: TName '{' FieldDeclList '}'	{resetFieldIndex();}
		;

TName	: VAR	{insertType($1->varname); currtype = strdup($1->varname);}
			;

FieldDeclList	: FieldDeclList FieldDecl	{}
				| FieldDecl	{}
				;

FieldDecl	: Type VAR ';'	{insertField(currtype, $1, $2->varname);}
			;

Type	: INT	{$$ = createTypeNode("int"); }
		| STR	{$$ = createTypeNode("str");}
		| VAR	{$$ = createTypeNode(strdup($1->varname));}
		;					

//classes
ClassDefBlock	: CLASS ClassDefList ENDCLASS	{$$ = $2; currclassptr = NULL;}
				|	{}
				;

ClassDefList	: ClassDefList ClassDef	{$2->left=$1; $$=$2;}
				| ClassDef	{$$=$1;}
				;

ClassDef	: Cname '{' DECL CFieldList CMethodDecl ENDDECL CMethodDef '}'	{$$=$7;}
			;

Cname	: VAR	{$$=$1; currclassptr=insertClass($1->varname, NULL);}
		;

CFieldList	: CFieldList CField	{}
			|
			;

CField	: Type VAR ';'	{insertClassField(currclassptr, $1, $2->varname);}
		;

CMethodDecl	: CMethodDecl MethodDecl	{}
			| MethodDecl	{}
			;

MethodDecl	: Type VAR '(' ParamDeclList ')' ';' {insertClassFunction(currclassptr, $1->type, $2->varname, $4);}
			;

CMethodDef	: CMethodDef FDef	{$2->left=$1; $$=$2;}
			| FDef	{$$=$1;}
			;
			

//global declarations
GDeclBlock	: DECL GDeclList ENDDECL {}
            |   {}
			;

GDeclList	: GDeclList GDecl 	{}
			| GDecl	{}
			;

GDecl 	: Type GVarList	';'	{assignType($1, $2);}
		;

GVarList: GVarList ',' GVar	{$3->left=$1; $$=$3;}
		| GVar	{$1->left=NULL; $$=$1;}


GVar	: VAR	{insertSymbol($1->varname, 1, 1); $1->left=NULL; $$=$1;}
		| VAR '[' NUM ']'	{insertSymbol($1->varname, $3->val, 1); $1->left=NULL; $$=$1;}
		| VAR '[' NUM ']' '[' NUM ']'  {insertSymbol($1->varname, $3->val, $6->val); $1->left=NULL; $$=$1;}
		| MUL VAR	{insertSymbol($2->varname, 1, 1); $2->left=NULL; $$=$2;}
		| Fname '(' ParamDeclList ')'	{insertFunction($1->varname, $3); $$=$1;}
		;

Fname	: VAR	{$$=$1; currfunc=strdup($1->varname); }

ParamDeclList	: ParamDeclList ',' Param	{if(checkParamValidity($1,$3)==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					$3->next=$1; $$=$3;}
			| Param	{$1->next=NULL; $$=$1;}
			|	{$$=NULL;}
			;

Param	: Type VAR	{$$ = createParam($1->type, $2->varname);}
		;

//function definitions
FDefBlock	: FDefBlock FDef	{$2->left = $1; $$=$2;}
			| FDef	{$$=$1;}
			;

FDef	: Type Fname2 '(' VParamList ')' '{' LDeclBlock Body '}'	{checkTypeValidity(currfunc, $1->type); 
																	$$ = makeFuncNode(currclassptr ,$1->type, currfunc, $8);
																	resetLocalSpace();
																	}
		;


Fname2	: VAR	{//f(currclassptr);
					if(currclassptr != NULL) {
					struct Memberfunclist *entry = cFuncLookup(currclassptr,$1->varname);
					if(entry == NULL) {
						printf("Function not declared\n"); exit(0);}
				}
				else {
					struct Gsymbol *entry = gLookup($1->varname);
					if(entry == NULL) {
						printf("Function not declared\n"); exit(0);}
				}			
				createLocalTable($1->varname);
				currfunc = strdup($1->varname);
				}
		;

VParamList	: ParamList	{checkAndCreateParam(currfunc, $1);}

ParamList	: Param ',' ParamList 	{if(checkParamValidity($3,$1)==0) {
						printf("Parameters with same name!!\n"); exit(0); }					
					$1->next=$3; $$=$1;}
			| Param	{$1->next=NULL; $$=$1;}
			|	{$$ = NULL;}
			;
 
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

RetStmt : RETURN expr ';'	{$$ = makeReturnNode(currclassptr ,$2, currfunc);}
	;


//main definition
MainBlock	: INT Main '(' ')' '{' LDeclBlock Body '}'	{$$ = makeFuncNode(currclassptr ,typeLookup("int"), "main", $7);}
			;

Main    : MAIN {insertMain("main", typeLookup("int"));
				createLocalTable("main");
				currfunc = strdup("main");}


//statements
Slist	:	Slist Stmt	{$$ = makeOperatorNode(CONN_, typeLookup("null"), $1,$2);}
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
		|	NewStmt	{$$ = $1;}
	//	|	DelStmt	{$$=$1;}
		;

InStmt	:	READ '(' Variable ')' ';'	{$$ = makeIONode(READ_, $3);}
		;

OutStmt	:	WRITE '(' expr ')' ';'	{$$ = makeIONode(WRITE_, $3);}
		;

AsgStmt	:	Variable '=' expr ';'		{  $$ = makeAssignNode(ASSIGN_, typeLookup("null"), $1,$3);}
		;

IfStmt	: IF '(' expr ')' THEN Slist ELSE Slist ENDIF ';'	{$$ = makeIfElseNode(IF_, typeLookup("bool"), $3, $6, $8);}
		| IF '(' expr ')' THEN Slist ENDIF ';'				{$$ = makeIfElseNode(IF_, typeLookup("bool"), $3, $6, NULL);}
		;

WhileStmt	: WHILE '(' expr ')' DO Slist ENDWHILE ';'	{$$ = makeOperatorNode(WHILE_, typeLookup("bool"), $3, $6);}
			;

BrkStmt	:	BREAK ';'		{$$ = makeOperatorNode(BREAK_, typeLookup("null"), NULL, NULL);}
		|	CONTINUE ';'	{$$ = makeOperatorNode(CONT_, typeLookup("null"), NULL, NULL);}
		;

DoWhileStmt	: DO Slist WHILE '(' expr ')' ';'	{$$ = makeOperatorNode(DOWHILE_, typeLookup("bool"), $2, $5);}
			| REPEAT Slist UNTIL '(' expr ')' ';'	{$$ = makeOperatorNode(DOWHILE_, typeLookup("bool"), $2, $5);}
			;

NewStmt	: Variable '=' NEW '(' VAR ')' ';'	{struct Gsymbol *gentry;
										struct tnode *t;
										if(strcmp($1->varname, "self") == 0) {
											t=$1->left;
											struct Fieldlist *field = fieldLookup(currclassptr->memberfield, t->varname);
											t->ctype = field->ctype;
											//printf("%s--\n", t->ctype->name);
										}
										else {
											gentry = gLookup($1->varname);
											if(gentry==NULL) {
												printf("%s not declared\n", $1->varname);
												exit(0); }
											t = $1;
											$1->ctype = gentry->ctype;
										}
										//printf("yyy\n");
										//printf("%s\n", t->ctype->name);
										struct Classtable *centry = cLookup($5->varname);
										if(centry != t->ctype) {
											printf("Object %s is not of type %s\n",t->varname, $5->varname);
											exit(0);
										}//printf("kkk\n");
										$$ = makeNewNode(NEW_, $1);
										}


expr 	:	expr PLUS expr	{$$ = makeOperatorNode(PLUS_, typeLookup("int"), $1,$3);}
	 	|	expr MINUS expr {$$ = makeOperatorNode(MINUS_, typeLookup("int"), $1,$3);}
	 	| 	expr MUL expr	{$$ = makeOperatorNode(MUL_, typeLookup("int"), $1,$3);}
	 	|   expr DIV expr	{$$ = makeOperatorNode(DIV_, typeLookup("int"), $1,$3);}
	 	|   expr MOD expr	{$$ = makeOperatorNode(MOD_, typeLookup("int"), $1,$3);}
	 	|	expr LT expr	{$$ = makeOperatorNode(LT_, typeLookup("bool"), $1,$3);}
		|	expr GT expr	{$$ = makeOperatorNode(GT_, typeLookup("bool"), $1,$3);}
		|	expr LTE expr	{$$ = makeOperatorNode(LTE_, typeLookup("bool"), $1,$3);}
		|	expr GTE expr	{$$ = makeOperatorNode(GTE_, typeLookup("bool"), $1,$3);}
		|	expr EQ expr	{$$ = makeOperatorNode(EQ_, typeLookup("bool"), $1,$3);}
		|	expr NE expr	{$$ = makeOperatorNode(NE_, typeLookup("bool"), $1,$3);}
		|	expr AND expr	{$$ = makeOperatorNode(AND_, typeLookup("bool"), $1, $3);}
		|	expr OR expr	{$$ = makeOperatorNode(OR_, typeLookup("bool"), $1,$3);}
		|  '(' expr ')'		{$$ = $2;}
	 	|   NUM				{$$ = $1;}
	 	|   Variable		{$$ = $1;}
	 	|	STR1 			{$$ = $1;}
	 	| 	FieldFunction	{$$=$1;}
	 	|	VAR '(' ArgList ')'	{$$=makeFuncCallNode($1->varname, $3);}
	 	|	NULLTOKEN		{$$=makeNullNode();}
		;

ArgList	:	ArgList ',' expr	{$3->mid=$1; $$=$3;}
		|	expr	{ $$=$1; $1->mid=NULL;}
		|	{$$=NULL;}
		;		

Field	:	VAR	'.' Field	{$1->left=$3; $$=$1;}
		|	VAR '.'	VAR	{$1->left=$3; $$=$1;}
		|	SELF '.' VAR	{if(currclassptr == NULL) {
								printf("Use of self outside class not allowed\n"); exit(0); }
							$1 = makeSelfNode(currclassptr);
							$1->ctype = currclassptr;
							$1->left = $3;
							$$=$1;
							}
		|	SELF '.' Field	{if(currclassptr == NULL) {
								printf("Use of self outside class not allowed\n"); exit(0); }
							$1 = makeSelfNode(currclassptr);
							$1->ctype = currclassptr;
							$1->left = $3;
							$$=$1;
							}
		;

FieldFunction	: SELF '.' VAR '(' ArgList ')'	{if(currclassptr == NULL) {
													printf("Use of self outside class not allowed\n"); exit(0); }
												$$ = makeClassFuncCallNode(currclassptr, "self", NULL, $3->varname, $5);
												}
				| VAR '.' VAR '(' ArgList ')'	{struct Gsymbol *gentry = gLookup($1->varname);
												if(gentry == NULL) {
													printf("Object %s not declared\n", $1->varname); exit(0);
												}
												$$ = makeClassFuncCallNode(gentry->ctype, $1->varname, NULL, $3->varname, $5);
												}
				| SELF '.' VAR '.' VAR '(' ArgList ')' {if(currclassptr == NULL) {
															printf("Use of self outside class not allowed\n"); exit(0); }
														struct Fieldlist *field = fieldLookup(currclassptr->memberfield, $3->varname);
														if(field == NULL) {
															printf("Object %s not declared\n", $3->varname);
															exit(0);
														}
														$$ = makeClassFuncCallNode(currclassptr, "self", $3->varname, $5->varname, $7);
														}
				;

Variable:	Field	{$$ = makeFieldNode($1);}
	 	|	VAR 	{
	 				 struct TableEntry *temp = lookup($1->varname);
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

	initializeTypeTable();

	yyparse();
	
	return 0;
}
