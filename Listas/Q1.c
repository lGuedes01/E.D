#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    Lista* l;
    l = criaLista();
    int r = rand() % 10 + 1;
    for (int i = 0; i < r; i++)
    {
        l = insereListaInicio(l,i);
    }
    int comp = comprimento(l);
    printf("A lista contem %d de comprimento\nO rand = %d\n",comp, r);
    system("pause");
    return 0;
}
