#include <stdio.h>

int main()
{
    double vol, diam, h, a;
    while(scanf("%lf%lf", &vol, &diam)!=EOF)
    {
        h = vol/(3.14*((diam/2)*(diam/2))); //Altura do cilindro
        a = 3.14*((diam/2)*(diam/2)); //Área da "tampa" do cilindro
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", h, a);
    }
    return 0;
}