int reg_num = 1;
int label_num = -1;
int in_loop = 0;

struct tnode* createTree(int val,struct Typetable* type, char* c, int nodetype, struct TableEntry *entry, struct tnode *l,
    struct tnode *m, struct tnode *r, struct tnode *arglist) {
    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->val = val;
    temp->type = type;
    temp->varname = c;
    temp->nodetype= nodetype;

    temp->entry = entry;

    temp->left = l;
    temp->mid = m;
    temp->right = r;
    temp->arglist = arglist;
    return temp;
}

struct tnode *makeNullNode() {
    createTree(-1, typeLookup("null"), NULL, NUM_, NULL, NULL, NULL, NULL, NULL);
}

struct tnode* makeReturnNode(struct tnode *expr, char *funcname) {
    struct Gsymbol *gentry = gLookup(funcname);
    if(expr->type != gentry->type) {
        printf("In function %s:\n", funcname);
        printf("Return type mismatch\n");
        exit(0);
    }
    return createTree(NULL, expr->type, NULL, RET_, NULL, expr, NULL, NULL, NULL);
}

struct tnode* makeBodyNode(struct tnode *slist, struct tnode *retstmt) {
    return createTree(NULL, NULL, NULL, BODY_, NULL, slist, NULL, retstmt, NULL);
}

struct tnode* makeFuncNode(struct Typetable* type,char *funcname,struct tnode *body) {
    struct Gsymbol *gentry = gLookup(funcname);
    struct Ltable *function = funcLookup(funcname);
    struct TableEntry *tentry = (struct TableEntry*)malloc(sizeof(struct TableEntry));
    tentry->gentry = gentry;
    tentry->fentry = function;
    return createTree(NULL, type, funcname, FUNC_, tentry, NULL, NULL, body, NULL);    
}

int isPredeclared(char *funcname) {
    if(strcmp(funcname,"initialize")==0 || strcmp(funcname,"alloc")==0 || strcmp(funcname,"free")==0)
        return 1;
    return 0;
}

struct tnode* makeFuncCallNode(char *funcname, struct tnode *arglist) {
    if(isPredeclared(funcname)) {
        return createTree(NULL, typeLookup("int"), funcname, FCALL_, NULL, NULL, NULL, NULL, arglist);
    }
    struct Gsymbol *gentry = gLookup(funcname);
    if(gentry == NULL) {
        printf("Function %s not declared\n", funcname);
        exit(0);
    }
    struct Param *paramlist = gentry->paramlist;
    struct tnode *arg = arglist;
    while(paramlist!= NULL && arg!=NULL) {
        if(paramlist->type != arg->type) {
            printf("Type mismatch in function call to %s\n", funcname);
            exit(0);
        }
        paramlist=paramlist->next;
        arg=arg->mid;
    }
    if(paramlist!=NULL || arg!=NULL) {
        printf("few/more Arguments in function call to %s\n", funcname);
        exit(0);
    }
    
    struct TableEntry *tentry = (struct TableEntry*)malloc(sizeof(struct TableEntry));
    tentry->gentry = gentry;
    return createTree(NULL, gentry->type, funcname, FCALL_, tentry, NULL, NULL, NULL, arglist);
}

struct Typetable *findResultantType(struct tnode *field, struct Typetable *type) {
    struct Fieldlist *fl = fieldLookup(type->fields, field->varname);
    if(fl == NULL) {
        printf("filed %s not declared\n", field->varname);
        exit(0);
    }
    field->type = fl->type;
    if(field->left == NULL)
        return field->type;
    else
        return findResultantType(field->left, field->type);


}

struct tnode *makeFieldNode(struct tnode *field) {
    struct tnode *temp = field;
    /*while(temp!= NULL) {
        printf("::%s\n", temp->varname);
        temp=temp->left;
    }*/

    struct TableEntry *entry = lookup(field->varname);
    if(entry == NULL) {
        printf("Variable %s not delcared\n", field->varname);
        exit(0);
    }
    field->nodetype=VAR_;
    field->entry = entry;
    if(entry->locentry != NULL)
        field->type = entry->locentry->type;
    else
        field->type = entry->gentry->type;

    field->type = findResultantType(field->left, field->type);
    return field;

}

struct tnode* makeLeafNumNode(int n, struct Typetable* type, int nodetype) {
    return createTree(n, type, "n", nodetype ,NULL ,NULL, NULL, NULL, NULL);
}

struct tnode* makeLeafVarNode(char* var, int nodetype) {
    return createTree(NULL, NULL, var, nodetype, lookup(var), NULL, NULL, NULL, NULL);
}

