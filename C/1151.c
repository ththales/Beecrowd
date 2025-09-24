#include <stdio.h>

int main()
{
    int num, penultimo = 0, ultimo = 1, prox = 0;
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        printf("%d", prox);
        penultimo = ultimo;
        ultimo = prox;
        prox = penultimo+ultimo;
        if(i<num-1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}