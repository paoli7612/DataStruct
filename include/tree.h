struct nodeTree_t {
    int value;
    nodeTree_t* left;
    nodeTree_t* right;
};

typedef nodeTree_t *tree_t;
void print(tree_t albero);