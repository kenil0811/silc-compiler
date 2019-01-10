%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	extern FILE *yyin;
	FILE *out,*temp;
	int pass=1;
	int currline = 2048;
	int id;

	struct labelTable {
		int id;
		int addr;
		struct labelTable *next;
	};
	struct labelTable *head = NULL;

%}

label	[L]
digit	[0-9]+
colon	[:]
quit	[q]
jump	"JMP"
jnz		"JNZ"
jz 		"JZ"
pos		"2056"

%%

([0][\n])|({pos}[\n])		{if(pass==1) {
					fprintf(temp, "%s", yytext);
					currline++;
				}
				else {
					fprintf(out, "%s", yytext);
				}
				}

"J"(.*)[\n]		{if(pass==1) {
					fprintf(temp, "%s", yytext);
					currline += 2;
				} else {
					id = yytext[yyleng-2]-'0'; int add = find_addr(id);
					char *str = (char*)malloc(yyleng*sizeof(char));
					for(int i=0; yytext[i]!='L' && i<yyleng; i++){
						str[i] = yytext[i];
					}

					fprintf(out, "%s%d\n",str, add);}
				}


{label}{digit}{colon}(.*)[\n]	{ id = yytext[1]-'0'; add_to_table(id, currline); }

(.*)[\n]	{	if(pass==1) {
					fprintf(temp, "%s", yytext);
					currline += 2;

				}
				else
					fprintf(out, "%s", yytext);
			}

%%

int find_addr(int id) {

	struct labelTable *temp=head;
	while(temp!=NULL) {

		if(temp->id == id) {
			return temp->addr; }
		temp = temp->next;
	}
}

void add_to_table(int id, int currline) {
	struct labelTable *temp=head;
	if(temp == NULL) {
		temp = (struct labelTable*)malloc(sizeof(struct labelTable));
		temp->id = id;
		temp->addr = currline;
		temp->next = NULL;
		head=temp;
	}
	else {
		while(temp->next != NULL)
			temp = temp->next;
		struct labelTable *node = (struct labelTable*)malloc(sizeof(struct labelTable));
		node->id = id;
		node->addr = currline;
		temp->next = node;
		node->next = NULL;
	}
}


int yywrap() {
	return 1;
}

int main(int argc, char* argv[]) {

	yyin = fopen(argv[1],"r");
	temp = fopen("temp2","w");
	out = fopen("out.xsm", "w");

	pass=1;
	yylex();

	fclose(temp);
	yyin = fopen("temp","r");
	pass=2;

	yylex();
}