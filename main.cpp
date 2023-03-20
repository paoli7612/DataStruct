#include <iostream>

#include "include/liste.h"

using namespace std;

int main(int argc, char const *argv[])
{
    lista_t lista = NULL;

    stampa(lista);

    aggiungi_coda(lista, 1);
    aggiungi_coda(lista, 2);
    aggiungi_coda(lista, 3);
    aggiungi_coda(lista, 4);

    aggiungi_testa(lista, 1);
    aggiungi_testa(lista, 2);
    aggiungi_testa(lista, 3);
    aggiungi_testa(lista, 4);

    stampa(lista);

    cout << endl;


    
    return 0;
}
