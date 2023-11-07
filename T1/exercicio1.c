#include <stdio.h>
#include <stdlib.h>

struct diagonal
{
    int ordem;
    int *v;
};
typedef struct diagonal Diagonal;

Diagonal *cria_matriz(int ordem)
{
    Diagonal *matriz_diagonal = (Diagonal *)malloc(sizeof(Diagonal));
    matriz_diagonal->ordem = ordem;
    matriz_diagonal->v = (int *)malloc(ordem * sizeof(int));

    return matriz_diagonal;
}

int pega_ordem()
{
    int ordem;
    do
    {
        printf("Digite o tamanho da matriz: \n");
        scanf(" %d", &ordem);

        if (ordem < 0)
        {
            printf("Forneça um tamanho válido! \n");
        }
    } while (ordem < 0);

    return ordem;
}

Diagonal *preenche_matriz_diagonal(Diagonal *matriz_diagonal)
{
    for (int i = 0; i < matriz_diagonal->ordem; i++)
    {
        printf("Digite o número da posicao [%d][%d]: \n", i, i);
        scanf(" %d", &matriz_diagonal->v[i]);
    }
    return matriz_diagonal;
}

void imprime_matriz_diagonal(Diagonal *matriz_diagonal)
{
    for (int i = 0; i < matriz_diagonal->ordem; i++)
    {
        printf("\n");
        for (int j = 0; j < matriz_diagonal->ordem; j++)
        {
            if (i == j)
            {
                printf("%d ", matriz_diagonal->v[i]);
            }
            else
            {
                printf("0 ");
            }
        }
    }
    printf("\n");
}

void consultar_termo_matriz(Diagonal *matriz_diagonal)
{
    int linha, coluna;
    printf("Digite a posicao a ser buscada [ ] [ ]:");
    scanf(" %d", &linha);
    scanf(" %d", &coluna);

    for (int i = 0; i < matriz_diagonal->ordem; i++)
    {
        printf("\n");
        for (int j = 0; j < matriz_diagonal->ordem; j++)
        {
            if ((i == linha) && (j == coluna))
            {
                if (i == j)
                {
                    printf("O número %d esta na posicao [%d][%d]\n", matriz_diagonal->v[i], i, i);
                    return;
                }
                else
                {
                    printf("O número 0 esta na posicao [%d][%d]\n", i, i);
                    return;
                }
            }
        }
    }
    printf(" A posicao [%d][%d] nao existe\n", linha, coluna);
}

int main()
{
    int ordem = pega_ordem();
    Diagonal *matriz_diagonal = cria_matriz(ordem);
    matriz_diagonal = preenche_matriz_diagonal(matriz_diagonal);
    imprime_matriz_diagonal(matriz_diagonal);
    consultar_termo_matriz(matriz_diagonal);

    return 0;
}