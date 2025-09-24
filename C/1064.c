#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivos = 0;
    float num, s_med = 0, med = 0;
    for(int i=0; i<6; i++)
    {
        scanf("%f", &num);
        if(num>0)
        {
            positivos++;
            s_med += num;
        }
    }
    med = s_med/positivos;
    printf("%d valores positivos\n%.1f\n", positivos, med);
    return 0;
}