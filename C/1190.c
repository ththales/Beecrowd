#include <stdio.h>

int main()
{
    //Declarando variáveis
    char op;
    int qtd_elem = 0, i, j;
    float mat[12][12], s = 0;
    
    //Lendo o operador a ser utilizado
    scanf("%c", &op);
    
    //Preenchendo a matriz com os 144 elementos
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    
    //Da 1ª até a 5ª linha
    for(i=1; i<6; i++)
    {
        for(j=12-i; j<12; j++)
        {
            s += mat[i][j];
            qtd_elem++;
        }
    }
    
    //Da 6 linha para baixo
    for(i=6; i<11; i++)
    {
        for(j=i+1; j<12; j++)
        {
            s += mat[i][j];
            qtd_elem++;
        }
    }
    
    //Verificando o operador escolhido
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