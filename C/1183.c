#include <stdio.h>

int main()
{
    char op;
    int i, j, qtd_s = 0;
    float mat[12][12], s = 0;
    //Lendo o operador utilizado no cálculo
    scanf("%c", &op);
    //Lendo e armazenando todos os elementos lidos na matriz mat
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
            if(j>i)
            {
                s += mat[i][j];
                qtd_s++;
            }
        }
    }
    //Verificando qual operação usar
    if(op=='S')
    {
        printf("%.1f\n", s);
    }
    else
    {
        printf("%.1f\n", s/qtd_s);
    }
    return 0;
}