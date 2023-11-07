#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <time.h>

int main()
{
    srand(time(0));
    Lista* l1;
    l1 = criaLista();
    for (int i = 0; i < 5; i++)
    {
        l1 = insereListaFim(l1,i);
    }
    imprimeLista(l1);
    l1 = lst_retira_ant(l1,5);
    imprimeLista(l1);
    system("pause");
    return 0;
}
