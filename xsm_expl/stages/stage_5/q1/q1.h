#define INTTYPE 40
#define BOOLTYPE 1
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
#define STR_ 25
#define NUM_ 26
#define VAR_ 27
#define STRTYPE 28
#define ARR_ 29
#define DARR_ 30
#define MOD_ 31
#define PTRTYPE 32
#define PTR_ 33
#define ADDPTR_ 34
#define RET_ 35
#define BODY_ 36
#define FUNC_ 37
#define FCALL_ 38
#define AND_ 41
#define OR_ 42


typedef struct tnode{
	int val;			//value of for the expression tree
	int type;			//type of variable
	char *varname;		//name of variables for id nodes
	int nodetype;		//information about non-leaf nodes (read/write/connector/+-*/)
	struct tnode *left,*right, *mid, *arglist;  	//left and right branches
	struct TableEntry *entry;

}tnode;


struct Gsymbol {
	char* name;
	int type;
	int size1;
	int size2;
	int binding;
	struct Param *paramlist;
	int flabel;
	struct Gsymbol *next;
};

struct TableEntry {
	struct Gsymbol *gentry;
	struct Lentry *locentry;
	struct Ltable *fentry;
	int isGlobal;
};

struct Param {
	char *name;
	int type;
	struct Param *next;
};

struct Lentry {
	char *name;
	int type;
	int binding;
	struct Lentry *next;
};

struct Ltable {
	char *funcname;
	struct Lentry *entry;
	struct Ltable *next;
};







/*Make a leaf tnode and set the value of val field*/
struct tnode* makeLeafNumNode(int n, int type, int nodetype);

/*Make a leaf tnode and set the value of varname field*/
struct tnode* makeLeafVarNode(char *c, int nodetype);

/*Make a leaf tnode and set the value of varname field*/
struct tnode* makeLeafStringNode(char *c,int type, int nodetype);

/*Make a tnode with opertor, left and right branches set*/
struct tnode* makeOperatorNode(int nodetype, int type, struct tnode *l,struct tnode *r);

struct tnode* makeIONode(int nodetype, struct tnode *l);

struct tnode* makeIfElseNode(int nodetype, int type, struct tnode *l, struct tnode *r, struct tnode *m);

int getReg();
void freeReg();
int getLabel();
void readCode(int addr, FILE *f);
void writeCode(int reg, FILE *f);
void assignCode(int addr, int reg2, FILE *f);

/*function to evaluate the AST(program)*/
int codeGen(struct tnode *t, FILE *f);

// Creates a symbol table entry.
void insertSymbol(char *name, int size1, int size2);

// Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
struct Gsymbol *gLookup(char *name);

struct TableEntry *lookup(char *varname);

int getLocation();
void assignType(int type, struct tnode *varlist);
void displayTable();
void freeAllReg();
void resetLocalSpace();
struct Ltable* funcLookup(char *funcname);
