#include <stdio.h>

int main()
{
    char op;
    int i, j, qtd_elem = 0;
    float mat[12][12], s = 0;
    //Determinando o operador do cálculo
    scanf("%c", &op);
    //Lendo todos os elementos da matriz
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    //Calculando a soma dos elementos presentes na área verde
    for(i=0; i<11; i++)
    {
        for(j=10-i; j>=0; j--)
        {
            s += mat[i][j];
            qtd_elem++;
        }
    }
    //xerecanco qual operador foi lido
    if(op=='S')
    {
        printf("%.1f\n", s);
    }
    else
    {
        printf("%.1f\n", s/qtd_elem);
    }
    return 0;
}