#include <iostream>

#include "../include/tree.h"

void print(albero_t albero) {
    if (albero == NULL)
        return;
    
    std::cout << albero->value << std::endl;

}
