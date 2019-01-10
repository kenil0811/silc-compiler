#define INT_ 0
#define BOOL_ 1
#define PLUS_ 2
#define MINUS_ 3
#define MUL_ 4
#define DIV_ 5
#define LT_ 6
#define GT_ 7
#define EQ_ 8
#define LTE_ 9
#define GTE_ 10
#define NE_ 11
#define CONN_ 12
#define IF_ 13
#define WHILE_ 14
#define READ_ 15
#define WRITE_ 16
#define ASSIGN_ 17
#define NONE_ 18
#define NOTYPE_ 19
#define TRUE_ 20
#define FALSE_ 21
#define BREAK_ 22
#define CONT_ 23
#define DOWHILE_ 24




typedef struct tnode{
	int val;			//value of for the expression tree
	int type;			//type of variable
	char *varname;		//name of variables for id nodes
	int nodetype;		//information about non-leaf nodes (read/write/connector/+-*/)
	struct tnode *left,*right, *mid;  	//left and right branches
}tnode;

/*Make a leaf tnode and set the value of val field*/
struct tnode* makeLeafNumNode(int n, int type);

/*Make a leaf tnode and set the value of varname field*/
struct tnode* makeLeafVarNode(char c, int type);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(int nodetype, int type, struct tnode *l,struct tnode *r);

struct tnode* makeIONode(int nodetype, int type, struct tnode *l);

struct tnode* makeIfElseNode(int nodetype, int type, struct tnode *l, struct tnode *r, struct tnode *m);

/*function to evaluate the AST(program)*/
int codeGen(struct tnode *t, FILE *f);