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

bool cerca(lista_t lista, int value) {
    if (lista == NULL)
        return false;
    if (lista->value == value)
        return true;
    return cerca(lista->next, value);
}

int minimo(lista_t lista) {
    if (lista == NULL)
        throw 1;
    int min = lista->value;
    do {
        if (min > lista->value)
            min = lista->value;
        lista = lista->next;
    } while (lista != NULL);
    return min;
}
int massimo(lista_t lista) {
    if (lista == NULL)
        throw 1;
    int max = lista->value;
    do {
        if (max < lista->value)
            max = lista->value;
        lista = lista->next;
    } while (lista != NULL);
    return max;
}