#ifndef ARVORES_H
#define ARVORES_H

struct tree
{   
    int info;
    struct tree* l;
    struct tree* r;
};

typedef struct tree Tr;

Tr* create_empty_tree(void);
Tr* create_tree(int inf, Tr* l, Tr* r);
Tr* free_tree(Tr* t);
int empty_tree(Tr* t);
int belong_tree(Tr* t, int info);
void print_tree(Tr* t);
int count_node(Tr* t, int count);

#endif