#include <stdio.h>
#include <stdlib.h>

int qtdImpares(int num_casos_cpy, int x_cpy, int y_cpy)
{
    int aux, s_cpy;
    for(int i=0; i<num_casos_cpy; i++)
    {
        s_cpy = 0;
        if(x_cpy>y_cpy)
        {
            aux = x_cpy;
            x_cpy = y_cpy;
            y_cpy = aux;
        }
        for(int j=x_cpy+1; j<y_cpy; j++)
        {
            if(j%2!=0)
            {
                s_cpy += j;
            }
        }
        return s_cpy;
    }
}

int main()
{
    int num_casos, x, y, s;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        scanf("%d%d", &x, &y);
        s = qtdImpares(num_casos, x, y);
        printf("%d\n", s);
    }
}