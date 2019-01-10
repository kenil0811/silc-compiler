typedef struct tnode{
	int val;			//value of for the expression tree
	int type;			//type of variable(0 for int)
	char *varname;		//name of variables for id nodes
	char *nodetype;		//information about non-leaf nodes (read/write/connector/+-*/)
	struct tnode *left,*right;  	//left and right branches
}tnode;

/*Make a leaf tnode and set the value of val field*/
struct tnode* makeLeafNumNode(int n);

/*Make a leaf tnode and set the value of varname field*/
struct tnode* makeLeafVarNode(char c);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

/*Make a tnode with connector, left and right branches set*/
struct tnode* makeConnectorNode(struct tnode *l, struct tnode *r);

/*function to generate xsm code and return register number storing result*/
int codeGen(struct tnode *t, FILE *f);

//storing leargest register number allocated
//int reg_num = -1;