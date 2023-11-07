#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "filas.h"

int main()
{
    Fila* f_res;
    f_res = cria_fila();
    Fila* f1;
    f1 = cria_fila();
    Fila* f2;
    f2 = cria_fila();

    for (int i = 1; i < 8; i++)
        insere_fila(f1,i);
    printf("FILA 1:\n");
    imprime_fila(f1);
    for (int i = 5; i > 0; i--)
        insere_fila(f2,i);
    printf("FILA 2:\n");
    imprime_fila(f2);
    
    printf("FILA 3:\n");
    alterna_filas(f_res,f1,f2);
    imprime_fila(f_res);
    system("pause");
    return 0;
}