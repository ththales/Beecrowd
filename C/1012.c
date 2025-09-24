#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, area_tr, area_circ, area_trap, area_quad, area_ret;
    scanf("%lf%lf%lf", &a, &b, &c);
    area_tr = (a*c)/2;
    area_circ = 3.14159*c*c;
    area_trap = ((a+b)*c)/2;
    area_quad = b*b;
    area_ret = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_tr, area_circ, area_trap, area_quad, area_ret);
    return 0;
}