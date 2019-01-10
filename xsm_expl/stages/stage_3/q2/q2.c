int reg_num = -1;
int label_num = -1;

struct tnode* makeLeafNumNode(int n, int type) {
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = n;
    temp->type = type;
    temp->varname = NULL;
    temp->nodetype = NONE_;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeLeafVarNode(char c, int type) {
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = malloc(sizeof(char));
    *(temp->varname) = c;
    temp->type = type;
    temp->nodetype = NONE_;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(int nodetype, int type, struct tnode *l,struct tnode *r){
   // printf("lool\n");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = NULL;
    temp->type = type;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;

    if (nodetype != CONN_) {
        if (nodetype == WHILE_) {
            if(l->type != BOOL_) {
                printf("TYPE MISMATCH\n");
                exit(0);
            }
        }
        else if(l->type != r->type) {
            printf("TYPE MISMATCH\n");
            exit(0);
        }
    }

    return temp;
}

struct tnode* makeIfElseNode(int nodetype, int type, struct tnode *l, struct tnode *r, struct tnode *m) {
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = NULL;
    temp->type = type;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;
    temp->mid = m;

    if(temp->type!=l->type) {
            printf("TYPE MISMATCH\n");
            exit(0);
    }

    return temp;
}

struct tnode* makeIONode(int nodetype, int type, struct tnode *l){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = NULL;
    temp->type = type;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = NULL;

    if(temp->type != l->type) {
        printf("TYPE MISMATCH\n");
        exit(0);
    }


    return temp;
}


int getReg() {
    return ++reg_num;
}

void freeReg() {
    reg_num--;
    return;
}

int getLabel() {
    return ++label_num;
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

    if (t==NULL)
        return 0;
    
    if(t->nodetype == NONE_) {
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

    int reg1,reg2,addr,label1,label2;

    switch(t->nodetype) {
        case CONN_  :   reg1 = codeGen(t->left, f); 
                        reg2 = codeGen(t->right, f);
                        return 0;
        case READ_  :   addr = *(t->left->varname) - 'a' + 4096;
                        readCode(addr, f);
                        return 0;
        case WRITE_ :   reg1 = codeGen(t->left, f);
                        writeCode(reg1, f);
                        freeReg();
                        return 0;
        case ASSIGN_ :  addr = *(t->left->varname) - 'a' + 4096;
                        reg2 = codeGen(t->right, f);
                        assignCode(addr, reg2, f);
                        freeReg();
                        return 0;
        case PLUS_  :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "ADD R%d, R%d\n", reg1, reg2);
                        break;    
        case MINUS_ :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "SUB R%d, R%d\n", reg1, reg2);
                        break;
        case MUL_   :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "MUL R%d, R%d\n", reg1, reg2);
                        break;
        case DIV_   :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "DIV R%d, R%d\n", reg1, reg2);
                        break;
        case LT_    :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "LT R%d, R%d\n", reg1, reg2);
                        break;
        case GT_    :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "GT R%d, R%d\n", reg1, reg2);
                        break;
        case LTE_   :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "LE R%d, R%d\n", reg1, reg2);
                        break;
        case GTE_   :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "GE R%d, R%d\n", reg1, reg2);
                        break;
        case EQ_    :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "EQ R%d, R%d\n", reg1, reg2);
                        break;
        case NE_    :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "NE R%d, R%d\n", reg1, reg2);
                        break;
        case WHILE_ :   label1 = getLabel();
                        label2 = getLabel();
                        fprintf(f, "L%d: ", label1);
                        reg1 = codeGen(t->left, f);
                        fprintf(f, "JZ R%d, L%d\n", reg1, label2);
                        reg1 = codeGen(t->right, f);
                        fprintf(f, "JMP L%d\n", label1);
                        fprintf(f, "L%d: ", label2);
                        return 0;
        case IF_    :   label1 = getLabel();
                        label2 = getLabel();
                        reg1 = codeGen(t->left, f);
                        fprintf(f, "JZ R%d, L%d\n",reg1, label1);
                        reg1 = codeGen(t->right, f);
                        fprintf(f, "JMP L%d\n", label2);
                        fprintf(f, "L%d: ", label1);
                        reg1 = codeGen(t->mid, f);
                        fprintf(f, "L%d: ", label2);
                        return 0;
        }

    freeReg();
    return reg1;
}
