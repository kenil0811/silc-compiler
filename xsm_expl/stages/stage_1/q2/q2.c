int reg_num=-1;

struct tnode* makeLeafNode(int n){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int getReg() {
    return ++reg_num;
}

void freeReg() {
    reg_num--;
    return;
}

int codeGen(struct tnode *t, FILE *f) {
    if(t->op == NULL) {
        int reg = getReg();
        fprintf(f, "MOV R%d, %d\n", reg, t->val);
        return reg;
    }
    int reg1 = codeGen(t->left, f);
    int reg2 = codeGen(t->right, f);

    fprintf(f, "ADD R%d, R%d\n", reg1, reg2);

    freeReg();
    return reg1;
}