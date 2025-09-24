#include <stdio.h>

int main()
{
    int tipo_comb, tot_1 = 0, tot_2 = 0, tot_3 = 0;
    scanf("%d", &tipo_comb);
    while(tipo_comb!=4)
    {
        if(tipo_comb==1)
        {
            tot_1++;
        }
        else
        {
            if(tipo_comb==2)
            {
                tot_2++;
            }
            else
            {
                if(tipo_comb==3)
                {
                    tot_3++;
                }
            }
        }
        scanf("%d", &tipo_comb);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", tot_1);
    printf("Gasolina: %d\n", tot_2);
    printf("Diesel: %d\n", tot_3);
    return 0;
}