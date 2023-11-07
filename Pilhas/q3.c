#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "pilha.h"

int main()
{
    Pilha* p = cria_pilha();
    srand(time(0));
    int tamPilha = tam_pilha(p);
    printf("Tamanho da pilha: %d\n", tamPilha); 
    for (int i = 0; i < rand() % 10; i++)
    {
        push(p,rand() % 10);
    }
    tamPilha = tam_pilha(p);
    printf("Tamanho da pilha: %d\n", tamPilha); 
    if (topo(p) == -1)
        printf("pilha vazia\n");
    else
        printf("o primeiro objeto eh %d\n", topo(p));

    imprime_pilha(p);
    system("pause");
    return 0;
}
