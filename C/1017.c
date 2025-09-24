#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, vel_med;
    double qtd_comb;
    scanf("%d\n%d", &tempo, &vel_med);
    qtd_comb = (tempo*vel_med)/12.0;
    printf("%.3lf\n", qtd_comb);
    return 0;
}