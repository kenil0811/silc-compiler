%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q3.h"
	#include "q3.c"
	int yylex(void);
	FILE *yyin, *out;
	int reg;
%}

%union{struct tnode* t;}
%token NUM PLUS MINUS MUL DIV END
%type <t> NUM expr
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{reg = codeGen($1, out);
					return;
					}
		;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
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
	fprintf(out, "MOV SP,4096\n");

	yyparse();
	fprintf(out, "MOV R2,\"Write\"\nPUSH R2\nMOV R2,-2\nPUSH R2\nPUSH R%d\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R1\nPOP R1\nPOP R1\nPOP R1\n",reg);
	fprintf(out, " MOV R2,\"Exit\"\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nPUSH R2\nCALL 0\nPOP R2\nPOP R2\n POP R2\n POP R2\n POP R2\n");
	return 0;
}