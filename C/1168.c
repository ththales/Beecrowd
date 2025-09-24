#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];
    int num_casos, tam, s;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        s = 0;
        scanf("%s", num);
        tam = strlen(num);
        for(int j=0; j<tam; j++)
        {
            if(num[j]=='1')
            {
                s += 2;
            }
            else
            {
                if(num[j]=='7')
                {
                    s += 3;
                }
                else
                {
                    if(num[j]=='4')
                    {
                        s += 4;
                    }
                    else
                    {
                        if(num[j]=='2' || num[j]=='3' || num[j]=='5')
                        {
                            s += 5;
                        }
                        else
                        {
                            if(num[j]=='6' || num[j]=='9' || num[j]=='0')
                            {
                                s += 6;
                            }
                            else
                            {
                                s += 7;
                            }
                        }
                    }
                }
            }
        }
        printf("%d leds\n", s);
    }
    return 0;
}