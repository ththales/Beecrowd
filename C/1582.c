#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, mdc_x_y, mdc_x_z, mdc_y_z, i;
    while(scanf("%d%d%d", &x, &y, &z)!=EOF)
    {
        if((x*x)==(y*y)+(z*z) || (y*y)==(x*x)+(z*z) || (z*z)==(y*y)+(x*x))
        {
            for(i = 1; i<=x && i<=y; i++)
            {
                if(x%i==0 && y%i==0)
                {
                    mdc_x_y = i;
                }
            }
            for(int i = 1; i <= x && i <= z; i++)
            {
                if(x%i==0 && z%i==0)
                {
                    mdc_x_z = i;
                }
            }
            for (int i = 1; i <= y && i <= z; i++)
            {
                if(y%i==0 && z%i==0)
                {
                    mdc_y_z = i;
                }
            }
            if(mdc_x_y==1 && mdc_x_z==1 && mdc_y_z==1)
            {
                printf("tripla pitagorica primitiva\n");
            }
            else
            {
                printf("tripla pitagorica\n");
            }
        }
        else
        {
            printf("tripla\n");
        }
    }
    return 0;
}