struct tnode* makeLeafStringNode(char* var, struct Typetable* type, int nodetype) {
    return createTree(NULL, type, var, nodetype, NULL, NULL, NULL, NULL, NULL);
}

struct tnode* createTypeNode(char *typename) {
    if(typeLookup(typename)==NULL) {
        printf("Type %s not declared\n", typename);
        exit(0);
    }
    return createTree(NULL, typeLookup(typename), typename, NONE_, NULL, NULL, NULL, NULL, NULL);
}

struct tnode* makeAssignNode(int nodetype, struct Typetable* type, struct tnode *l,struct tnode *r) {
    struct tnode *temp = createTree(NULL, type, NULL, nodetype, NULL, l, NULL, r, NULL);
    //printf("%d,%d,%d,%d,%d,%d\n", nodetype, type, l->type, r->type, l->nodetype, r->nodetype);
    if(l->type != r->type && r->type!=typeLookup("null") && !isPredeclared(r->varname)) {
        printf("h2\n");
        printf("lol\n");
        printf("%s %s\n", l->type->name, r->type->name);
        printf("TYPE MISMATCH\n");
        exit(0);
    }
    return temp;

}    

struct tnode* makeOperatorNode(int nodetype, struct Typetable* type, struct tnode *l,struct tnode *r) {
    if (nodetype!=CONN_ && nodetype!=BREAK_ && nodetype!=CONT_) {
        if (nodetype == WHILE_) {
            if(l->type != typeLookup("bool")) {
                printf("h4\n");
                printf("TYPE MISMATCH\nExpected:bool, given:%s\n",l->type->name);
                exit(0);
            }}
        else if (nodetype == DOWHILE_) {
            if(r->type != typeLookup("bool")) {
                printf("h3\n");
                printf("TYPE MISMATCH\nExpected:bool, given:%s\n",r->type->name);
                exit(0);
            }}
        else if(l->type != r->type && r->type!=typeLookup("null")) {
            printf("h2\n");
            printf("%s %s\n",l->type->name, r->type->name);
            printf("TYPE MISMATCH\n");
            exit(0);
        }
    }

    return createTree(NULL, type, NULL, nodetype, NULL, l, NULL, r, NULL);
}

struct tnode* makeIfElseNode(int nodetype, struct Typetable* type, struct tnode *l, struct tnode *r, struct tnode *m) {
    struct tnode *temp = createTree(NULL, type, NULL, nodetype, NULL, l, m, r, NULL);

    if(temp->type!=l->type) {
            printf("TYPE MISMATCH\nExpected:bool, given:%s\n",l->type->name);
            exit(0);
    }

    return temp;
}

struct tnode* makeIONode(int nodetype,  struct tnode *l){
    if(l->type != typeLookup("int") && l->type!=typeLookup("str")) {
        printf("invalid format\n");
        exit(0);
    }
    return createTree(NULL, NULL, NULL, nodetype, NULL, l, NULL, NULL, NULL);
}


int getReg() {
    return ++reg_num;
}

void freeReg() {
    reg_num--;
    if(reg_num<0) {
        printf("No register to free\n");
        exit(0);
    }
    return;
}

int getLabel() {
    return ++label_num;
}

