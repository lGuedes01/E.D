#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ini_vet(int* vet, int tam)
{
    srand(time(0));
    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = rand()%11;
    }
    
}

void invert_vet(int* vet, int tam)
{
    int* aux;
    aux = (int*)malloc(tam*sizeof(int));
    for (int i = 0; i < tam; i++)
    {
       *(aux + i) =  *(vet + (tam - 1) - i);
    }
    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = *(aux + i);
    }
    free(aux);
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
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int *vet;
    vet = (int*) malloc(tam*sizeof(int));
    ini_vet(vet, tam);
    printa_vet(vet, tam);
    invert_vet(vet, tam);
    printa_vet(vet, tam);
    return 0;
}
