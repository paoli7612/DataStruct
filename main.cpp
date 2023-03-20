#include <iostream>

#include "include/liste.h"

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    lista_t lista = lista_casuale(100, 1, 10);

    stampa(lista);

    cout << "Il minimo è " << minimo(lista) << endl;
    cout << "Il massimo è " << massimo(lista) << endl;


    cout << endl;
    return 0;
}
