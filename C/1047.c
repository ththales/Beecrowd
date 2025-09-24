#include <stdio.h>
#include <stdlib.h>

int main() {
    int h_0, h, m_0, m, total, total_h, total_m;
    scanf("%d%d%d%d", &h_0, &m_0, &h, &m);
    total_m = (h*60+m)-(h_0*60+m_0);
    if (total_m <= 0) 
    {
        total_m += 24*60;
    }
    total_h = total_m/60;
    total_m = total_m%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total_h, total_m);
    return 0;
}