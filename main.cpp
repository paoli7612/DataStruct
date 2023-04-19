#include <iostream>

#include "include/liste.h"

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    list_t list = list_random(100, 1, 10);

    print(list);

    cout << "Il minimum è " << minimum(list) << endl;
    cout << "Il maximum è " << maximum(list) << endl;


    cout << endl;
    return 0;
}
