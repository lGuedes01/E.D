#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "matriz.h"
#include "lista.h"

struct identidade
{
    int lin;
    int col;
    int ordem;
    int** mat;
    Lista* prim;
};
typedef struct identidade Identidade;

int main()
{
    srand(time(0));
    Identidade idn;
    printf("ESCOLHA A ORDEM DA MATRIZ QUADRADA: ");
    scanf("%d", &idn.ordem);
    idn.lin = idn.col = idn.ordem;
    idn.mat = aloca_matriz(idn.lin,idn.col);
    printf("INICIALIZANDO MATRIZ: \n");
    inicializaMatriz(idn.lin,idn.col,idn.mat);
    imprimeMatriz(idn.lin,idn.col,idn.mat);
    idn.prim = lista_cria();
    idn.prim = procuraElementoForaDaDiagonal(idn.lin,idn.col,idn.mat);
    if (idn.prim == NULL)
        printf("Nenhum elemento NAO NULO fora da diagonal principal\n");
    else
        printf("Elementos NAO NULOS fora da diagonal principal: \n");
    imprimeLista(idn.prim);
    system("pause");
    return 0;
}
