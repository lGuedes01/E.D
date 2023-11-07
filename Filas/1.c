#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "filas.h"

int main()
{
    Fila* f;
    f = cria_fila();
    for (int i = 5; i > 0; i--)
    {
        insere_fila(f,i);
    }
    imprime_fila(f);
    system("pause");
    return 0;
}
