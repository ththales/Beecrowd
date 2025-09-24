#include <stdio.h>
#include <stdlib.h>

int main()
{
    int novo_grenal = 1, gols_int, gols_grem, qtd_grenais = 0, vit_int = 0, vit_grem = 0, empates = 0;
    while(novo_grenal==1)
    {
        qtd_grenais++;
        gols_int = gols_grem = 0;
        scanf("%d %d", &gols_int, &gols_grem);
        if(gols_int>gols_grem)
        {
            vit_int++;
        }
        else
        {
            if(gols_int<gols_grem)
            {
                vit_grem++;
            }
            else
            {
                empates++;
            }
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo_grenal);
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", qtd_grenais, vit_int, vit_grem, empates);
    if(vit_int>vit_grem)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        if(vit_int<vit_grem)
        {
            printf("Gremio venceu mais\n");
        }
        else
        {
            printf("Nao houve vencedor\n");
        }
    }
    
    return 0;
}