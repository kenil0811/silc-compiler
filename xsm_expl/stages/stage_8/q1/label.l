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
funclabel	[F]
digit	[0-9]+
colon	[:]
quit	[q]
t1		"MOV [R"
t2		"], F"
jump	"JMP"
jnz		"JNZ"
jz 		"JZ"
pos		"2056"

%%

([0][\n])|(("2056")[\n])		{if(pass==1) {
					fprintf(temp, "%s", yytext);
					currline++;
				}
				else {
					fprintf(out, "%s", yytext);
				}
				}

("J"(.*)[\n])	{if(pass==1) {
					fprintf(temp, "%s", yytext);
					currline += 2;
				} 
				else {	
					id = getId(); int add = find_addr(id);
					char *str = (char*)malloc(yyleng*sizeof(char));
					for(int i=0; (yytext[i]!='L'); i++){
						str[i] = yytext[i];
					}
					fprintf(out, "%s%d\n",str, add);
					}
				}



("M"(.*){funclabel}{digit}[\n])	{
									if(pass==1) {
										fprintf(temp, "%s", yytext);
										currline += 2;
									}
									else {
										int k = yyleng-2;
										id = getId();
										int add = find_addr(id+100);
										char *str = (char*)malloc(yyleng*sizeof(char));
										for(int i=0; (yytext[i]!='F'); i++){
											str[i] = yytext[i];
										}
										fprintf(out, "%s%d\n",str, add);
									}}

("CALL F"{digit}[\n])	{if(pass==1) {
							fprintf(temp, "%s", yytext);
							currline += 2;
						} 
						else {
							int k = yyleng-2;
							id = getId();
							int add = find_addr(id+100);
							char *str = (char*)malloc(yyleng*sizeof(char));
							for(int i=0; (yytext[i]!='F'); i++){
								str[i] = yytext[i];
							}
							fprintf(out, "%s%d\n",str, add);
						}
						}				

"MAIN:"[\n]	{add_to_table(200, currline);}
"CALL MAIN"[\n]	{if(pass==1) {
				fprintf(temp, "%s", yytext);
				currline += 2;
			}
			if(pass==2) { 
			int add = find_addr(200);
			//printf("%dadd%d\n",add,currline );
			fprintf(out, "CALL %d\n", add);
			}
			}



{funclabel}{digit}{colon}[\n]	{id = getId2(); id += 100; add_to_table(id, currline);}
{label}{digit}{colon}(.*)[\n]	{ id = getId2(); add_to_table(id, currline); }

(.*)[\n]	{	if(pass==1) {
					fprintf(temp, "%s", yytext);
					currline += 2;

				}
				else
					fprintf(out, "%s", yytext);
			}

%%

int getId() {
	int k = yyleng-2;
	while(yytext[k]>='0' && yytext[k]<='9')
		k--;
	k++;
	int res=0;
	while(k<=yyleng-2) {
		res = res*10 + yytext[k] - '0';
		k++;
	}
	return res;
}

int getId2() {
	int res=0;
	int k = 1;
	while(yytext[k]>='0' && yytext[k]<='9') {
		res = res*10 + yytext[k] - '0';
		k++;
	}
	return res;
}

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