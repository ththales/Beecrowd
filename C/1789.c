#include <stdio.h>

void tipoLesma()
{
    int num_casos, maior_vel, vel;
    while(scanf("%d", &num_casos)!=EOF)
    {
        maior_vel = -1;
        for(int i=0; i<num_casos; i++)
        {
            scanf("%d", &vel);
            if(vel>maior_vel)
            {
                maior_vel = vel;
            }
        }
        if(maior_vel<10)
        {
            printf("1\n");
        }
        else
        {
            if(maior_vel>=10 && maior_vel<20)
            {
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }
        }
    }
}

int main()
{
    tipoLesma();
    return 0;
}
