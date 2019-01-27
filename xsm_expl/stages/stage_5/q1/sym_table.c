struct Gsymbol *gsymtable = NULL;
struct Ltable *loctables = NULL;
int location = 4096;
char *currFunc;


void insertSymbol (char *varname, int size1, int size2) {
	if (lookup(varname) != NULL) {
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

void createLocalTable(char *funcname) {
	if(funclookup(funcname) != NULL) {
		printf("Function %s already declared\n", varname);
		exit(0);
	}
	struct Ltable *entry = (struct Ltable*)malloc(sizeof(struct Ltable));
	entry->funcname = strdup(funcname);
	entry->next = loctables;
	loctables = entry;
	return;
}



void insertFunction(char *varname, struct Param *list) {
	if (lookup(varname) != NULL) {
		printf("Function %s already declared\n", varname);
		exit(0);
	} 
	struct Gsymbol* entry = (struct Gsymbol*) malloc(sizeof(struct Gsymbol));
    entry->name = strdup(varname);
    entry->binding = getLocation();
    entry->paramlist = list;
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

struct Gsymbol* lookup (char *varname) {
	struct Gsymbol *temp = gsymtable;
	while(temp!=NULL) {
		if(strcmp(temp->name, varname) == 0) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}

struct Ltable* funclookup (char *funcname) {
	struct Ltable *temp = loctables;
	while(temp!=NULL) {
		if(strcmp(temp->funcname, funcname) == 0) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL; 
}

int getLocation() {
	return location++;
}

void assignType (int type, struct tnode *varlist) {
	struct Gsymbol *temp;
	while(varlist != NULL) {
		temp = lookup(varlist->varname);
		temp->type = type;
		varlist->type = type;
		varlist = varlist->left;
	}
}

void displayTable () {
	struct Gsymbol *temp = gsymtable;
	while(temp != NULL) {
		printf("name:%s, type:%d, size1:%d, size2:%d start location:%d\n", temp->name, temp->type, temp->size1, temp->size2, temp->binding);
		temp = temp->next;
	}
}