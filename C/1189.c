#include <stdio.h>

int main()
{
    char op;
    int qtd_elem = 0, i, j;
    float mat[12][12], s = 0;
    scanf("%c", &op);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    //Da 1ª a 6ª linha
    for(i=1; i<6; i++)
    {
        for(j=0; j<i; j++)
        {
            s += mat[i][j];
            qtd_elem++;
        }
    }
    for(i=6; i<11; i++)
    {
        for(j=10-i; j>=0; j--)
        {
            s += mat[i][j];
            qtd_elem++;
        }
    }
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