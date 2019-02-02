struct Gsymbol *gsymtable = NULL;
struct Ltable *loctables = NULL;
int location = 4096;
int arg_add=-3;
int loc_add=1;
int flabel = 0;
char *currfunc;


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

void insertMain(char *varname, int type) {
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

void checkTypeValidity(char *funcname, int type) {
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

struct Param* createParam(int type, char *name) {
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

	list1=ltable->entry;
	list2=entry->paramlist;
	while(list1!=NULL && list2!=NULL) {
		if(list1->type!=list2->type || strcmp(list1->name,list2->name)!=0) {
			printf("Arguments mismatch\n");
			exit(0);
		}
		list1=list1->next;
		list2=list2->next;
	}

	
	if(list1!=NULL || list2!=NULL) {
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

void assignType (int type, struct tnode *varlist) {
	struct Gsymbol *temp;
	while(varlist != NULL) {
		temp = gLookup(varlist->varname);
		temp->type = type;
		varlist->type = type;
		varlist = varlist->left;
	}
}

void assignLocType (int type, struct tnode *varlist) {
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
	struct Gsymbol *temp = gsymtable;
	printf("----Global Table-----\n");
	while(temp != NULL) {
		printf("name:%s, type:%d, size1:%d, size2:%d start location:%d, flabel:%d\n", temp->name, temp->type, temp->size1, temp->size2, temp->binding, temp->flabel);
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
	        printf("name:%s, type:%d, binding:%d\n",locentry->name, locentry->type, locentry->binding);
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
		flag=1;
		struct Ltable *function =  funcLookup(currfunc);
		if(function!=NULL) {
		struct Lentry *locentry = locLookup(function->entry, varname);
	
		if(locentry!=NULL) {
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