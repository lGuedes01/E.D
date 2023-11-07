#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** mat;
    int n = 2, m = 3;
    mat = aloca_matriz(n,m);
    inicializaMatrizRand(n,m,mat,10);
    mostraMatriz(n,m,mat);
    desaloca_matriz(m,mat);
    system("pause");
    return 0;
}
