%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "q1.h"
	#include "q1.c"
	int yylex(void);
	FILE *yyin;
%}

%union{struct tnode* t;}
%token NUM PLUS MINUS MUL DIV END
%type <t> NUM expr
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{printf("Prefix: ");
					prefix($1);
					printf("\nPostfix: ");
					postfix($1);
					printf("\n");
					exit(1);
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


int main(int argc, char* argv[]) {
	if(argc > 1)
	{
		FILE *fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}
	yyparse();
	return 0;
}