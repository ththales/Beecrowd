#include <stdio.h>

double raizQuadrada(int num_rep_cpy)
{
    double r_cpy = 0;
    for(int i=0; i<num_rep_cpy; i++)
    {
        r_cpy = 1.0/(6.0+r_cpy);
    }
    r_cpy += 3;
    return r_cpy;
}

int main()
{
    int num_rep;
    double r;
    scanf("%d", &num_rep);
    r = raizQuadrada(num_rep);
    printf("%.10lf\n", r);
}