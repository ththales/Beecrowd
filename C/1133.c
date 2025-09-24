#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, cache;
    scanf("%d%d", &x, &y);
    if(x>y)
    {
        cache = x;
        x = y;
        y = cache;
    }
    for (i=x+1; i<y; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
