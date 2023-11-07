#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    Pilha* p = cria_pilha();
    push(p,1);
    push(p,2);
    push(p,3);
    imprime_pilha(p);
    system("pause");
    return 0;
}
