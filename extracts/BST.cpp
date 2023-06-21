#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *left;
    node_t *right;
};
typedef node_t* tree_t;

void print(tree_t tree) {

    if (tree == NULL)
        return;

    cout << tree->value << " (";
    print(tree->left);
    cout << " , ";
    print(tree->right);
    cout << ") ";
}

void add(tree_t &tree, node_t *node) {
    if (tree == NULL) {
        tree = node;
    } else {
        if (tree->value <= node->value) {
            add(tree->right, node);
        } else {
            add(tree->left, node);
        }
    }
}

void add(tree_t &tree int value) {
    add(tree, new node_t {value, NULL, NULL});
}

int main() {

    tree_t alberobello = NULL;

    add(alberobello, new node_t {4, NULL, NULL});
    add(alberobello, new node_t {6, NULL, NULL});
    add(alberobello, new node_t {5, NULL, NULL});
    add(alberobello, new node_t {3, NULL, NULL});
    add(alberobello, new node_t {1, NULL, NULL});

    print(alberobello);

}