#include <stdio.h>

int main()
{
    int qtd_casos;
    float x1, x2, x3, med;
    scanf("%d", &qtd_casos);
    for(int i=0; i<qtd_casos; i++)
    {
        scanf("%f%f%f", &x1, &x2, &x3);
        med = ((x1*2)+(x2*3)+(x3*5))/10.0;
        printf("%.1f\n", med);
    }
    return 0;
}