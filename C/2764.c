#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    while(scanf("%d/%d/%d", &dia, &mes, &ano)!=EOF)
    {
        if(dia>0 && dia<10)
        {
            if(mes>0 && mes<10)
            {
                if(ano>0 && ano<10)
                {
                    printf("0%d/0%d/0%d\n", mes, dia, ano);
                    printf("0%d/0%d/0%d\n", ano, mes, dia);
                    printf("0%d-0%d-0%d\n", dia, mes, ano);
                }
                else
                {
                    printf("0%d/0%d/%d\n", mes, dia, ano);
                    printf("%d/0%d/0%d\n", ano, mes, dia);
                    printf("0%d-0%d-%d\n", dia, mes, ano);
                }
            }
            else
            {
                if(ano>0 && ano<10)
                {
                    printf("%d/0%d/0%d\n", mes, dia, ano);
                    printf("0%d/%d/0%d\n", ano, mes, dia);
                    printf("0%d-%d-0%d\n", dia, mes, ano);
                }
                else
                {
                    printf("%d/0%d/%d\n", mes, dia, ano);
                    printf("%d/%d/0%d\n", ano, mes, dia);
                    printf("0%d-%d-%d\n", dia, mes, ano);
                }
            }
        }
        else
        {
            if(mes>0 && mes<10)
            {
                if(ano>0 && ano<10)
                {
                    printf("0%d/%d/0%d\n", mes, dia, ano);
                    printf("0%d/0%d/%d\n", ano, mes, dia);
                    printf("%d-0%d-0%d\n", dia, mes, ano);
                }
                else
                {
                    printf("0%d/%d/%d\n", mes, dia, ano);
                    printf("%d/0%d/%d\n", ano, mes, dia);
                    printf("%d-0%d-%d\n", dia, mes, ano);
                }
            }
            else
            {
                if(ano>0 && ano<10)
                {
                    printf("%d/%d/0%d\n", mes, dia, ano);
                    printf("0%d/%d/%d\n", ano, mes, dia);
                    printf("%d-%d-0%d\n", dia, mes, ano);
                }
                else
                {
                    printf("%d/%d/%d\n", mes, dia, ano);
                    printf("%d/%d/%d\n", ano, mes, dia);
                    printf("%d-%d-%d\n", dia, mes, ano);
                }
            }
        }
    }

    return 0;
}
