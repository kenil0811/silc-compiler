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

void prefix(struct tnode *t) {
    if(t->op == NULL) {
        printf("%d ", t->val);
        return;
    }
    printf("%c ", *(t->op));
    prefix(t->left);
    prefix(t->right);
}

void postfix(struct tnode *t) {
    if(t->op == NULL) {
        printf("%d ", t->val);
        return;
    }
    postfix(t->left);
    postfix(t->right);
    printf("%c ", *(t->op));
    
}