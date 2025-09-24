#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, anos, meses, dias;
    scanf("%d", &num);
    anos = num/365;
    meses = num % 365/30;
    dias = num % 365 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}