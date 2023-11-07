#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "matriz.h"
#include "lista.h"

struct cubo
{
    int*** mat;
    int x;
    int y;
    int z;
};
typedef struct cubo Cubo;

int main()
{
    srand(time(0));
    Cubo cubo;
    cubo.x = 3;
    cubo.y = 3;
    cubo.z = 3;
    cubo.mat = aloca_matriz3D(cubo.x,cubo.y,cubo.z);
    preenche_matriz3D(cubo.x,cubo.y,cubo.z,cubo.mat);
    imprime_matriz3D(cubo.x,cubo.y,cubo.z,cubo.mat);
    system("pause");
    return 0;
}
