#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_pessoas, num_datas, i = 1, disp, qtd_datas, total_disp;
    char data[15], data_disp[15]="";
    while(scanf("%d%d", &num_pessoas, &num_datas)!=EOF)
    {
        if(num_pessoas==0)
        {
            return 0;
        }
        else
        {
            qtd_datas = 0;
            for(int i2=0; i2<num_datas; i2++)
            {
                total_disp = 0;
                scanf("%s", data);
                for(int i3=0; i3<num_pessoas; i3++)
                {
                    scanf("%d", &disp);
                    if(disp==1)
                    {
                        total_disp++;
                    }
                }
                if(total_disp==num_pessoas)
                {
                    qtd_datas++;
                    if(qtd_datas==1)
                    {
                        strcpy(data_disp, data);
                        printf("%s\n", data_disp);
                    }
                }
            }
        }
        if(qtd_datas==0)
        {
            printf("Pizza antes de FdI\n");
        }
    }
    return 0;
}