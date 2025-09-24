#include <stdio.h>

int main()
{
    int h, qtd_h = 0, num_casos, hmin, hmax;
    while(scanf("%d%d%d", &num_casos, &hmin, &hmax)!=EOF)
    {
        qtd_h = 0;
        for(int i=0; i<num_casos; i++)
        {
            scanf("%d", &h);
            if(h>=hmin && h<=hmax)
            {
                qtd_h++;
            }
        }
        printf("%d\n", qtd_h);
    }
    return 0;
}
