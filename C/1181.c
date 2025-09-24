#include <stdio.h>

int main()
{
    float mat[12][12], s = 0;
    int line, i, j;
    char op;
    scanf("%d %c", &line, &op);
    //Preenchendo a matriz com os 144 elementos lidos via teclado
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
            //Realizando a soma dos números da linha desejada
            if(i==line)
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