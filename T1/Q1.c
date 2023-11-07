#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "matriz.h"
#include "vetor.h"

struct diagonal
{
    int ordem;
    int* v;
};
typedef struct diagonal Diagonal;

struct matriz
{
    int** mat;
    int l;
    int c;
};
typedef struct matriz Matriz;

struct pos
{
    int l;
    int c;
};

typedef struct pos Pos;


int main()
{
    char continuar = 's';
    Diagonal dp;
    dp.ordem = 3;
    Matriz* matriz;
    matriz->l = matriz->c = dp.ordem;
    matriz->mat = aloca_matriz(matriz->l, matriz->c);
    inicializaMatriz(matriz->l, matriz->c, matriz->mat);
    imprimeMatriz(matriz->l, matriz->c, matriz->mat);
    dp.v = aloca_vet(dp.ordem);
    dp.v = pegaDiagonalPrincipal(dp.ordem, matriz->mat);
    desaloca_matriz(matriz->l, matriz->mat);
    while (continuar == 's')
    {
        Pos* pos;
        pos = (Pos*)malloc(sizeof(Pos));
        printf("\nQual elemento quer consultar: \n");
        printf("Linha: ");
        scanf("%d",&pos->l);
        printf("Coluna: ");
        scanf("%d",&pos->c);
        if (pos->l == pos->c)
        {
            int n = dp.v[pos->l-1];
            printf("Elemento %d dentro da diagonal principal\n",n);
        }
        else
            printf("Elemento fora da diagonal principal\n");
        
        printf("Quer continuar[s|n]? ");
        scanf(" %c",&continuar);
    }
    
    return 0;
}
