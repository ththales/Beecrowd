#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, max_linhas, i;
    max_linhas = 0;
    scanf("%d%d", &x, &y);
    for(i=1; i<=y; i++)
    {
        printf("%d", i);
        max_linhas++;
        if(max_linhas==x)
        {
            printf("\n");
            max_linhas = 0;
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}