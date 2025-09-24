#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_jogadores, voto, total_votos;
    while(scanf("%d", &num_jogadores)!=EOF)
    {
        if(num_jogadores==0)
        {
            return 0;
        }
        else
        {
            total_votos = 0;
            for(int i=0; i<num_jogadores; i++)
            {
                scanf("%d", &voto);
                if(voto!=0)
                {
                    total_votos++;
                }
            }
            if(total_votos>=(num_jogadores*0.66))
            {
                printf("impeachment\n");
            }
            else
            {
                printf("acusacao arquivada\n");
            }
        }
    }
    return 0;
}
