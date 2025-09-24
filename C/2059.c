#include <stdio.h>

void ipr(int p_cpy, int j1_cpy, int j2_cpy, int r_cpy, int a_cpy)
{
    if(p_cpy==1)
    {
        if((j1_cpy+j2_cpy)%2==0 && r_cpy==0 && a_cpy==0)
        {
            printf("Jogador 1 ganha!\n");
        }
        else
        {
            if((r_cpy==1 && a_cpy==0) || (r_cpy==0 && a_cpy==1))
            {
                printf("Jogador 1 ganha!\n");
            }
            else
            {
                printf("Jogador 2 ganha!\n");
            }
        }
    }
    else
    {
        if((j1_cpy+j2_cpy)%2!=0 && r_cpy==0 && a_cpy==0)
        {
            printf("Jogador 1 ganha!\n");
        }
        else
        {
            if((r_cpy==1 && a_cpy==0) || (r_cpy==0 && a_cpy==1))
            {
                printf("Jogador 1 ganha!\n");
            }
            else
            {
                printf("Jogador 2 ganha!\n");
            }
        }
    }
}

int main()
{
    int p, j1, j2, r, a;
    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);
    ipr(p, j1, j2, r, a);
    return 0;
}