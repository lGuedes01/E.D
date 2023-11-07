#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct diagonal
{
    int ordem;
    int* v;
};
typedef struct diagonal Diagonal;

int* aloca_vet(int tam)
{
    int* vet;
    vet = (int*) malloc(tam*sizeof(int));
    return vet;
}

Diagonal armazena_diagonal_principal(Diagonal dp){
    for (int i = 0; i < dp.ordem; i++)
    {
        printf("Indique o elemento da posicao [%d][%d]: ", i,i);
        scanf(" %d", &dp.v[i]);
    }
    return dp;
}

void imprime_matriz(Diagonal dp){
    for (int i = 0; i < dp.ordem; i++)
    {
        for (int j = 0; j < dp.ordem; j++)
        {
            if (i == j)
                printf("%d ", dp.v[i]);
            else
                printf("0 ");
            
        }
        printf("\n");
    }
    
}

void consulta_elemento_matriz(Diagonal dp){
    int linha, coluna;
    printf("Digite a posicao que quer buscar:\n");
    printf("Linha: ");
    scanf(" %d", &linha);
    printf("Coluna: ");
    scanf(" %d", &coluna);
    if (linha == coluna && (linha < dp.ordem && coluna < dp.ordem) && (linha >= 0 && coluna >= 0))
        printf("Elemento da matriz[%d][%d] eh %d\n", linha, coluna, dp.v[linha]);
    else if((linha >= dp.ordem || coluna >= dp.ordem) || (linha < 0 || coluna < 0))
        printf("Elemento da matriz[%d][%d] nao existe\n", linha, coluna);
    else
        printf("Elemento da matriz[%d][%d] eh 0\n", linha, coluna);
}

int main()
{
    Diagonal dp;
    printf("Informe a ordem da matriz: ");
    scanf("%d", &dp.ordem);
    dp.v = aloca_vet(dp.ordem);
    armazena_diagonal_principal(dp);
    imprime_matriz(dp);
    consulta_elemento_matriz(dp);
    return 0;
}
