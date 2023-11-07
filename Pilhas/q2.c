#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    Pilha* p = cria_pilha();
    push(p,1);
    imprime_pilha(p);
    pop(p);
    imprime_pilha(p);

    for (int i = 2; i < 9; i++)
    {
        push(p,i);
        imprime_pilha(p);
    }
    system("pause");
    
    return 0;
}
