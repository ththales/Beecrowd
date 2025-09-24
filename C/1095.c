#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;
    a = -2;
    b = 65;
    for(i>=1 ; i<=60; i++)
    {
        a = a+3;
        b = b-5;
        if(b<0)
        {
            return 0;
        }
        printf("I=%d J=%d\n", a, b); 
    }
    return 0;
}