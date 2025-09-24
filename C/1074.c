#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_linhas, num, i; 
    scanf("%d", &qtd_linhas);
    for(i=0; i<qtd_linhas; i++)
    {
        scanf("%d", &num);
        if(num==0)
        {
            printf("NULL\n");
        }
        else
        {
            if(num>0)
            {
                if(num%2==0)
                {
                    printf("EVEN POSITIVE\n");
                }
                else
                {
                    printf("ODD POSITIVE\n");
                }
            }
            else if(num<0)
            {
                if(num%2==0)
                {
                    printf("EVEN NEGATIVE\n");
                }
                else
                {
                    printf("ODD NEGATIVE\n");
                }
            }
        }
    }
    return 0;
}