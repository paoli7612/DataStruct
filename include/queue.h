#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

namespace queue
{
    struct node_queue_t {
        int value;
        node_queue_t *next;
    };

    struct queue_t {
        node_queue_t *head;
        node_queue_t *tail;
    };

    int value(node_queue_t *node);
    queue_t &tail(node_queue_t *node);

    void print(queue_t q);
    void add_head(queue_t &q, const int value);
    void add_tail(queue_t &q, const int value);
}

#endif // QUEUE_H