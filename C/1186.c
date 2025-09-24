#include <stdio.h>

int main()
{
    char op;
    int i, j, qtd_elem = 0;
    float mat[12][12], s = 0;
    //Lendo o operador a ser utilizado
    scanf("%c", &op);
    //Preenchendo a matriz de elementos até 144
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
            //Calculando a soma dos elementos da área verde
            if(j>=12-i && j<=11)
            {
                s += mat[i][j];
                qtd_elem++;
            }
        }
    }
    //Verificando o operador utilizado
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