#include <stdio.h>

int main()
{
    //Declarando variáveis
    float x[100];

    //Lendo o vetor de 100 posições
    for(int i=0; i<100; i++)
    {
        scanf("%f", &x[i]);
    }

    //Imprimindo as posições do vetor que armazenam um valor menor ou igual a 10 e seu conteúdo
    for(int i=0; i<100; i++)
    {
        if(x[i]<=10)
        {
            printf("A[%d] = %.1f\n", i, x[i]);
        }
    }
    return 0;
}