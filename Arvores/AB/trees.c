#include <stdio.h>
#include <stdlib.h>

#include "trees.h"

Tr* create_empty_tree(){
    return NULL;
}


Tr* create_tree(int inf, Tr* stl, Tr* str){
    Tr* t = (Tr*)malloc(sizeof(Tr));
    t->info = inf;
    t->l = stl;
    t->r = str;
    return t;
}

int empty_tree(Tr* t){
    return t == NULL;
}

Tr* free_tree(Tr* t){
    if(!empty_tree(t))
    {
        free_tree(t->l);
        free_tree(t->r);
        free(t);
    }
    return NULL;
}

int belong_tree(Tr* t, int info){
    if (empty_tree(t))
        return 0;
    else
        return t->info == info || belong_tree(t->l, info) || belong_tree(t->r, info);    
}

void print_tree(Tr* t){
    if (!empty_tree(t))
    {
        print_tree(t->l);
        printf("%d ", t->info);
        print_tree(t->r);
    }   
}

int count_node(Tr* t, int count){
    if (t != NULL)
    {
        count = count_node(t->l, count);
        count = count_node(t->r, count);
    }
    else
        return count;
    if (t->info % 2 == 0)
        return count + 1;
    return count;
        
        
    
}