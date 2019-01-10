typedef struct tnode{
	int val;			//value of for the expression tree
	char *op;			//indicates the opertor branch
	struct tnode *left,*right;  	//left and right branches
}tnode;

/*Make a leaf tnode and set the value of val field*/
struct tnode* makeLeafNode(int n);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);

/*function to generate xsm code and return register number storing result*/
int codeGen(struct tnode *t, FILE *f);

//storing leargest register number allocated
//int reg_num = -1;