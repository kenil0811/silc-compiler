struct Gsymbol *gsymtable = NULL;
struct Typetable *typetable = NULL;
struct Ltable *loctables = NULL;
int location = 4096;
int arg_add=-3;
int loc_add=1;
int flabel = 0;
int fieldindex = 0;
char *currfunc;
char *currtype;


void insertSymbol (char *varname, int size1, int size2) {
	if (gLookup(varname) != NULL) {
		printf("Variable %s already declared\n", varname);
		exit(0);
	} 
	struct Gsymbol* entry = (struct Gsymbol*) malloc(sizeof(struct Gsymbol));
    entry->name = strdup(varname);
    entry->size1 = size1;
    entry->size2 = size2;
    entry->binding = getLocation();
    location = location + size1*size2 - 1;
    entry->next = gsymtable;
    gsymtable = entry;
    return;
}

void insertMain(char *varname, struct Typetable *type) {
	struct Gsymbol* entry = (struct Gsymbol*) malloc(sizeof(struct Gsymbol));
    entry->name = strdup(varname);
    entry->type = type;
    entry->binding = getLocation();
    entry->next = gsymtable;
    gsymtable = entry;
}

struct Lentry* locLookup(struct Lentry *locentry, char *varname) {
	struct Lentry *temp = locentry;
	while(temp!=NULL) {
		if(strcmp(temp->name, varname) == 0)
			break;
		temp = temp->next;
	}

	return temp;
}

struct Ltable* funcLookup (char *funcname) {
	struct Ltable *temp = loctables;
	while(temp!=NULL) {
		if(strcmp(temp->funcname, funcname) == 0) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL; 
}


void insertLocSymbol (char *varname) {
	struct Ltable *ltable = funcLookup(currfunc);
	struct Lentry *locentry = ltable->entry;
	if(locLookup(locentry, varname) != NULL) {
		printf("Loacal variable %s already declared\n",varname);
		exit(0);
	}
	struct Lentry *newentry = (struct Lentry*)malloc(sizeof(struct Lentry));
	newentry->name = strdup(varname);
	newentry->binding = getLocalVarSpace();
	newentry->next = locentry;
	ltable->entry = newentry;	
	}



void createLocalTable(char *funcname) {
	if(funcLookup(funcname) != NULL) {
		printf("Function %s already declared\n", funcname);
		exit(0);
	}
	struct Ltable *func = (struct Ltable*)malloc(sizeof(struct Ltable));
	func->funcname = strdup(funcname);
	func->entry = NULL;
	func->next = loctables;
	loctables = func;
	return;
}

int checkParamValidity(struct Param *list, struct Param *param) {
	struct Param *temp = list;
	while(temp != NULL) {
		if(strcmp(temp->name,param->name)==0)
			return 0;
		temp = temp->next;
	}
	return 1;
}

void checkTypeValidity(char *funcname, struct Typetable *type) {
	struct Gsymbol *gentry = gLookup(funcname);
	if(gentry->type != type) {
		printf("%d,%d\n", gentry->type,type);
		printf("Function %s return type mismatch\n", funcname);
		exit(0);
	}
}

void insertFunction(char *varname, struct Param *list) {
	if (gLookup(varname) != NULL) {
		printf("Function %s already declared\n", varname);
		exit(0);
	} 
	struct Gsymbol* entry = (struct Gsymbol*) malloc(sizeof(struct Gsymbol));
    entry->name = strdup(varname);
    entry->binding = getLocation();
    entry->paramlist = list;
	entry->flabel = flabel++;
    entry->next = gsymtable;
    gsymtable = entry;
    return;
}

struct Param* createParam(struct Typetable *type, char *name) {
	struct Param *entry = (struct Param*)malloc(sizeof(struct Param));
	entry->type = type;
	entry->name = name;
	entry->next = NULL;
	return entry;
}

void checkAndCreateParam(char *funcname, struct Param *list) {
	struct Ltable *ltable = funcLookup(funcname);
	struct Gsymbol *entry = gLookup(funcname);
	if(ltable==NULL || entry==NULL) {
		printf("Function not declared\n");
		exit(0);
	}
	struct Param *list1 = list;
	struct Param *list2 = entry->paramlist;
	
	while(list1!=NULL && list2!=NULL) {
		struct Lentry *locentry = (struct Lentry*)malloc(sizeof(struct Lentry));
		locentry->name = strdup(list1->name);
		locentry->type = list1->type;
		locentry->binding = getLocalArgSpace();

		locentry->next = ltable->entry;
		ltable->entry=locentry;

		list1 = list1->next;
		list2 = list2->next;
	}

	struct Lentry *temp=ltable->entry;
	list2=entry->paramlist;
	while(temp!=NULL && list2!=NULL) {
		if(temp->type!=list2->type || strcmp(temp->name,list2->name)!=0) {
			printf("%s,,%s\n",temp->type->name, list2->type->name);
			printf("%s,,%s\n",temp->name, list2->name);
			printf("hiiiiii\n");
			printf("Arguments mismatch\n");
			exit(0);
		}
		temp=temp->next;
		list2=list2->next;
	}

	
	if(temp!=NULL || list2!=NULL) {
		printf("hiiiiii2\n");
		printf("Arguments mismatch\n");
		exit(0);
	}
}

struct Gsymbol* gLookup (char *varname) {
	struct Gsymbol *temp = gsymtable;
	while(temp!=NULL) {
		if(strcmp(temp->name, varname) == 0) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}


int getLocation() {
	return location++;
}

int getLocalArgSpace() {
	return arg_add--;
}

int getLocalVarSpace() {
	return loc_add++;
}

void resetLocalSpace() {
	arg_add=-3;
	loc_add=1;
}

void assignType (struct Typetable* type, struct tnode *varlist) {
	struct Gsymbol *temp;
	while(varlist != NULL) {
		temp = gLookup(varlist->varname);
		temp->type = type;
		varlist->type = type;
		varlist = varlist->left;
	}
}

void assignLocType (struct Typetable* type, struct tnode *varlist) {
	struct Ltable *func = funcLookup(currfunc);
	

	struct Lentry *locentrylist = func->entry, *locentry;


	while(varlist != NULL) {

		locentry = locLookup(locentrylist, varlist->varname);


		locentry->type = type;

		varlist->type = type;

		varlist = varlist->left;

	}

}

void showTables () {
	printf("----Type Table-----\n");
	struct Typetable *tt = typetable;
	while(tt!=NULL) {
		printf("--%s--\nsize:%d\n", tt->name, tt->size);
		struct Fieldlist *fl = tt->fields;
		while(fl!=NULL) {
			printf("name:%s, index:%d, type:%s\n", fl->name, fl->fieldindex, fl->type->name);
			fl=fl->next;
		} 
		tt=tt->next;
		printf("\n");
	}
	struct Gsymbol *temp = gsymtable;
	printf("----Global Table-----\n");
	while(temp != NULL) {
		printf("name:%s, type:%s, size1:%d, size2:%d start location:%d, flabel:%d\n", temp->name, temp->type->name, temp->size1, temp->size2, temp->binding, temp->flabel);
		struct Param *list = temp->paramlist;
		while(list!=NULL) {
			printf("%s, ", list->name);
			list=list->next;
		}
		printf("\n");

		temp = temp->next;
	}
	struct Ltable *ltable = loctables;
	printf("-----Local Tables----\n");
	while(ltable != NULL) {
	    printf("\n--%s--\n",ltable->funcname);
	    struct Lentry *locentry = ltable->entry;
	    while(locentry != NULL) {
	        printf("name:%s, type:%s, binding:%d\n",locentry->name, locentry->type->name, locentry->binding);
	        locentry = locentry->next;
	    }
	    ltable = ltable->next;
	}
}

struct TableEntry *lookup (char *varname) {

