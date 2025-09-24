#include <stdio.h>

int pares(int num)
{
    if(num>100)
    {
        return 0;
    }
    if(num%2==0)
    {
        printf("%d\n", num);
    }
    return pares(num+1);
}

int main()
{
    int a = 1;
    a = pares(a);
}