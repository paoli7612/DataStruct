#include <iostream>

#include "include/liste.h"

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    lista_t lista = NULL;

    for (int i=0; i<10; i++) {
        aggiungi_coda(lista, rand()%10 + 10);
    }

    stampa(lista);

    cout << "Il minimo è " << minimo(lista) << endl;
    cout << "Il massimo è " << massimo(lista) << endl;


    cout << endl;
    return 0;
}
