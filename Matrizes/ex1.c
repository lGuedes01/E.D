#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
    int** mat;
    int m = 2, n = 2;
    mat = (int**) malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        mat[i] = (int*) malloc(m*sizeof(int));
    }
    inicializaMatriz(n,m,mat);
    mostraMatriz(n,m,mat);
    system("pause");
    return 0;
}
