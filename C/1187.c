#include <stdio.h>

int main()
{
    //Declarando variáveis
    char op;
    int qtd_elem = 0, i, j;
    double mat[12][12], s = 0;

    //Lendo o operador desejado
    scanf("%c", &op);

    //Preenchendo a matriz com os 144 elementos
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf", &mat[i][j]);
            //Realizando a soma dos elementos da área verde
            if(i<5 && j>i && j<11-i)
            {
                s += mat[i][j];
                qtd_elem++;
            }
        }
    }

    //Verificando qual operador foi utilizado
    if(op=='S')
    {
        printf("%.1lf\n", s);
    }
    else
    {
        printf("%.1lf\n", s/qtd_elem);
    }
    return 0;
}