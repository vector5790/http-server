struct Item{
	struct Item* next;
	char* key;
	char* val;
};

/*list*/
struct List{
	struct Item* start;
	struct Item* end;
	int length;
};
void initItem(struct Item* Item);
void initList(struct List* Item);
struct Item* newItem(char* key,char* value);


void listAppend(struct List* list,struct Item* item);
void listPrint(struct List* List);
void listInsert(struct List* list,int index,struct Item* item);
struct Item* listGet(struct List* list,int index);
void listSet(struct List* list,int index,struct Item* item);
void listRemove(struct List* list,struct Item* item);

/*Map*/
#define HashTableLen 100
struct Map{
	struct List* table[HashTableLen];
	int table_len;
	int item_cnt;
};

void initMap(struct Map* map);
void releaseMap(struct Map* map);
int hashCode(char* str);

void mapPush(struct Map* map,struct Item* item);
void mapPrint(struct Map* map);
char* mapGet(struct Map* map,char* Key);

