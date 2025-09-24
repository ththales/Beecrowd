#include <stdio.h>

int main()
{
    float a, b, c, med;
    scanf("%f%f%f", &a, &b, &c);
    med = (2.0*a+3.0*b+5.0*c)/10.0;
    printf("MEDIA = %.1f\n", med);
    return 0;
}