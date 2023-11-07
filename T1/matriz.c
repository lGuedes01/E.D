#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "lista.h"

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

void inicializaMatrizNULA(int n, int m, int** mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = 0;
        }
        
    }
    
}

void inicializaMatriz(int n, int m, int** mat)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Elemento (%d,%d): ",i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
        
    }
}


void inicializaMatrizEsparsa(int n, int m, int** mat)
{
    inicializaMatrizNULA(n,m,mat);
    int elementos;
    printf("Quantos elementos deseja colocar na matriz (max: 9): ");
    scanf("%d", &elementos);
    for (int i = 0; i < elementos; i++)
    {
        int l;
        int c;
        printf("Escolha uma linha: ");
        scanf("%d", &l);
        printf("Escolha uma coluna: ");
        scanf("%d", &c);
        printf("Escolha um numero para a coordenada (%d,%d): ",l,c);
        scanf("%d", &mat[l-1][c-1]);
        printf("\n");
    }
    
}

void imprimeMatriz(int n, int m, int** mat)
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

void preencheDiagonalPrincipal(int ordem, int** mat, int numMax)
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            if (i==j)
            {
                printf("Digite o elemento da diagonal principal (%d,%d): ", i+1,j+1);
                scanf("%d", &mat[i][j]);
            }
                
            else
                mat[i][j] = 0;
        }
        
    }
    
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

void desaloca_matriz(int n, int** mat)
{
    for (int i = 0; i < n; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

int*** aloca_matriz3D(int x, int y, int z)
{
    int*** mat;
    mat = (int***)malloc(y*sizeof(int**));
    for (int i = 0; i < y; i++)
    {
        mat[i] = (int**)malloc(x*sizeof(int*));
        for (int j = 0; j < x; j++)
        {
            mat[i][j] = (int*)malloc(z*sizeof(int));
        }
        
    }
    return mat;    
}

void preenche_matriz3D(int x, int y, int z, int*** mat)
{
    for (int k = 0; k < z; k++)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("Escolha o elemento da coordenada (%d,%d,%d): ",i+1,j+1,k+1);
                scanf("%d", &mat[i][j][k]);
            }
            
        }
        
    }
       
}

void imprime_matriz3D(int x, int y, int z, int*** mat)
{
    for (int k = 0; k < z; k++)
    {
        printf("Camada %d:\n",k+1);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d ",mat[i][j][k]);
            }
            printf("\n");
        }
    }
    
}