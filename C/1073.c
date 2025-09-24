#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, quadrado;
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            quadrado = i*i;
            printf("%d^2 = %d\n", i, quadrado);
        }
    }
    return 0;
}