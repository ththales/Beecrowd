#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Definindo variáveis
    int x;
    double y, consumo;
    scanf("%d\n%lf", &x, &y);
    consumo = x/y;
    printf("%.3lf km/l\n", consumo);
    return 0;
}