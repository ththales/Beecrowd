#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal, reajuste, novo_sal;
    int perc;
    scanf("%f", &sal);
    if(sal>=0 && sal<=400.00)
    {
        reajuste = 0.15*sal;
        novo_sal = sal+reajuste;
        perc = 15;
    }
    else if(sal>=400.01 && sal<=800)
    {
        reajuste = 0.12*sal;
        novo_sal = sal+reajuste;
        perc = 12;
    }
    else if(sal>=800.01 && sal<=1200.00)
    {
        reajuste = 0.10*sal;
        novo_sal = sal+reajuste;
        perc = 10;
    }
    else if(sal>=1200.01 && sal<=2000.00)
    {
        reajuste = 0.07*sal;
        novo_sal = sal+reajuste;
        perc = 7;
    }
    else if(sal>=2000.00)
    {
        reajuste = 0.04*sal;
        novo_sal = sal+reajuste;
        perc = 4;
    }
    printf("Novo salario: %.2f\n", novo_sal);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %\n", perc);
    return 0;
}