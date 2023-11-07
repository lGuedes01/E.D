#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    Pilha* p;
    p = cria_pilha();
    push_frase(p,"araras");
    bool palin = palindromo(p);
    if (palin)
    {
        printf("eh palindromo\n");
    }
    else
        printf("nao eh palindromo\n");
    
    system("pause");
    return 0;
}
