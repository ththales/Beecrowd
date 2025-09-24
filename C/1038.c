#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cod, qtd;
    float preco;
    scanf("%d%d", &cod, &qtd);
    if(cod==1)
    {
        preco = qtd*4.0;
        printf("Total: R$ %.2f\n", preco);
    }
    if(cod==2)
    {
        preco = qtd*4.5;
        printf("Total: R$ %.2f\n", preco);
    }
    if(cod==3)
    {
        preco = qtd*5.0;
        printf("Total: R$ %.2f\n", preco);
    }
    if(cod==4)
    {
        preco = qtd*2.0;
        printf("Total: R$ %.2f\n", preco);
    }
    if(cod==5)
    {
        preco = qtd*1.5;
        printf("Total: R$ %.2f\n", preco);
    }
    return 0;
}