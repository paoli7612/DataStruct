struct node_t {
    int value;
    node_t* next;
};

typedef node_t *lista_t;

void stampa(lista_t lista);
void aggiungi_testa(lista_t &lista, int value);
void aggiungi_coda(lista_t &lista, int value);
void aggiungi_testa(lista_t &lista, node_t* nodo);
void aggiungi_coda(lista_t &lista, node_t* nodo);

bool cerca(lista_t lista, int value);

int minimo(lista_t lista);
int massimo(lista_t lista);