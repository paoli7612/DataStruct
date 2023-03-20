#include <iostream>

#include "include/liste.h"

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    lista_t lista = NULL;

    for (int i=0; i<10; i++) {
        aggiungi_coda(lista, rand()%10);
    }

    stampa(lista);

    if (cerca(lista, 3))
        cout << "C'è il numero 3" << endl;

    cout << endl;
    return 0;
}
