#include <stdio.h>

int main()
{
    char nome[25];
    double sal, tot_vendas;
    scanf("%s%lf%lf", nome, &sal, &tot_vendas);
    printf("TOTAL = R$ %.2lf\n", sal+(tot_vendas*0.15));
    return 0;
}