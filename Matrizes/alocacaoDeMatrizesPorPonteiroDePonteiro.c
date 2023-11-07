#include <stdio.h>
#include <stdlib.h>

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
        
    }
}

int main()
{
    int** mat;
    int n = 2, m = 2;
    mat = (int**) malloc(n*sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        mat[i] = (int*) malloc(m*sizeof(int));
    }
    inicializaMatriz(n,m,mat);
    mostraMatriz(n,m,mat);
    
    return 0;
}