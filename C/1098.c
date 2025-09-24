#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, j;
    for(i=0; i<=2.2; i+=0.2)
    {
        for(j=i+1.0; (j-i)<=3.2; j++)
        {
            if(i==0 || i==1 || i>=2)
            {
            printf("I=%.f J=%.f\n", i, j);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
    }
    return 0;
}