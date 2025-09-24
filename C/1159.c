#include <stdio.h>

int main()
{
    int x, s;
    scanf("%d", &x);
    while(x!=0)
    {
        s = 0;
        for(int i=0; i<5; i++)
        {
            if(x%2==0)
            {
                s += x;
            }
            else
            {
                i--;
            }
            x++;
        }
        printf("%d\n", s);
        scanf("%d", &x);
    }
    return 0;
}