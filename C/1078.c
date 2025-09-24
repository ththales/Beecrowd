#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, multi, tab, i;
    scanf("%d", &num);
    multi = 0;
    for(i>=1; i<=9; i++)
    {
        multi++;
        tab = multi*num;
        printf("%d x %d = %d\n", multi, num, tab);
    }
    return 0;
}