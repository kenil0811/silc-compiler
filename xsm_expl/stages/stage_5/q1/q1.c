int reg_num = 1;
int label_num = -1;
int in_loop = 0;

struct tnode* createTree(int val,int type, char* c, int nodetype, struct Gsymbol *entry, struct tnode *l,struct tnode *m, struct tnode *r){
    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = val;
    temp->type = type;
    temp->varname = c;
    temp->nodetype= nodetype;
    temp->entry=entry;
    temp->left = l;
    temp->mid = m;
    temp->right = r;
    return temp;
}




struct tnode* makeLeafNumNode(int n, int type, int nodetype) {
    return createTree(n, type, NULL, nodetype ,NULL ,NULL, NULL, NULL);
}

struct tnode* makeLeafVarNode(char* var, int nodetype) {
    return createTree(NULL, NULL, var, nodetype, lookup(var), NULL, NULL, NULL);
}

struct tnode* makeLeafStringNode(char* var, int type, int nodetype) {
    return createTree(NULL, type, var, nodetype, NULL, NULL, NULL, NULL);
}

struct tnode* createTypeNode(int type) {
    return createTree(NULL, type, NULL, NONE_, NULL, NULL, NULL, NULL);
}

struct tnode* makeAssignNode(int nodetype, int type, struct tnode *l,struct tnode *r) {
    struct tnode *temp = createTree(NULL, type, NULL, nodetype, NULL, l, NULL, r);
    //printf("%d,%d,%d,%d,%d,%d\n", nodetype, type, l->type, r->type, l->nodetype, r->nodetype);
    if(l->type != r->type) {
        printf("h2\n");
        printf("TYPE MISMATCH\n");
        exit(0);
    }
    return temp;

}    

struct tnode* makeOperatorNode(int nodetype, int type, struct tnode *l,struct tnode *r) {
    struct tnode *temp = createTree(NULL, type, NULL, nodetype, NULL, l, NULL, r);
    if (nodetype!=CONN_ && nodetype!=BREAK_ && nodetype!=CONT_) {

   // printf("%d %d %d %d %d,\n", nodetype, l->nodetype, r->nodetype, l->type, r->type);
        if (nodetype == WHILE_) {
            if(l->type != BOOLTYPE) {
                printf("h4\n");
                printf("TYPE MISMATCH\n");
                exit(0);
            }}
        else if (nodetype == DOWHILE_) {
            if(r->type != BOOLTYPE) {
                printf("h3\n");
                printf("TYPE MISMATCH\n");
                exit(0);
            }}
        else if(l->type != r->type) {
            printf("h2\n");
            printf("TYPE MISMATCH\n");
            exit(0);
        }
    }

    return temp;
}

struct tnode* makeIfElseNode(int nodetype, int type, struct tnode *l, struct tnode *r, struct tnode *m) {
    struct tnode *temp = createTree(NULL, type, NULL, nodetype, NULL, l, m, r);

    if(temp->type!=l->type) {

        printf("%d,%d\n",temp->type, l->type);
            printf("TYPE MISMATCH\n");
            exit(0);
    }

    return temp;
}

struct tnode* makeIONode(int nodetype,  struct tnode *l){
    return createTree(NULL, NULL, NULL, nodetype, NULL, l, NULL, NULL);
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

void readCode(int reg, FILE *f) {
    for(int i=2; i<=reg_num; i++)
        fprintf(f, "PUSH R%d\n",i);
    fprintf(f, "MOV R0,R%d\nMOV R1,\"Read\"\nPUSH R1\nMOV R1,-1\nPUSH R1\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n",reg);
    for(int i=reg_num; i>=2; i--)
        fprintf(f, "POP R%d\n",i);
    return;
}

void writeCode(int reg, FILE *f) {
    for(int i=2; i<=reg_num; i++)
        fprintf(f, "PUSH R%d\n",i);    
    fprintf(f, "MOV R1,\"Write\"\nPUSH R1\nMOV R1,-2\nPUSH R1\nPUSH R%d\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n",reg);
    for(int i=reg_num; i>=2; i--)
        fprintf(f, "POP R%d\n",i);
    return;
}

void assignCode(int reg, int reg2, FILE *f) {
    fprintf(f, "MOV [R%d], R%d\n", reg, reg2);
    return;
}



int k=0;

int getAddr(struct tnode *t, FILE *f) {
    int reg,reg1,reg2;
    switch(t->nodetype) {
        case VAR_   :   reg=getReg();
                        fprintf(f, "MOV R%d, %d\n", reg, t->entry->binding);
                        return reg;
        case ARR_   :   reg = codeGen(t->left, f);
                        fprintf(f, "ADD R%d, %d\n", reg, t->entry->binding);
                        return reg;
        case DARR_  :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "MUL R%d, %d\n", reg1, t->entry->size1);
                        fprintf(f, "ADD R%d, R%d\n", reg1, reg2);
                        fprintf(f, "ADD R%d, %d\n", reg1, t->entry->binding);
                        freeReg();
                        return reg1;
        case PTR_   :   reg=getReg();
                        fprintf(f, "MOV R%d, [%d]\n", reg, t->entry->binding);
                        return reg;
    }

}

