#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for(int i=0; i<6; i++)
    {
        if(x%2!=0)
        {
            printf("%d\n", x);
        }
        else
        {
            i--;
        }
        x++;
    }
    return 0;
}