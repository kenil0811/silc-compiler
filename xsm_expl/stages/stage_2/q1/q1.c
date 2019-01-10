int reg_num=-1;

struct tnode* makeLeafNumNode(int n){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = n;
    temp->type = 0;
    temp->varname = NULL;
    temp->nodetype = NULL;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeLeafVarNode(char c){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = malloc(sizeof(char));
    *(temp->varname) = c;
    temp->nodetype = NULL;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = malloc(sizeof(char));
    temp->varname = NULL;
    *(temp->nodetype) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

struct tnode* makeIONode(char c,struct tnode *l){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = malloc(sizeof(char));
    temp->varname = NULL;
    *(temp->nodetype) = c;
    temp->left = l;
    temp->right = NULL;
    return temp;
}


int getReg() {
    return ++reg_num;
}

void freeReg() {
    reg_num--;
    return;
}

void readCode(int addr, FILE *f) {
    for(int i=0; i<=reg_num; i++)
        fprintf(f, "PUSH R%d\n",i);
    fprintf(f, "MOV R0,%d\nMOV R1,\"Read\"\nPUSH R1\nMOV R1,-1\nPUSH R1\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n",addr);
    for(int i=reg_num; i>=0; i--)
        fprintf(f, "POP R%d\n",i);
    return;
}

void writeCode(int reg, FILE *f) {
    for(int i=0; i<=reg_num; i++)
        fprintf(f, "PUSH R%d\n",i);    
    fprintf(f, "MOV R1,\"Write\"\nPUSH R1\nMOV R1,-2\nPUSH R1\nPUSH R%d\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n",reg);
    for(int i=reg_num; i>=0; i--)
        fprintf(f, "POP R%d\n",i);
    return;
}

void assignCode(int addr, int reg2, FILE *f) {
    fprintf(f, "MOV [%d], R%d\n", addr, reg2);
    return;
}

int codeGen(struct tnode *t, FILE *f) {
    
    if(t->nodetype == NULL) {
        if (t->varname == NULL) {
            int reg = getReg();
            fprintf(f, "MOV R%d, %d\n", reg, t->val);
            return reg;
        }
        
        int pos = *(t->varname) - 'a';
        int reg = getReg();
        fprintf(f, "MOV R%d, [%d]\n",reg, pos+4096);
        return reg;
    }

    int reg1,reg2,addr;

    switch(*(t->nodetype)) {
        case 'c' :  reg1 = codeGen(t->left, f); 
                    reg2 = codeGen(t->right, f);
                    return 0;
        case 'r' :  addr = *(t->left->varname) - 'a' + 4096;
                    readCode(addr, f);
                    return 0;
        case 'w' :  reg1 = codeGen(t->left, f);
                    writeCode(reg1, f);
                    freeReg();
                    return 0;
        case '=' :  addr = *(t->left->varname) - 'a' + 4096;
                    reg2 = codeGen(t->right, f);
                    assignCode(addr, reg2, f);
                    freeReg();
                    return 0;
        case '+' :  reg1 = codeGen(t->left, f);
                    reg2 = codeGen(t->right, f);
                    fprintf(f, "ADD R%d, R%d\n", reg1, reg2);
                    break;    
        case '-' :  reg1 = codeGen(t->left, f);
                    reg2 = codeGen(t->right, f);
                    fprintf(f, "SUB R%d, R%d\n", reg1, reg2);
                    break;
        case '*' :  reg1 = codeGen(t->left, f);
                    reg2 = codeGen(t->right, f);
                    fprintf(f, "MUL R%d, R%d\n", reg1, reg2);
                    break;
        case '/' :  reg1 = codeGen(t->left, f);
                    reg2 = codeGen(t->right, f);
                    fprintf(f, "DIV R%d, R%d\n", reg1, reg2);
                    break;
        }

    freeReg();
    return reg1;
}