#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"


int main()
{
    Pilha* p1;
    Pilha* p2;
    p1 = cria_pilha();
    p2 = cria_pilha();
    push(p1,6);
    push(p1,5);
    push(p1,4);
    push(p2,3);
    push(p2,2);
    push(p2,1);
    printf("PILHA 1:\n");
    imprime_pilha(p1);
    printf("PILHA 2:\n");
    imprime_pilha(p2);
    printf("CONCATENACAO:\n");
    p1 = concatena(p1,p2);
    imprime_pilha(p1);
    system("pause");
    return 0;
}
