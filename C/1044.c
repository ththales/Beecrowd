#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a%b==0 || b%a==0)
    {
        printf("Sao Multiplos\n");
        return 0;
    }
    else
    {
        printf("Nao sao Multiplos\n");
        return 0;
    }
    return 0;
}