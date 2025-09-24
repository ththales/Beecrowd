#include <stdio.h>

void troca(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    int a, b, c, a_cpy, b_cpy, c_cpy;
    scanf("%d%d%d", &a, &b, &c);
    a_cpy = a;
    b_cpy = b;
    c_cpy = c;
    if(a>b)
    {
        troca(&a, &b);
    }
    if(a>c)
    {
        troca(&a, &c);
    }
    if(b>c)
    {
        troca(&b, &c);
    }

    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n%d\n%d\n%d\n", a_cpy, b_cpy, c_cpy);
    return 0;
}