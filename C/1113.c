#include <stdio.h>

int main()
{
    int x, y;
    while(scanf("%d%d", &x, &y)!=EOF)
    {
        if(x<y)
        {
            printf("Crescente\n");
        }
        if(x>y)
        {
            printf("Decrescente\n");
        }
    }
    return 0;
}