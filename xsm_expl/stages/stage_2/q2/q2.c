struct tnode* makeLeafNumNode(int n){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = n;
    temp->type = 0;
    temp->varname = NULL;
    temp->nodetype = NONE_;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeLeafVarNode(char c){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = malloc(sizeof(char));
    *(temp->varname) = c;
    temp->nodetype = NONE_;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(int nodetype,struct tnode *l,struct tnode *r){
   // printf("lool\n");
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = NULL;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;
    return temp;
}

struct tnode* makeIONode(int nodetype,struct tnode *l){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->varname = NULL;
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = NULL;
    return temp;
}

int arr[26]; //array to store the variables

int evaluate(struct tnode *t) {
    

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
        case ASSIGN_ :   pos = *(t->left->varname) - 'a';
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
        }

}