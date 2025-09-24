#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int med1, med2, perc, a_final, i = 1;
    while(i>0)
    {
        scanf("%d", &med1);
        if(med1==0)
        {
            return 0;
        }
        else
        {
            scanf("%d%d", &med2, &perc);
            a_final = sqrt(((med1*med2)*100)/perc);
            printf("%d\n", a_final);
        }
    }
    return 0;
}
