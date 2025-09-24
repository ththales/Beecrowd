#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma = 0, i;
    for (i=0; i<9; i++)
    {
        scanf("%d", &num);
        soma += num;
    }
    if(soma%9==1)
    {
        printf("Dasher\n");
    }
    else
    {
        if(soma%9==2)
        {
            printf("Dancer\n");
        }
        else
        {
            if(soma%9==3)
            {
                printf("Prancer\n");
            }
            else
            {
                if(soma%9==4)
                {
                    printf("Vixen\n");
                }
                else
                {
                    if(soma%9==5)
                    {
                        printf("Comet\n");
                    }
                    else
                    {
                        if(soma%9==6)
                        {
                            printf("Cupid\n");
                        }
                        else
                        {
                            if(soma%9==7)
                            {
                                printf("Donner\n");
                            }
                            else
                            {
                                if(soma%9==8)
                                {
                                    printf("Blitzen\n");
                                }
                                else
                                {
                                    printf("Rudolph\n");
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
