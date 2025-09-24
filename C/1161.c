#include <stdio.h>

int main()
{
    int n1, n2;
    unsigned long long int fat1, fat2, s;
    while(scanf("%d%d", &n1, &n2)!=EOF)
    {
        fat1 = fat2 = 1;
        s = 0;
        for(int i=2; i<=n1; i++)
        {
            fat1 *= i;
        }
        for(int i=2; i<=n2; i++)
        {
            fat2 *= i;
        }
        s = fat1+fat2;
        printf("%lld\n", s);
    }
    return 0;
}