#include <stdlib.h>
#include <stdio.h>
#include "lista2.h"

int main()
{
    Lista* l = lista_cria();
    for (int i = 0; i<2; i++)
    {
        l = lista_insere(l, i);
    }
    imprimeLista(l);
    l = lista_retira_ant(l,1);
    l = lista_retira(l,1);
    imprimeLista(l);
    system("pause");
    return 0;
}
