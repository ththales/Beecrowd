#include <stdio.h>

int main()
{
    double a, b, med;
    scanf("%lf%lf", &a, &b);
    med = (3.5*a+7.5*b)/11.0;
    printf("MEDIA = %.5lf\n", med);
    return 0;
}