#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num, x[10];
    scanf("%ld", &num);
    for (int i=0; i<10; i++)
    {
        x[i] = num;
        num *= 2;
        printf("N[%d] = %ld\n", i, x[i]);
    }

    return 0;
}
