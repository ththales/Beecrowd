#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_rounds, i;
    char caso1[10], caso2[10];
    scanf("%d", &num_rounds);
    for(i=0; i<num_rounds; i++)
    {
        scanf("%s %s", caso1, caso2);
        if(!strcmp(caso1, caso2))
        {
            printf("Caso #%d: De novo!\n", i+1);
        }
        else if(!strcmp(caso1, "tesoura") && !strcmp(caso2, "papel") || !strcmp(caso1, "papel") && !strcmp(caso2, "pedra") || !strcmp(caso1, "pedra") && !strcmp(caso2, "lagarto") || !strcmp(caso1, "lagarto") && !strcmp(caso2, "Spock") || !strcmp(caso1, "Spock") && !strcmp(caso2, "tesoura") || !strcmp(caso1, "tesoura") && !strcmp(caso2, "lagarto") || !strcmp(caso1, "lagarto") && !strcmp(caso2, "papel") || !strcmp(caso1, "papel") && !strcmp(caso2, "Spock") || !strcmp(caso1, "Spock") && !strcmp(caso2, "pedra") || !strcmp(caso1, "pedra") &&!strcmp(caso2, "tesoura"))
        {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else
        {
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }
    }
    return 0;
}