#include <stdio.h>

int main()
{
    char letras[26];
    int tam, num;
    while(scanf("%s", letras)!=EOF)
    {
        scanf("%d", &tam);
        for(int i=1; i<=tam; i++)
        {
            scanf("%d", &num);
            printf("%c", letras[num-1]);
        }
        printf("\n");
    }
    return 0;
}