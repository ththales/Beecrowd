#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a<b+c && b<a+c && c<a+b) //Verificando a possibilidade de ser um triangulo
    {
            if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            {
                printf("TRIANGULO RETANGULO\n");
            }
            else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
            {
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else
            {
                printf("TRIANGULO ACUTANGULO\n");
            }
            if(a==b && b==c)
            {
                printf("TRIANGULO EQUILATERO\n");
            }
            else if(a==b || a==c || b==c)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
    }
    else
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    return 0;
}