#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int f, b, m, solic_f, solic_b, solic_m, nao_atendidos;
    scanf("%d%d%d%d%d%d", &f, &b, &m, &solic_f, &solic_b, &solic_m);
    nao_atendidos = 0;
    if(f<solic_f)
    {
        nao_atendidos += solic_f-f;
    }
    if(b<solic_b)
    {
        nao_atendidos += solic_b-b;
    }
    if(m<solic_m)
    {
        nao_atendidos += solic_m-m;
    }
    printf("%d\n", nao_atendidos);
    return 0;
}