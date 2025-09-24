#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, soma_c_d, soma_a_b;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    soma_c_d = c+d;
    soma_a_b = a+b;
    if(b>c && d>a && soma_c_d>soma_a_b && c>0 && d>0 && a%2==0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}