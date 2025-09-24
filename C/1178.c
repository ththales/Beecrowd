#include <stdio.h>

int main()
{
    double num, vect_num[500];
    scanf("%lf", &num);
    for(int i=0; i<100; i++)
    {
        vect_num[i] = num;
        printf("N[%d] = %.4lf\n", i, vect_num[i]);
        num /= 2;
    }
    return 0;
}
