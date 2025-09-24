#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num_casos, num, primo, i = 0;
    scanf("%d", &num_casos);
    while(i<num_casos)
    {
        i++;
        primo = 1;
        scanf("%d", &num);
        if(num<=1)
        {
            primo = 0;
        }
        else
        {
            for(int i2=2 ; i2<sqrt(num); i2++)
            {
                if(num%i2==0)
                {
                    primo = 0;
                }
            }
        }
        if(primo==1)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }
    return 0;
}
