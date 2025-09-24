#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d;
    scanf("%d", &d);
    if(d>=0 && d<=800)
    {
        printf("1\n");
    }
    else if(d>=800 && d<=1400)
    {
        printf("2\n");
    }
    else
    {
        printf("3\n");
    }
    return 0;
}