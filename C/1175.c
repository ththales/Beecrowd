
#include <stdio.h>

int main()
{
    int num, vet[20], aux;
    for(int i=0; i<20; i++)
    {
        scanf("%d", &num);
        vet[19-i] = num;
    }
    for(int j=0; j<20; j++)
    {
        printf("N[%d] = %d\n", j, vet[j]);
    }
    return 0;
}