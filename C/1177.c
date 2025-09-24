#include <stdio.h>

void preencheVetor(int *N_cpy, int num_cpy)
{
    int j = 0;
    for(int i=0; i<1000; i++)
    {
        N_cpy[i] = j;
        j++;
        if(j==num_cpy)
        {
            j = 0;
        }
    }
}

int main()
{
    //Declarando variáveis
    int num, N[1000];

    //Lendo quais numeros serao lidos
    scanf("%d", &num);

    //Chamando a função para preencher o vetor N
    preencheVetor(N, num);

    //Imprimindo o vetor preenchido
    for(int i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}