#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_casos, j = 1;
    scanf("%d", &num_casos);
    for(int i=1; i<=num_casos; i++)
    {
        printf("%d %d %d PUM\n", j, j+1, j+2);
        j += 4;
    }
    return 0;
}