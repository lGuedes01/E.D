#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int** mat1;
    int** mat2;
    int** mat3;
    int n = 2, m = 2;
    mat1 = aloca_matriz(n,m);
    inicializaMatrizRand(n,m,mat1,10);
    mat2 = aloca_matriz(n,m);
    inicializaMatrizRand(n,m,mat2,10);
    mat3 = aloca_matriz(n,m);
    mat3 = soma_matriz(n,m,mat1,mat2);
    mostraMatriz(n,m,mat1);
    printf("\n");
    mostraMatriz(n,m,mat2);
    printf("\n");
    mostraMatriz(n,m,mat3);
    printf("\n");
    system("pause");
    return 0;
}