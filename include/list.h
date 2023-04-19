struct nodeLista_t {
    int value;
    nodeLista_t* next;
};

typedef nodeLista_t *list_t;

void print(list_t list);
void add_head(list_t &list, int value);
void add_tail(list_t &list, int value);
void add_head(list_t &list, nodeLista_t* node);
void add_tail(list_t &list, nodeLista_t* node);

bool cerca(list_t list, int value);

int minimum(list_t list);
int maximum(list_t list);

list_t list_random(int len, int min, int max);