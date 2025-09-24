#include <stdio.h>

int main()
{
    int column, i, j;
    float mat[12][12], s = 0;
    char op;
    //Determinando qual coluna será usada para realizar as operações e qual operador utilizar
    scanf("%d %c", &column, &op);
    //Preenchendo a matriz com os elementos inseridos pelo usuário
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
            //Calculando a soma dos elementos da coluna desejada
            if(j == column)
            {
                s += mat[i][j];
            }
        }
    }
    //Verificando qual operador o usuário escolheu
    if(op=='S')
    {
        printf("%.1f\n", s);
    }
    else
    {
        printf("%.1f\n", s/12.0);
    }
    return 0;
}