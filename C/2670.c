#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int pessoas1, pessoas2, pessoas3, andar1, andar2, andar3, menor_tempo;
    scanf("%d%d%d", &pessoas1, &pessoas2, &pessoas3);
    andar1 = pessoas2*2+pessoas3*4;
    andar2 = pessoas1*2+pessoas3*2;
    andar3 = pessoas1*4+pessoas2*2;
    if(andar1<=andar2 && andar1<=andar3)
    {
        menor_tempo = andar1;
    }
    else if(andar2<=andar1 && andar2<=andar3)
    {
        menor_tempo = andar2;
    }
    else
    {
        menor_tempo = andar3;
    }
    printf("%d\n", menor_tempo);
    return 0;
}