int label1,label2;
int codeGen(struct tnode *t, FILE *f) {

    if (t==NULL)
        return 0;

int reg1,reg2,addr,label3,label4,reg,pos,temp_l1,temp_l2;

    switch(t->nodetype) {
        case NUM_   :   reg = getReg();
                        fprintf(f, "MOV R%d, %d\n", reg, t->val);
                        return reg;
        case VAR_   :   pos = t->entry->binding ;
                        reg = getReg();
                        fprintf(f, "MOV R%d, [%d]\n",reg, pos);
                        return reg;
        case PTR_   :   pos = t->entry->binding ;
                        reg = getReg();
                        fprintf(f, "MOV R%d, [%d]\n",reg, pos);
                        fprintf(f, "MOV R%d, [R%d]\n", reg, reg);
                        return reg;
        case ADDPTR_:   pos = t->entry->binding;
                        reg = getReg();
                        fprintf(f , "MOV R%d, %d\n",reg, pos);
                        return reg;
        case ARR_   :   reg = codeGen(t->left, f);
                        fprintf(f, "ADD R%d, %d\n", reg, t->entry->binding);
                        reg1 = getReg();
                        fprintf(f, "MOV R%d, R%d\n", reg1, reg);
                        fprintf(f, "MOV R%d, [R%d]\n", reg, reg1);
                        freeReg();
                        return reg;
        case DARR_  :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "MUL R%d, %d\n", reg1, t->entry->size1);
                        fprintf(f, "ADD R%d, R%d\n", reg1, reg2);
                        fprintf(f, "ADD R%d, %d\n", reg1, t->entry->binding);
                        reg = getReg();
                        fprintf(f, "MOV R%d, R%d\n", reg, reg1);
                        fprintf(f, "MOV R%d, [R%d]\n", reg1, reg);
                        freeReg();
                        freeReg();
                        return reg1;
        case STR_   :   reg = getReg();
                        fprintf(f, "MOV R%d, \"%s\"\n", reg, t->varname);
                        return reg;
        case CONN_  :   reg1 = codeGen(t->left, f); 
                        reg2 = codeGen(t->right, f);
                        return 0;
        case READ_  :   reg1 = getAddr(t->left, f);
                        readCode(reg1, f);
                        freeReg();
                        return 0;
        case WRITE_ :   reg1 = codeGen(t->left, f);
                        writeCode(reg1, f);
                        freeReg();
                        return 0;
        case ASSIGN_ :  reg1 = getAddr(t->left, f);
                        reg2 = codeGen(t->right, f);
                        assignCode(reg1, reg2, f);
                        freeReg();
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
        case MOD_   :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "MOD R%d, R%d\n", reg1, reg2);
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
                        temp_l1=label1; temp_l2=label2;
                        fprintf(f, "L%d:\n", temp_l1);
                        reg1 = codeGen(t->left, f);
                        fprintf(f, "JZ R%d, L%d\n", reg1, temp_l2);
                        reg1 = codeGen(t->right, f);
                        fprintf(f, "JMP L%d\n", temp_l1);
                        fprintf(f, "L%d:\n", temp_l2);
                        return 0;
        case IF_    :   label3 = getLabel();
                        label4 = getLabel();
                        reg1 = codeGen(t->left, f);
                        fprintf(f, "JZ R%d, L%d\n",reg1, label3);
                        reg1 = codeGen(t->right, f);
                        fprintf(f, "JMP L%d\n", label4);
                        fprintf(f, "L%d:\n", label3);
                        reg1 = codeGen(t->mid, f);
                        fprintf(f, "L%d:\n", label4);
                        return 0;
        case BREAK_ :   fprintf(f, "JMP L%d\n", label2);
                        return 0;
        case CONT_  :   fprintf(f, "JMP L%d\n", label1);
                        return 0;
        case DOWHILE_ : label1 = getLabel();
                        label2 = getLabel();
                        temp_l1=label1; temp_l2=label2;
                        fprintf(f, "L%d:\n", temp_l1);
                        reg1 = codeGen(t->left, f);
                        reg1 = codeGen(t->right, f);
                        fprintf(f, "JZ R%d, L%d\n", reg1, temp_l2);
                        fprintf(f, "JMP L%d\n", temp_l1);
                        fprintf(f, "L%d:\n", temp_l2);
                        return 0;                  
        }

    freeReg();
    return reg1;
}
