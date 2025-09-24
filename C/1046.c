#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h_0, h, tempo;
    scanf("%d%d", &h_0, &h);
    if(h_0>h)
    {
        tempo = 24-(h_0-h);
    }
    else if(h_0<h)
    {
        tempo = h-h_0;
    }
    else if(h_0==h)
    {
        tempo = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    return 0;
}