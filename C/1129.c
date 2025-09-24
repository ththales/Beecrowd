#include <stdio.h>

int main()
{
    int num_quest, num_alt, choose[5], s_med, med;
    char alt;
    scanf("%d", &num_quest);
    while(num_quest>0)
    {
        for(int j=0; j<num_quest; j++)
        {
            num_alt = s_med = 0;
            for(int i=0; i<5; i++)
            {
                scanf("%d", &choose[i]);
                if(choose[i]<=127 && i==0)
                {
                    alt = 'A';
                    num_alt++;
                }
                else
                {
                    if(choose[i]<=127 && i==1)
                    {
                        alt = 'B';
                        num_alt++;
                    }
                    else
                    {
                        if(choose[i]<=127 && i==2)
                        {
                            alt = 'C';
                            num_alt++;
                        }
                        else
                        {
                            if(choose[i]<=127 && i==3)
                            {
                                alt = 'D';
                                num_alt++;
                            }
                            else
                            {
                                if(choose[i]<=127 && i==4)
                                {
                                    alt = 'E';
                                    num_alt++;
                                }
                            }
                        }
                    }
                }
            }
            if(num_alt==1)
            {
                printf("%c\n", alt);
            }
            else
            {
                printf("*\n");
            }
        }
        scanf("%d", &num_quest);
    }
    return 0;
}
