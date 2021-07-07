#ifndef LIST_H
#define LIST_H

#include <iostream>

namespace list
{
    struct node_list_t {
        int value;
        node_list_t *next;
    };
    typedef node_list_t *list_t;

    int value(node_list_t *node);
    list_t &tail(node_list_t *node);

    void print(list_t list);
    void add_head(list_t &list, const int value);
    void add_tail(list_t &list, const int value);
}

#endif // LIST_H