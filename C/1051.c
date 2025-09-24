#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal, imposto_renda;
    scanf("%f", &sal);
    if(sal>=0 && sal<=2000)
    {
        printf("Isento\n");
    }
    else if(sal>=2000.01 && sal<=3000)
    {
        imposto_renda = (sal-2000)*0.08;
        printf("R$ %.2f\n", imposto_renda);
    }
    else if(sal>=3000.01 && sal<=4500)
    {
        imposto_renda = 80+ (sal-3000)*0.18;
        printf("R$ %.2f\n", imposto_renda);
    }
    else if (sal>=4500)
    {
        imposto_renda = 350 + (sal-4500)*0.28;
        printf("R$ %.2f\n", imposto_renda);
    }
    return 0;
}