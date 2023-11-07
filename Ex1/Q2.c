#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void verifica_malloc(int* vet)
{
    if (vet == NULL)
        exit(1);
}

int negativos(int* vet, int tam)
{
    int aux = 0;
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] < 0)
            aux++;
    }
    return aux;
    
}

void inicializa_vet(int* vet, int tam)
{
    srand(time(0));
    for (int i = 0; i < tam; i++)
    {
        vet[i] = rand()%21 - 10;
    }
    
}

void printa_vet(int* vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main()
{
    int tam;
    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tam);
    int* vet;
    vet = (int*) malloc(tam*sizeof(int));
    verifica_malloc(vet);
    inicializa_vet(vet, tam);
    int neg = negativos(vet, tam);
    printf("No vetor tem %d numeros negativos\n", neg);
    printa_vet(vet, tam);
    return 0;
}
