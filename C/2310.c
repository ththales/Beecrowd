#include <stdio.h>

int main()
{
    char nome[50];
    int num_casos, num_tent[5], num_suc[5], i, j, k,
    t_s = 0, t_block = 0, t_atk = 0;
    float s_s = 0, s_block = 0, s_atk = 0, perc_s = 0, perc_block = 0, perc_atk = 0;
    scanf("%d", &num_casos);
    for(i=0; i<num_casos; i++)
    {
        scanf("%s", nome);
        //Lendo o numero de tentativas
        for(j=1; j<=3; j++)
        {
            scanf("%d", &num_tent[j]);
        }
        t_s += num_tent[1];
        t_block += num_tent[2];
        t_atk += num_tent[3];
        
        //Lendo o numero de sucessos
        for(k=1; k<=3; k++)
        {
            scanf("%d", &num_suc[k]);
        }
        s_s += num_suc[1];
        s_block += num_suc[2];
        s_atk += num_suc[3];
    }
    perc_s = (s_s/t_s)*100.0;
    perc_block = (s_block/t_block)*100.0;
    perc_atk = (s_atk/t_atk)*100.0;
    printf("Pontos de Saque: %.2lf %%.\n", perc_s);
    printf("Pontos de Bloqueio: %.2lf %%.\n", perc_block);
    printf("Pontos de Ataque: %.2lf %%.\n", perc_atk);
}