	struct Gsymbol *globentry = gLookup(varname);
	struct TableEntry *entry = (struct TableEntry*)malloc(sizeof(struct TableEntry));
	int flag=0;

	if(globentry!= NULL) {
		flag=1;
		entry->gentry = globentry;
	}
	if(currfunc != NULL) {
		struct Ltable *function =  funcLookup(currfunc);
		if(function!=NULL) {
		struct Lentry *locentry = locLookup(function->entry, varname);
	
		if(locentry!=NULL) {
			flag=1;
			entry->locentry = locentry;
			entry->fentry = function;
			return entry;
		}
		}
	}
	if(flag)
		return entry;
	return NULL;
}

struct Typetable *typeLookup(char *typename) {
	struct Typetable *temp = typetable;
	while(temp!=NULL) {
		if(strcmp(temp->name, typename) == 0) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}

void insertType(char *typename) {
	if(typeLookup(typename) != NULL) {
		printf("Type %s already declared\n", typename);
		exit(0);
	}

	struct Typetable *entry = (struct Typetable*)malloc(sizeof(struct Typetable));
	entry->name = strdup(typename);
	entry->size = 0;
	entry->next = typetable;
	typetable = entry;	
}

void insertField(char *currtype, struct tnode* typenode, char *fieldname) {
	//printf("lol4\n");
	struct Typetable *type = typeLookup(strdup(typenode->type->name));
	//printf("lol5\n");
	if(type == NULL) {
		printf("Type %s not declared\n", typenode->varname);
		exit(0);
	}
	if(fieldindex>=8) {
		printf("Type %s has more than 8 fields\n", currtype);
		exit(0);
	}
	//printf("lol1\n");
	struct Typetable *currenttype = typeLookup(currtype);
//printf("lol2\n");
	struct Fieldlist *entry = (struct Fieldlist*)malloc(sizeof(struct Fieldlist));
	entry->name = strdup(fieldname);
	entry->fieldindex = ++fieldindex;
	entry->type = type;
	entry->next = currenttype->fields;
	currenttype->fields = entry;
	currenttype->size ++;
//printf("lol3\n");	
}

void resetFieldIndex() {
	fieldindex=-1;
}

struct Fieldlist *fieldLookup(struct Fieldlist *list, char *fieldname) {
	while(list != NULL) {
		if(strcmp(list->name, fieldname) == 0)
			return list;
		list = list->next;
	}
	return NULL;
}

void initializeTypeTable() {
	struct Typetable *entry_int = (struct Typetable*)malloc(sizeof(struct Typetable));
	struct Typetable *entry_str = (struct Typetable*)malloc(sizeof(struct Typetable));
	struct Typetable *entry_bool = (struct Typetable*)malloc(sizeof(struct Typetable));
	struct Typetable *entry_null = (struct Typetable*)malloc(sizeof(struct Typetable));


	entry_int->name = "int";
	entry_int->size = 1;
	entry_int->next = entry_str;

	entry_str->name = "str";
	entry_str->size = 1;
	entry_str->next = entry_bool;

	entry_bool->name = "bool";
	entry_bool->size = 1;
	entry_bool->next = entry_null;

	entry_null->name = "null";
	entry_null->size = 1;
	entry_null->next = NULL;

	typetable = entry_int;

}