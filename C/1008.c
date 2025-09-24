#include <stdio.h>

int main()
{
    int num, h;
    float val;
    scanf("%d%d%f", &num, &h, &val);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, h*val);
    return 0;
}