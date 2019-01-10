struct Gsymbol *symtable = NULL;
int location = 4096;


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
		varlist->type = type;
		varlist = varlist->left;
	}
}

void displayTable () {
	struct Gsymbol *temp = symtable;
	while(temp != NULL) {
		printf("name:%s, type:%d, size1:%d, size2:%d start location:%d\n", temp->name, temp->type, temp->size1, temp->size2, temp->binding);
		temp = temp->next;
	}
}