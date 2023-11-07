#include "vetor.h"

#include <stdio.h>
#include <stdlib.h>

int* aloca_vet(int tam)
{
    int* vet;
    vet = (int*) malloc(tam*sizeof(int));
    return vet;
}

int* pegaDiagonalPrincipal(int ordem, int** mat)
{
    int* vet = aloca_vet(ordem);
    for (int i = 0; i < ordem; i++)
    {
        vet[i] = mat[i][i];
    }
    return vet;
}

void imprime_vet(int* vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ",vet[i]);
    }
    
}
