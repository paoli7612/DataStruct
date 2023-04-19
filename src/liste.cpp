#include <iostream>

#include "../include/list.h"

void print(list_t list) {
    if (list == NULL)
        std::cout << std::endl;
    else {
        std::cout << list->value << " ";
        print(list->next);
    }
}

nodeLista_t *nuovo_node(int value) {
    return new nodeLista_t{value, NULL};
}

void add_head(list_t &list, int value) {
    add_head(list, nuovo_node(value));
}
void add_tail(list_t &list, int value) {
    add_tail(list, nuovo_node(value));
}

void add_head(list_t &list, nodeLista_t* node) {
    node->next = list;
    list = node;
}
void add_tail(list_t &list, nodeLista_t* node) {
    if (list == NULL)
        list = node;
    else
        add_tail(list->next, node);
}

bool cerca(list_t list, int value) {
    if (list == NULL)
        return false;
    if (list->value == value)
        return true;
    return cerca(list->next, value);
}

int minimum(list_t list) {
    if (list == NULL)
        throw 1;
    int min = list->value;
    do {
        if (min > list->value)
            min = list->value;
        list = list->next;
    } while (list != NULL);
    return min;
}
int maximum(list_t list) {
    if (list == NULL)
        throw 1;
    int max = list->value;
    do {
        if (max < list->value)
            max = list->value;
        list = list->next;
    } while (list != NULL);
    return max;
}

list_t list_random(int len, int min, int max) {
    list_t l = NULL;
    for (int i=0; i<len; i++)
        add_head(l, rand() % (max+min-1) + min);
    return l;
}