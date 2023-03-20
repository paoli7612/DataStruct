#include <iostream>

#include "../include/liste.h"

void stampa(lista_t lista) {
    if (lista == NULL)
        std::cout << std::endl;
    else {
        std::cout << lista->value << " ";
        stampa(lista->next);
    }

}

node_t *nuovo_nodo(int value) {
    return new node_t{value, NULL};
}

void aggiungi_testa(lista_t &lista, int value) {
    aggiungi_testa(lista, nuovo_nodo(value));
}
void aggiungi_coda(lista_t &lista, int value) {
    aggiungi_coda(lista, nuovo_nodo(value));
}

void aggiungi_testa(lista_t &lista, node_t* nodo) {
    nodo->next = lista;
    lista = nodo;
}
void aggiungi_coda(lista_t &lista, node_t* nodo) {
    if (lista == NULL)
        lista = nodo;
    else
        aggiungi_coda(lista->next, nodo);
}
