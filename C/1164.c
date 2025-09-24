#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_casos, num, i = 0, tot, dv;
    scanf("%d", &num_casos);
    while(i<num_casos)
    {
        i++;
        tot = 0;
        scanf("%d", &num);
        for(dv=1; dv<num; dv++)
        {
            if(num/dv>0 && num%dv==0 && dv!=num)
            {
                tot += dv;
            }
        }
        if(tot==num)
        {
            printf("%d eh perfeito\n", num);
        }
        else
        {
            printf("%d nao eh perfeito\n", num);
        }
    }
    
    return 0;
}