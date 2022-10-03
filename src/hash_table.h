//hash table item, strores a key value pair
typedef struct {
    char* key;
    char* value;
} ht_item;

//hash  able
typedef struct {
    int size;
    int count;
    ht item** items;
} ht_hash_table;


