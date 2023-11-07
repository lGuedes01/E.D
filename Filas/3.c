#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "filas.h"

int main(int argc, char const *argv[])
{
    Fila* f1;
    Fila* f2;
    f1 = cria_fila();
    f2 = cria_fila();

    insere_fila(f1,1);
    insere_fila(f1,3);
    insere_fila(f1,5);
    insere_fila(f1,7);
    insere_fila(f1,9);
    insere_fila(f1,11);
    insere_fila(f1,12);
    insere_fila(f1,14);
    insere_fila(f1,18);
    insere_fila(f1,20);
    imprime_fila(f1);

    insere_fila(f2,2);
    insere_fila(f2,6);
    insere_fila(f2,8);
    insere_fila(f2,10);
    imprime_fila(f2);

    Fila* f3;
    f3 = cria_fila();

    f3 = ordena(f1,f2);
    imprime_fila(f3);

    system("pause");
    return 0;
}
