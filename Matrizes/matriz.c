#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializaMatriz(int n, int m, int** mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Digite um numero: ");
            scanf("%d", &mat[i][j]);
        }
        
    }
    
}

void mostraMatriz(int n, int m, int** mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
        
    }
}

void inicializaMatrizRand(int n, int m, int** mat, int numMax)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = rand() % numMax+1;
        }
        
    }
}

int** aloca_matriz(int n, int m)
{
    int** mat;
    mat = (int**) malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        mat[i] = (int*) malloc(m*sizeof(int));
    }
    return mat;
}

void desaloca_matriz(int n, int** mat)
{
    for (int i = 0; i < n; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

int** soma_matriz (int n, int m, int** mat1, int** mat2)
{
    int** auxMat;
    auxMat = aloca_matriz(n,m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            auxMat[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    return auxMat;
    
}