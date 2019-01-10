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

int arr[26]; //array to store the variables

int evaluate(struct tnode *t) {
    
    if (t==NULL)
        return 0;

    if(t->nodetype == NONE_) {
        if (t->varname == NULL)
            return t->val;
        
        int pos = *(t->varname) - 'a';
        return arr[pos];
    }

   
    int temp,pos,val1,val2,val;

    switch(t->nodetype) {
        case CONN_  :   temp = evaluate(t->left); 
                        temp = evaluate(t->right);
                        return 0;
        case READ_  :   pos = *(t->left->varname) - 'a';
                        scanf("%d",&arr[pos]);
                        return 0;
        case WRITE_ :   val1 = evaluate(t->left);
                        printf("%d\n",val1 );
                        return 0;
        case ASSIGN_ :  pos = *(t->left->varname) - 'a';
                        val1 = evaluate(t->right);
                        arr[pos] = val1;
                        return 0;
        case PLUS_  :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        val = val1+val2;
                        return val;    
        case MINUS_ :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        val = val1-val2;
                        return val;
        case MUL_   :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        val = val1*val2;
                        return val;
        case DIV_   :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        val = val1/val2;
                        return val;
        case LT_    :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        if (val1<val2) return TRUE_;
                        else    return FALSE_;
        case GT_    :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        if (val1>val2) return TRUE_;
                        else    return FALSE_;
        case LTE_    :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        if (val1<=val2) return TRUE_;
                        else    return FALSE_;
        case GTE_    :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        if (val1>=val2) return TRUE_;
                        else    return FALSE_;
        case EQ_    :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        if (val1==val2) return TRUE_;
                        else    return FALSE_;
        case NE_    :   val1 = evaluate(t->left);
                        val2 = evaluate(t->right);
                        if (val1!=val2) return TRUE_;
                        else    return FALSE_;
        case IF_    :   val = evaluate(t->left);
                        if (val == TRUE_) 
                            val1=evaluate(t->right);
                        else
                            val1=evaluate(t->mid);
                        return 0;
        case WHILE_ :   while(evaluate(t->left) == TRUE_)
                            val = evaluate(t->right);
                        return 0;
        }

}