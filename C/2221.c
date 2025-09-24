#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tot_batalhas, val_bonus, val_golpe_1, val_golpe_2, dano_final,
    val_atk_1, val_def_1, lvl_treinador_1,
    val_atk_2, val_def_2, lvl_treinador_2, i = 0;
    scanf("%d", &tot_batalhas);
    while(i<tot_batalhas)
    {
        i++;
        scanf("%d", &val_bonus);
        scanf("%d%d%d", &val_atk_1, &val_def_1, &lvl_treinador_1);
        scanf("%d%d%d", &val_atk_2, &val_def_2, &lvl_treinador_2);
        if(lvl_treinador_1%2==0)
        {
            val_golpe_1 = ((val_atk_1+val_def_1)/2)+val_bonus;
        }
        else
        {
            val_golpe_1 = ((val_atk_1+val_def_1)/2);
        }
        if(lvl_treinador_2%2==0)
        {
            val_golpe_2 = ((val_atk_2+val_def_2)/2)+val_bonus;
        }
        else
        {
            val_golpe_2 = ((val_atk_2+val_def_2)/2);
        }
        dano_final = abs(val_golpe_1-val_golpe_2);
        if(val_golpe_1==val_golpe_2)
        {
            printf("Empate\n");
        }
        else
        {
            if(val_golpe_1>val_golpe_2)
            {
                printf("Dabriel\n");
            }
            else
            {
                printf("Guarte\n");
            }
        }
    }
    return 0;
}