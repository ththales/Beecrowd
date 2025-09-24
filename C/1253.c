#include <stdio.h>
#include <string.h>

int main()
{
    char txt[51];
    int num_casos, num, tam;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        scanf("%s", txt);
        tam = strlen(txt);
        scanf("%d", &num);
        for(int j=0; j<tam; j++)
        {
            for(int k=0; k<num; k++)
            {
                if(txt[j]=='A')
                {
                    txt[j] = 'Z';
                }
                else
                {
                    txt[j]--;
                }
            }
        }
        printf("%s\n", txt);
    }
    return 0;
}