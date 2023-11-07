#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "matriz.h"
#include "lista.h"

struct esparsa
{
int linhas; //numero de linhas da matriz
int colunas; //numero de colunas da matriz
Lista* prim; //apontador para o primeiro noh não nulo da matriz
float porcent;
};
typedef struct esparsa Esparsa;

struct usuario
{
    int linha;
    int coluna;
    int num;
    int somatorio;
};
typedef struct usuario User;

int main()
{
    srand(time(0));
    char continuar = 's';
    Esparsa* esp;
    esp = (Esparsa*)malloc(sizeof(Esparsa));
    esp->linhas = 3;
    esp->colunas = 3;
    int** mat;
    mat = aloca_matriz(esp->linhas,esp->colunas);
    inicializaMatrizEsparsa(esp->linhas,esp->colunas,mat);
    imprimeMatriz(esp->linhas,esp->colunas, mat);
    esp->prim = lista_cria();
    esp->prim = lista_insere_nao_nulo(esp->prim,mat,esp->linhas,esp->colunas);
    desaloca_matriz(esp->linhas,mat);
    esp->porcent = porcentagem(esp->prim,esp->linhas*esp->colunas);
    if (esp->porcent < 50)
        printf("\nA matriz criada eh esparsa e tem %2.f%% de elementos nao nulos\n\n",esp->porcent);
    else
        printf("\nA matriz criada nao eh esparsa, pois tem mais da metade (%2.f%%) de elementos nao nulos\n\n",esp->porcent);

    
    User info;
    while (continuar == 's')
    {
        printf("Digite um local da matriz pra acessar:\n");
        printf("Linha: ");
        scanf("%d",&info.linha);
        printf("Coluna: ");
        scanf("%d",&info.coluna);
        info.num = busca_coordenada_lista(esp->prim, info.linha-1,info.coluna-1);
        if (info.num != 0)
            printf("O numero encontrado na posicao (%d,%d) foi %d\n",info.linha,info.coluna,info.num);
        else
            printf("A posicao (%d,%d) eh nula\n", info.linha,info.coluna);

        printf("Digite uma linha para saber o somatorio dela: ");
        scanf("%d", &info.linha);
        info.somatorio = somatorio(esp->prim, info.linha-1);
        printf("O somatorio da linha %d eh %d\n", info.linha, info.somatorio);
        printf("Quer continuar[s|n]? ");
        scanf(" %c",&continuar);
    }
    
    system("pause");
    return 0;
}
