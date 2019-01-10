#define INTTYPE_ 0
#define BOOLTYPE_ 1
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


typedef struct tnode{
	int val;			//value of for the expression tree
	int type;			//type of variable(0 for int)
	char *varname;		//name of variables for id nodes
	int nodetype;		//information about non-leaf nodes (read/write/connector/+-*/)
	struct tnode *left,*right;  	//left and right branches
}tnode;

/*Make a leaf tnode and set the value of val field*/
struct tnode* makeLeafNumNode(int n);

/*Make a leaf tnode and set the value of varname field*/
struct tnode* makeLeafVarNode(char c);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(int nodetype,struct tnode *l,struct tnode *r);

struct tnode* makeIONode(int nodetype,struct tnode *l);

/*Make a tnode with connector, left and right branches set*/
struct tnode* makeConnectorNode(struct tnode *l, struct tnode *r);

/*function to evaluate the AST(program)*/
int evaluate(struct tnode *t);