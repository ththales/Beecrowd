#include <stdio.h>

int main()
{
    int x, y, aux, s = 0;
    scanf("%d%d", &x, &y);
    if(x>y)
    {
        aux = x;
        x = y;
        y = aux;
    }
    for(int i=x; i<=y; i++)
    {
        if(i%13!=0)
        {
            s+=i;
        }
    }
    printf("%d\n", s);
    return 0;
}