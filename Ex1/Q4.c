#include <stdio.h>
#include <stdlib.h>


void ini_vet(int* vet)
{
    printf("Digite 10 numeros para o vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (vet + i)); 
    }
    
}

void invert_vet(int* vet)
{
    int* aux;
    aux = (int*)malloc(10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
       *(aux + i) =  *(vet + (10 - 1) - i);
    }
    for (int i = 0; i < 10; i++)
    {
        *(vet + i) = *(aux + i);
    }
    free(aux);
}

void printa_vet(int* vet)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main()
{
    int *vet;
    vet = (int*) malloc(10*sizeof(int));
    ini_vet(vet);
    printa_vet(vet);
    invert_vet(vet);
    printa_vet(vet);
    return 0;
}
