struct Gsymbol *symtable = NULL;
int location = 4096;


void insertSymbol (char *varname) {
	if (lookup(varname) != NULL) {
		printf("Variable %s already declared\n", varname);
		exit(0);
	} 
	struct Gsymbol* entry = (struct Gsymbol*) malloc(sizeof(struct Gsymbol));
    entry->name = strdup(varname);
    entry->size = 1;
    entry->binding = getLocation();
    entry->next = symtable;
    symtable = entry;
    return;

}

struct Gsymbol* lookup (char *varname) {
	struct Gsymbol *temp = symtable;
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

void assignType (int type, struct tnode *varlist) {
	struct Gsymbol *temp;
	while(varlist != NULL) {
		temp = lookup(varlist->varname);
		temp->type = type;
		varlist = varlist->left;
	}
}

void displayTable () {
	struct Gsymbol *temp = symtable;
	while(temp != NULL) {
		printf("name:%s, type:%d, size:%d, location:%d\n", temp->name, temp->type, temp->size, temp->binding);
		temp = temp->next;
	}
}