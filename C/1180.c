#include <stdio.h>

int main()
{
    int tam;
    scanf("%d", &tam);
    int vet[tam], menor = 999999, pos_menor;
    for(int i=0; i<tam; i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]<menor)
        {
            menor = vet[i];
            pos_menor = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos_menor);
    return 0;
}