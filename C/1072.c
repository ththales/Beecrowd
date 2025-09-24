#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, x, in = 0, out = 0;
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        scanf("%d", &x);
        if(x>=10 && x<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}