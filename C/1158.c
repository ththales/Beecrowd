#include <stdio.h>

int main()
{
    int num_casos, x, y, s;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        s = 0;
        scanf("%d%d", &x, &y);
        for(int i=0; i<y; i++)
        {
            if(x%2!=0)
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
    }
    return 0;
}