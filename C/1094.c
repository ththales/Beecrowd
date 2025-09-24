#include <stdio.h>

int main()
{
    char tipo_cobaia;
    int qtd_casos, qtd_cobaia, tot = 0, tot_s = 0, tot_r = 0, tot_c = 0;
    scanf("%d", &qtd_casos);
    for(int i=0; i<qtd_casos; i++)
    {
        scanf("%d %c", &qtd_cobaia, &tipo_cobaia);
        tot += qtd_cobaia;
        switch(tipo_cobaia)
        {
            case 'C':
            {
                tot_c += qtd_cobaia;
                break;
            }
            case 'R':
            {
                tot_r += qtd_cobaia;
                break;
            }
            default:
            {
                tot_s += qtd_cobaia;
                break;
            }
        }
    }
    printf("Total: %d cobaias\n", tot);
    printf("Total de coelhos: %d\n", tot_c);
    printf("Total de ratos: %d\n", tot_r);
    printf("Total de sapos: %d\n", tot_s);
    printf("Percentual de coelhos: %.2f %%\n", (tot_c*100.0)/(float)tot);
    printf("Percentual de ratos: %.2f %%\n", (tot_r*100.0)/(float)tot);
    printf("Percentual de sapos: %.2f %%\n", (tot_s*100.0)/(float)tot);

    return 0;
}