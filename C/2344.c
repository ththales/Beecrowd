#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nota;
    scanf("%d", &nota);
    if(nota==0)
    {
        printf("E\n");
    }
    else if(nota>=1 && nota<=35)
    {
        printf("D\n");
    }
    else if(nota>=36 && nota<=60)
    {
        printf("C\n");
    }
    else if(nota>=61 && nota<=85)
    {
        printf("B\n");
    }
    else if(nota>=86 && nota<=100)
    {
        printf("A\n");
    }
    return 0;
}