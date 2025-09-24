#include <stdio.h>

void procuraSabre(int lin_cpy, int col_cpy)
{
    //Declarando variáveis
    int mat[lin_cpy][col_cpy], line = 0, column = 0, encontrei = 0;
    
    //Preenchendo a matriz com os elementos desejados
    for(int i=0; i<lin_cpy; i++)
    {
        for(int j=0; j<col_cpy; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    //Verificando no espaço correto se há a presença de algum sabre
    for(int i=1; i<(lin_cpy-1) && encontrei==0; i++)
    {
        for(int j=1; j<(col_cpy-1); j++)
        {
            if(mat[i][j]==42 
            && mat[i][j-1]==7 
            && mat[i][j+1]==7 
            && mat[i-1][j]==7 
            && mat[i+1][j]==7 
            && mat[i-1][j-1]==7 
            && mat[i-1][j+1]==7 
            && mat[i+1][j-1]==7 
            && mat[i+1][j+1]==7)
            {
                line = i+1;
                column = j+1;
                encontrei = 1;
            }
        }
    }
    printf("%d %d\n", line, column);
}

int main()
{
    int num_lin, num_col;
    scanf("%d%d", &num_lin, &num_col);
    procuraSabre(num_lin, num_col);
    return 0;
}