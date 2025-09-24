#include <stdio.h>

int main()
{
    int cod, qtd;
    float val, s = 0;
    scanf("%d%d%f", &cod, &qtd, &val);
    s += qtd*val;
    scanf("%d%d%f", &cod, &qtd, &val);
    s += qtd*val;
    printf("VALOR A PAGAR: R$ %.2f\n", s);
    return 0;
}