void readCode(int reg, FILE *f) {
    int use_count =  saveReg(f);
    fprintf(f, "MOV R0,R%d\nMOV R1,\"Read\"\nPUSH R1\nMOV R1,-1\nPUSH R1\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\n",reg);
    fprintf(f, "POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
    restoreReg(use_count, f);
    return;
}

void writeCode(int reg, FILE *f) {
    int use_count = saveReg(f);   
    fprintf(f, "MOV R1,\"Write\"\nPUSH R1\nMOV R1,-2\nPUSH R1\nPUSH R%d\nPUSH R0\nPUSH R0\nCALL 0\n",reg);
    fprintf(f, "POP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
    restoreReg(use_count, f);
    return;
}

void assignCode(int reg, int reg2, FILE *f) {
    fprintf(f, "MOV [R%d], R%d\n", reg, reg2);
    return;
}

int initCodeGen(FILE *f) {
    int use_count = saveReg(f);
    fprintf(f, "MOV R0,\"Init\"\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n");
    restoreReg(use_count, f);
    return getReg();
}

int allocCodeGen(FILE *f) {
    int use_count = saveReg(f);
    int reg = getReg();
    fprintf(f, "MOV R0,\"Alloc\"\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\nPOP R%d\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n",reg);
    restoreReg(use_count, f);
    return reg;
}

int freeCodeGen(int reg, FILE *f) {
    int use_count = saveReg(f);
    fprintf(f, "MOV R0,\"Free\"\nPUSH R0\nPUSH R%d\nPUSH R0\nPUSH R0\nPUSH R0\nCALL 0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\nPOP R0\n",reg);
    restoreReg(use_count, f);
    return 0;
}

void popLocalVar(struct TableEntry *entry, FILE *f) {
    struct Lentry *locentry = entry->fentry->entry;
    int temp = getReg();
    while(locentry!=NULL && locentry->binding>0) {
        fprintf(f, "POP R%d\n", temp);
        locentry=locentry->next;
    }
    freeReg();

}

int saveReg(FILE *f) {
    for(int i=2; i<=reg_num; i++) 
        fprintf(f, "PUSH R%d\n", i);
    return reg_num;
}

void freeAllReg() {
    reg_num=1;
}

void restoreReg(int use_count, FILE *f) {
    for(int i=use_count; i>=2; i--) 
        fprintf(f, "POP R%d\n", i);
}


int k=0;

int getAddr(struct tnode *t, FILE *f) {
    int reg,reg1,reg2,pos;
    struct Typetable *type;
    switch(t->nodetype) {
        case ADDPTR_:
        case VAR_   :   //fprintf(f, "//in getaddr\n");
                        if(t->entry->locentry != NULL) {
                            type = t->entry->locentry->type;
                            pos = t->entry->locentry->binding;
                            reg = getReg();
                            fprintf(f, "MOV R%d, BP\n", reg);
                            fprintf(f, "ADD R%d, %d\n", reg, pos);
                        }
                        else {
                            type = t->entry->gentry->type;
                            pos = t->entry->gentry->binding;
                            reg=getReg();
                            fprintf(f, "MOV R%d, %d\n", reg, pos);
                        }
                        while(t->left != NULL) {
                            fprintf(f, "MOV R%d, [R%d]\n", reg, reg);
                            struct Fieldlist *field = fieldLookup(type->fields, t->left->varname);
                            int fieldindex = field->fieldindex;
                            fprintf(f, "ADD R%d, %d\n", reg, fieldindex);
                            //fprintf(f, "MOV R%d, [R%d]\n", reg, reg);
                            type = field->type;
                            t=t->left;
                        }

                        return reg;
        case ARR_   :   reg = codeGen(t->left, f);
                        fprintf(f, "ADD R%d, %d\n", reg, t->entry->gentry->binding);
                        return reg;
        case DARR_  :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "MUL R%d, %d\n", reg1, t->entry->gentry->size1);
                        fprintf(f, "ADD R%d, R%d\n", reg1, reg2);
                        fprintf(f, "ADD R%d, %d\n", reg1, t->entry->gentry->binding);
                        freeReg();
                        return reg1;
        case PTR_   :   
                        if(t->entry->locentry != NULL) {
                            pos = t->entry->locentry->binding;
                            reg = getReg();
                            fprintf(f, "MOV R%d, BP\n", reg);
                            fprintf(f, "ADD R%d, %d\n", reg, pos);
                            fprintf(f, "MOV R%d, [R%d]\n", reg, reg);
                        }                        else {
                            pos = t->entry->gentry->binding;
                            reg=getReg();
                            fprintf(f, "MOV R%d, [%d]\n", reg, pos);
                        }
                        return reg;

                                        
    }

}

int label1,label2,funclabel;
int codeGen(struct tnode *t, FILE *f) {

    if (t==NULL)
        return 0;

int reg1,reg2,addr,label3,label4,reg,pos,temp_l1,temp_l2, tlabel;
struct tnode *arglist;

    switch(t->nodetype) {

        case FUNC_  :   funclabel = t->entry->gentry->flabel;
                        struct Lentry *locentry = t->entry->fentry->entry;
                        if(strcmp(t->entry->fentry->funcname,"main")==0) {
                            int loc = getLocation();
                            fprintf(f,"MAIN:\nMOV SP, %d\nMOV BP, %d\n",loc,loc);    
                        } else {
                            fprintf(f,"F%d:\n", funclabel); //label for call
                        }
                        fprintf(f, "PUSH BP\nMOV BP,SP\n"); //push old BP and change bp to SP
                        while(locentry!=NULL) {
                            if(locentry->binding>0) 
                                fprintf(f, "PUSH R0\n");
                            locentry=locentry->next;
                        }
                        t->right->entry = t->entry;
                        codeGen(t->right, f);  //body
                        codeGen(t->left, f);   //next function
                        return 0;
        
        case BODY_  :   codeGen(t->left, f);   //slist
                        t->right->entry = t->entry;
                        codeGen(t->right, f);  //ret stmt
                        return 0;

        case RET_   :   if(strcmp(t->entry->fentry->funcname,"main")==0)   
                            return 0;
                        if(t->left != NULL) {
                            reg=codeGen(t->left, f);
                            popLocalVar(t->entry, f);   //pop space allocated for local variables
                            reg1 = getReg();
                            //put return value
                            fprintf(f, "MOV R%d, BP\n", reg1);
                            fprintf(f, "SUB R%d, 2\n", reg1);
                            fprintf(f, "MOV [R%d], R%d\n", reg1, reg);
                            fprintf(f, "POP BP\n");
                            fprintf(f, "RET\n");
                            freeReg();
                        }
                        else {
                            popLocalVar(t->entry, f);
                            fprintf(f, "POP BP\n");
                            fprintf(f, "RET\n");
                        }
                        return 0;

        case FCALL_ :       if(strcmp(t->varname, "initialize") == 0) {
                                return initCodeGen(f);
                            }
                            else if(strcmp(t->varname, "alloc") == 0) {
                                return allocCodeGen(f);
                            }
                            else if(strcmp(t->varname, "free") == 0) {
                                return freeCodeGen(codeGen(t->arglist,f), f);
                            }

                            arglist = t->arglist;
                            int use_count = saveReg(f);
                            freeAllReg();

                            while(arglist != NULL) {
                                reg = codeGen(arglist, f);
                                fprintf(f, "PUSH R%d\n", reg);
                             //   fprintf(f, "//pushed arguemnt\n" );
                                freeReg();
                                arglist=arglist->mid;
                            }

                            fprintf(f, "PUSH R0\n");
                            fprintf(f, "CALL F%d\n", t->entry->gentry->flabel);

                            reg_num = use_count;
                            reg = getReg();
                  //          fprintf(f, "//coming\n" );
                            fprintf(f, "POP R%d\n", reg);

                            arglist = t->arglist;
                            while(arglist != NULL) {
                                fprintf(f, "POP R0\n");
                                arglist=arglist->mid;
                            }
                            
                            restoreReg(use_count, f);

                            return reg;

        case NUM_   :   reg = getReg();
                        fprintf(f, "MOV R%d, %d\n", reg, t->val);
                        return reg;
        case VAR_   :   reg = getAddr(t, f);
                        fprintf(f, "MOV R%d, [R%d]\n", reg, reg);
                        return reg;
        case PTR_   :   reg = getReg();
                        reg1 = getAddr(t, f);
                        fprintf(f, "MOV R%d, [R%d]\n",reg, reg1);
                        freeReg();
                        return reg;
        case ADDPTR_:   reg = getReg();
                        reg1 = getAddr(t, f);
                        fprintf(f , "MOV R%d, R%d\n",reg, reg1);
                        freeReg();
                        return reg;
        case ARR_   :   reg = codeGen(t->left, f);
                        fprintf(f, "ADD R%d, %d\n", reg, t->entry->gentry->binding);
                        reg1 = getReg();
                        fprintf(f, "MOV R%d, R%d\n", reg1, reg);
                        fprintf(f, "MOV R%d, [R%d]\n", reg, reg1);
                        freeReg();
                        return reg;
        case DARR_  :   reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        fprintf(f, "MUL R%d, %d\n", reg1, t->entry->gentry->size1);
                        fprintf(f, "ADD R%d, R%d\n", reg1, reg2);
                        fprintf(f, "ADD R%d, %d\n", reg1, t->entry->gentry->binding);
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
        case ASSIGN_ :  //fprintf(f, "//in assgn\n" );
                        reg1 = getAddr(t->left, f);
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
        case AND_   :   reg=getReg();
                        reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        tlabel = getLabel();
                        fprintf(f, "MOV R%d, 0\n", reg);
                        fprintf(f, "JZ R%d, L%d\n", reg1, tlabel);
                        fprintf(f, "JZ R%d, L%d\n", reg2, tlabel);
                        fprintf(f, "MOV R%d, 1\n", reg);
                        fprintf(f, "L%d:\n", tlabel);
                        freeReg();
                        freeReg();
                        return reg;

        case OR_    :   reg=getReg();
                        reg1 = codeGen(t->left, f);
                        reg2 = codeGen(t->right, f);
                        tlabel = getLabel();
                        fprintf(f, "MOV R%d, 1\n", reg);
                        fprintf(f, "JNZ R%d, tlabel\n", reg1);
                        fprintf(f, "JNZ R%d, tlabel\n", reg2);
                        fprintf(f, "MOV R%d, 0\n", reg);
                        fprintf(f, "L%d:\n", tlabel);
                        freeReg();
                        freeReg();
                        return reg;

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
