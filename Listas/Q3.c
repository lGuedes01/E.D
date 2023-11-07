#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Lista* l1;
    Lista* l2;
    l1 = criaLista();
    l2 = criaLista();
    l1 = insereListaFim(l1,1);
    l1 = insereListaFim(l1,2);
    imprimeLista(l1);
    l2 = insereListaFim(l2,3);
    l2 = insereListaFim(l2,4);
    imprimeLista(l2);
    Lista* l3 = concatena(l1,l2);
    imprimeLista(l3);
    system("pause");
    
    return 0;
}
