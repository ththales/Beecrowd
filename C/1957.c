#include <stdio.h>

void convHexadecimal(int num_cpy)
{
    int r_cpy, i = 99;
    char str_resto[100];
    while(num_cpy>0)
    {
        r_cpy = num_cpy%16;
        num_cpy = num_cpy/16;
        if (r_cpy<10)
        {
            str_resto[i] = r_cpy + '0';
        }
        else
        {
            if(r_cpy==10)
            {
                str_resto[i] = 'A';
            }
            else
            {
                if(r_cpy==11)
                {
                    str_resto[i] = 'B';
                }
                else
                {
                    if(r_cpy==12)
                    {
                        str_resto[i] = 'C';
                    }
                    else
                    {
                        if(r_cpy==13)
                        {
                            str_resto[i] = 'D';
                        }
                        else
                        {
                            if(r_cpy==14)
                            {
                                str_resto[i] = 'E';
                            }
                            else
                            {
                                str_resto[i] = 'F';
                            }
                        }
                    }
                }
            }
        }
        i--;
    }
    i++;
    for(;i<100;i++)
    {
        printf("%c", str_resto[i]);
    }
    printf("\n");
}

int main()
{
    int num;
    scanf("%d", &num);
    convHexadecimal(num);
    return 0;
}