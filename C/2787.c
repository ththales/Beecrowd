#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int l, c;
    scanf("%d%d", &l, &c);
    if((l+c)%2!=0)
    {
        printf("0\n");
    }
    else if((l+c)%2==0)
    {
        printf("1\n");
    }
    return 0;
}