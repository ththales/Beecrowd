#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, start, quadrado_1, quadrado_2;
    start = 0;
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(i>=1)
        {
            start++;
            quadrado_1 = start*start;
            quadrado_2 = quadrado_1*start;
            printf("%d %d %d\n", start, quadrado_1, quadrado_2);
        }
    }
    return 0;
}