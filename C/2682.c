#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_atual, num_maior = -999, prox, i = 0;
    while(scanf("%d", &num_atual)!=EOF && !i)
    {
        if(num_atual>num_maior)
        {
            num_maior = num_atual;
        }
        else
        {
            i = 1;
        }
    }
    printf("%d\n", num_maior+1);
    return 0;
}
