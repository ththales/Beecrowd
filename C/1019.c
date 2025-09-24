#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, horas, minutos, segundos;
    scanf("%d", &num);
    horas = num/3600;
    minutos = num % 3600/60;
    segundos = num % 3600 % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}