#include <stdio.h>

int main()
{
    int num_casos, x, j;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        scanf("%d", &x);
        for(j=2; j<=x && x%j!=0; j++);
        if(j==x)
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}