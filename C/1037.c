#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num;
    scanf("%lf", &num);
    if(num>=0 && num<=25)
    {
        printf("Intervalo [0,25]\n");
        return 0;
    }
    else if(num>=25 && num<=50)
    {
        printf("Intervalo (25,50]\n");
        return 0;
    }
    else if(num>=75 && num<=100)
    {
        printf("Intervalo (75,100]\n");
        return 0;
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}