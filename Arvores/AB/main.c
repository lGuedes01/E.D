#include <stdio.h>
#include <stdlib.h>

#include "trees.h"

int main()
{
    Tr* t = create_tree(1,
    create_tree(2,
    create_tree(4,create_empty_tree(),create_empty_tree()),
    create_tree(5,create_empty_tree(),create_empty_tree())),

    create_tree(3,
    create_tree(6,create_empty_tree(),create_empty_tree()),
    create_tree(7,create_empty_tree(),create_empty_tree()))
    );
    print_tree(t);
    int coutnode = count_node(t,0);
    printf("\n%d\n",coutnode);
    system("pause");
    return 0;
}
