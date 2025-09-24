#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long num, i, primeiro, segundo, prox, num_2, aux;
    while(scanf("%lld", &num)!=EOF) 
    {
        i = 0, primeiro = 0, segundo = 1;
        while(i<num)
        {
            prox = primeiro + segundo;
            primeiro = segundo;
            segundo = prox;
            aux = prox;
            if(aux%3==0)
            {
                i++;
            }
            else
            {
                while(aux%10!=3 && aux>0)
                {
                    aux /= 10;
                }
                if(aux != 0)
                {
                    i++;
                }
            }
        }
        printf("%lld\n", prox);
    }
    return 0;
}