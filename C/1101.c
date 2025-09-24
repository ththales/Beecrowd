#include <stdio.h>

int main()
{
    int x, y, aux, s;
    while(scanf("%d%d", &x, &y)!=EOF)
    {
        s = 0;
        if(x>y)
        {
            aux = x;
            x = y;
            y = aux;
        }
        if(x>0 && y>0)
        {
            for(int i=x; i<=y; i++)
            {
                printf("%d ", i);
                s += i;
            }
            printf("Sum=%d\n", s);
        }
    }
    return 0;
}