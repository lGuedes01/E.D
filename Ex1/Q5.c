#include <stdio.h>
#include <stdlib.h>


int* aloca_vet(int n)
{
    return (int*) malloc(n*sizeof(int));
}

void le_num(int n, int* vet)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", vet+i);
    }
}

float calc_media(int n, int* vet)
{
    float med = 0;
    for (int i = 0; i < n; i++)
    {
        med += vet[i];
    }
    return med/n;
}

void mostra_num_acima_da_media(int n, int* vet, float media)
{

    for (int i = 0; i < n; i++)
    {
        if (vet[i] > media)
        {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
    
}

int main()
{
    int *vet;
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = aloca_vet(n);
    le_num(n, vet);
    float media = calc_media(n,vet);
    mostra_num_acima_da_media(n, vet, media);
    return 0;
}
