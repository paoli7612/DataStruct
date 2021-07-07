
#include "../include/list.h"

using namespace list;

int list::value(node_list_t *node)
{
    return node->value;
}
list_t &list::tail(node_list_t *node)
{
    return node->next;
}

void list::print(list_t list)
{
    if (list == NULL)
        return;
    else {
        std::cout << value(list) << " ";
        print(tail(list));
    }
}

void list::add_head(list_t &list, const int value);
void list::add_tail(list_t &list, const int value);