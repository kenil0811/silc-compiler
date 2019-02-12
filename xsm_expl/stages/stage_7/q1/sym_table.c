struct Gsymbol *gsymtable = NULL;
struct Typetable *typetable = NULL;
struct Ltable *loctables = NULL;
struct Classtable *classtable = NULL;
int location = 4096;
int arg_add=-3;
int loc_add=1;
int flabel = 0;
int fieldindex = 0;
int classindex = 0;
struct Classtable *currclassptr = NULL;
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
	int flag=0;
	if(currclassptr != NULL) {
		struct Memberfunclist *entry = cFuncLookup(currclassptr ,funcname);
		if(entry->type != type) {
			printf("%d,%d\n", entry->type,type);
			printf("Function %s return type mismatch\n", funcname);
			exit(0);
		}
	}
	else {
		struct Gsymbol *entry = gLookup(funcname);
		if(entry->type != type) {
			printf("%d,%d\n", entry->type,type);
			printf("Function %s return type mismatch\n", funcname);
			exit(0);
	}
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
    printf("hmm\n");
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
	struct Param *list2, *temp2;
	if(currclassptr != NULL) {
		struct Memberfunclist *entry = cFuncLookup(currclassptr ,funcname);
		list2 = entry->paramlist;
		if(ltable==NULL || entry==NULL) {
			printf("Function not declared\n");
			exit(0);
	}
	}
	else {
		struct Gsymbol *entry = gLookup(funcname);
		list2 = entry->paramlist;
		if(ltable==NULL || entry==NULL) {
			printf("Function not declared\n");
			exit(0);
	}
	}
	
	
	struct Param *list1 = list;
	temp2 = list2;
	
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
	list2=temp2;
	while(temp!=NULL && list2!=NULL) {
		if(temp->type!=list2->type || strcmp(temp->name,list2->name)!=0) {
			printf("%s,,%s\n",temp->type->name, list2->type->name);
			printf("%s,,%s\n",temp->name, list2->name);
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

void assignType (struct tnode* node, struct tnode *varlist) {
	struct Gsymbol *temp;
	while(varlist != NULL) {
		temp = gLookup(varlist->varname);
		temp->type = node->type;
		temp->ctype = node->ctype;
		varlist->type = node->type;
		varlist->ctype = node->ctype;
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

	struct Classtable *centry = classtable;
	printf("----Class Tables-----\n");
	while(centry != NULL) {
		printf("\nclass name:%s, classindex:%d, filedcount:%d, methodcount:%d\n", centry->name, centry->classindex, centry->fieldcount, centry->methodcount);
		printf("--Field members--\n");
		struct Fieldlist *f = centry->memberfield;
		while(f != NULL) {
			printf("name:%s, index:%d, type:%s, class:%s\n", f->name, f->fieldindex, f->type->name, f->ctype->name);
			f=f->next;
		}
		printf("\n--Methods--\n");
		struct Memberfunclist *method = centry->vfuncptr;
		while(method != NULL) {
			printf("\nmethod name:%s, type:%s, funcposition:%d, flabel:%d\n",method->name, method->type->name, method->funcposition, method->flabel );
			printf("-Arguments-\n");
			struct Param *pl = method->paramlist;
			while(pl!=NULL) {
				printf("%s, ", pl->name);
				pl=pl->next;
			}
			printf("\n");
			method=method->next;

		}
		centry = centry->next;
	}

	struct Gsymbol *temp = gsymtable;
	printf("\n----Global Table-----\n");
	while(temp != NULL) {
		if(temp->type != NULL) {
			printf("name:%s, type:%s, size1:%d, size2:%d start location:%d, flabel:%d\n", temp->name, temp->type->name, temp->size1, temp->size2, temp->binding, temp->flabel);
		}
		else {
			printf("name:%s, class type:%s, size1:%d, size2:%d start location:%d, flabel:%d\n", temp->name, temp->ctype->name, temp->size1, temp->size2, temp->binding, temp->flabel);
		}
		
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

struct Classtable *cLookup(char *classname) {
	if(classname==NULL)
		return NULL;
	struct Classtable *temp = classtable;
	while(temp != NULL) {
		if(strcmp(classname, temp->name) == NULL)
			return temp;
		temp = temp->next;
	}
	return NULL;
}

struct Classtable *insertClass(char *classname, char *parentname) {
	if(cLookup(classname) != NULL) {
		printf("Class %s already declared\n", classname);
		exit(0);
	}
	struct Classtable *entry = (struct Classtable*)malloc(sizeof(struct Classtable));
	entry->name = classname;
	entry->parentptr = cLookup(parentname);
	entry->memberfield = NULL;
	entry->vfuncptr = NULL;
	entry->classindex = classindex++;
	entry->fieldcount = 0;
	entry->methodcount = 0;
	entry->next = classtable;
	classtable = entry;
	return entry;
}

struct Fieldlist *cFieldLookup(struct Classtable *classentry, char *fieldname) {
	struct Fieldlist *temp = classentry->memberfield;
	while(temp!=NULL) {
		if(strcmp(temp->name, fieldname) == 0)
			return temp;
		temp=temp->next;
	}
	return NULL;
}
 
void insertClassField(struct Classtable *classentry, struct Typetable *type, char *fieldname) {
	if(cFieldLookup(classentry, fieldname) != NULL) {
		printf("Field %s already declared\n", fieldname);
		exit(0);
	}
	struct Fieldlist *field = (struct Fieldlist*)malloc(sizeof(struct Fieldlist));
	field->name = fieldname;
	field->type = type;
	field->ctype = classentry;
	
	field->fieldindex = classentry->fieldcount++;
	field->next = classentry->memberfield;
	classentry->memberfield = field;
	
	if(classentry->memberfield->fieldindex > 8) {
		printf("Class %s has more than 8 fields\n", classentry->name);
		exit(0);
	}
}

struct Memberfunclist *cFuncLookup(struct Classtable *classentry, char *funcname) {
	struct Memberfunclist *temp = classentry->vfuncptr;
	//printf("wsedff\n");
	while(temp != NULL) {
	//	printf("poi\n");
		//printf("%s\n", temp->name);
		if(strcmp(temp->name, funcname) == 0) {
	//		printf("doi\n");
			return temp;
		}
	//	printf("loi\n");
		temp=temp->next;
	}
	//printf("sgg\n");
	return NULL;
}

void insertClassFunction(struct Classtable *classentry, struct Typetable *type, char *funcname, struct Param *paramlist) {
	if(cFuncLookup(classentry, funcname) != NULL) {
		printf("Method %s already declared\n", funcname);
		exit(0);
	}
	struct Memberfunclist *function = (struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
	function->name = strdup(funcname);
	function->type = type;
	function->paramlist = paramlist;
	function->funcposition = classentry->methodcount++;
	function->flabel = flabel++;
	function->next = classentry->vfuncptr;
	classentry->vfuncptr = function;
}