#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool dentro_ret(int x, int y, int x0, int y0, int x1, int y1)
{
    if (x < x0 || x > x1 || y < y0 || y > y1)
        return false;
    return true;
    
}


int main()
{
    int x0,y0,x1,y1;
    int x,y;
    x0 = 0;
    y0 = 0;
    x1 = 10;
    y1 = 10;
    printf("Digite uma coordenada: ");
    scanf("%d", &x);
    scanf("%d", &y);
    if (dentro_ret(x,y,x0,y0,x1,y1))
        printf("Dentro\n");
    else
        printf("Fora\n");
    
    return 0;
}

