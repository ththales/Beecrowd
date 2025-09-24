#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, med;
    scanf("%f", &n1);
    while(n1<0 || n1>10)
    {
        printf("nota invalida\n");
        scanf("%f", &n1);
    }
    scanf("%f", &n2);
    while(n2<0 || n2>10)
    {
        printf("nota invalida\n");
        scanf("%f", &n2);
    }
    med = (n1+n2)/2.0;
    printf("media = %.2f\n", med);
    return 0;
}