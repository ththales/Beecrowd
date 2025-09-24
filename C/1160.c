#include <stdio.h>
#include <stdlib.h>

void crescPopulacional(int numero_casos)
{
    int populacao_cid[2], total_anos, i;
    double cresc_cid[2];
    for(i=0; i<numero_casos; i++)
    {
        total_anos = 0;
        scanf("%d%d", &populacao_cid[0], &populacao_cid[1]);
        scanf("%lf%lf", &cresc_cid[0], &cresc_cid[1]);
        while(populacao_cid[0]<=populacao_cid[1] && total_anos<=100)
        {
            populacao_cid[0] += populacao_cid[0]*cresc_cid[0]/100.0;
            populacao_cid[1] += populacao_cid[1]*cresc_cid[1]/100.0;
            total_anos++;
        }
        if(total_anos<=100)
        {
            printf("%d anos.\n", total_anos);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }
    }
}

int main()
{
    int num_casos;
    scanf("%d", &num_casos);
    crescPopulacional(num_casos);
    return 0;
}