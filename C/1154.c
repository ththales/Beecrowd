#include <stdio.h>

int main()
{
    int idade, qtd_idades = 0;
    float s = 0, med;
    scanf("%d", &idade);
    while(idade>0)
    {
        s += idade;
        qtd_idades++;
        scanf("%d", &idade);
    }
    med = s/qtd_idades;
    printf("%.2f\n", med);
    return 0;
}
