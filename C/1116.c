#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares;
    float x, y, divisao;
    scanf("%d", &pares);
    for(pares; pares>0; pares--)
    {
        scanf("%f%f\n", &x, &y);
        divisao = x/y;
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n", divisao);
        }
    }
    return 0;
}