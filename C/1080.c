#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, pos;
    maior = -9999;
    pos = 0;
    for(int i=1; i<=100; i++)
    {
        scanf("%d", &num);
        if(num>maior)
        {
            maior = num;
            pos = i;
        }
    }
    printf("%d\n%d\n", maior, pos);
    return 0;
}