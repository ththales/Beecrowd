#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_casos, t1_c, t1_v, t2_c, t2_v, pts_t1, pts_t2, empates, saldo_t1, saldo_t2, i = 0;
    scanf("%d", &num_casos);
    while(i<num_casos)
    {
        i++;
        pts_t1 = 0;
        pts_t2 = 0;
        empates = 0;
        scanf("%d x %d", &t1_c, &t2_v);
        scanf("%d x %d", &t2_c, &t1_v);
        //Primeira partida
        if(t1_c>t2_v)
        {
            pts_t1 += 3;
        }
        else
        {
            if(t2_v>t1_c)
            {
                pts_t2 += 3;
            }
            else
            {
                empates++;
            }
        }
        //Segunda partida
        if(t2_c>t1_v)
        {
            pts_t2 += 3;
        }
        else
        {
            if(t1_v>t2_c)
            {
                pts_t1 += 3;
            }
            else
            {
                empates++;
            }
        }
        //Verificando o vencedor
        if(pts_t1>pts_t2)
        {
            printf("Time 1\n");
        }
        else
        {
            if(pts_t2>pts_t1)
            {
                printf("Time 2\n");
            }
            else
            {
                //Verificando se houve empate
                if(empates>0 || pts_t1==pts_t2)
                {
                    saldo_t1 = (t1_c+t1_v)-(t2_c+t2_v);
                    saldo_t2 = (t2_c+t2_v)-(t1_c+t1_v);
                    if(saldo_t1>saldo_t2)
                    {
                        printf("Time 1\n");
                    }
                    else
                    {
                        if(saldo_t2>saldo_t1)
                        {
                            printf("Time 2\n");
                        }
                        else
                        {
                            if(t1_v>t2_v)
                            {
                                printf("Time 1\n");
                            }
                            else
                            {
                                if(t2_v>t1_v)
                                {
                                    printf("Time 2\n");
                                }
                                else
                                {
                                    printf("Penaltis\n");
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    return 0;
}