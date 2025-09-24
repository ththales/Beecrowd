#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0, m = 0, last_n, last_m, s_n = 0, s_m = 0, aux_n, aux_m;
    char n_length[999] = "1", m_length[999] = "1";
    while(1)
    {
        scanf("%s%s", n_length, m_length);
        if(!strcmp(n_length, "0") && !strcmp(m_length, "0"))
        {
            return 0;
        }
        n = 0, m = 0;
        for(int i=0; i<strlen(n_length); i++)
        {
            n += n_length[i] - '0';
        }
        for(int i=0; i<strlen(m_length); i++)
        {
            m += m_length[i] - '0';
        }
        while(n>=10)
        {
            s_n = 0;
            while(n>0)
            {
                //last_n = n%10; //Pegando o ultimo algarismo de n
                s_n += n%10;
                n /= 10; //Removendo o ultimo algarismo de n
            }
            n = s_n;
        }
        while(m>=10)
        {
            s_m = 0;
            while(m>0)
            {
                //last_m = m%10;
                s_m += m%10;
                m /= 10;
            }
            m = s_m;
        }
        //printf("%lld %lld\n", s_n, s_m);
        if(n>m)
        {
            printf("1\n");
        }
        else
        {
            if(n<m)
            {
                printf("2\n");
            }
            else
            {
                printf("0\n");
            }
        }
        s_n = 0;
    }   s_m = 0;
    return 0;
}