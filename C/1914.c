#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[50], escolha1[10], nome2[50], escolha2[10];
    int num_casos, num1, num2;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        scanf("%s%s%s%s", nome1, escolha1, nome2, escolha2);
        scanf("%d%d", &num1, &num2);
        if((num1+num2)%2==0)
        {
            if(!strcmp(escolha1, "PAR"))
            {
                printf("%s\n", nome1);
            }
            else
            {
                printf("%s\n", nome2);
            }
        }
        else
        {
            if(!strcmp(escolha1, "IMPAR"))
            {
                printf("%s\n", nome1);
            }
            else
            {
                printf("%s\n", nome2);
            }
        }
    }
    return 0;
}
