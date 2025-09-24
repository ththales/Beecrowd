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
    for(int i=x+1; i<y; i++)
    {
        if(i%2!=0)
        {
            s += i;
        }
    }
    printf("%d\n", s);
    return 0;
}