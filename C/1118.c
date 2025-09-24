#include <stdio.h>

int main()
{
    int opc = 1;
    float n1, n2, med;
    while(opc==1)
    {
        med = 0;
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
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &opc);
        while(opc>2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opc);
        }
    }
    return 0;
}