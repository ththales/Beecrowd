#include <stdio.h>

int main()
{
    int num_med, padrao = 0, picos = 0, vales = 0, i; //Variáveis inteiras
    scanf("%d", &num_med);
    int h[num_med]; //Vetores
    for(i=0; i<num_med; i++)
    {
        scanf("%d", &h[i]);
    }
    for(i=1; i<num_med; i++) // Verificando se é o vale ou pico que inicia
    {
        if(h[i]<h[i-1]) //O primeiro é sempre o pico
        {
            //Então é um vale
            picos++;
            vales = 0;
            if(picos>=2) //A quantidade de picos nao pode passar de 2
            {
                padrao = 0;
                picos = num_med;
            }
            else
            {
                padrao = 1;
            }
        }
        else //O primeiro é o vale
        {
            if(h[i]>h[i-1]) //O primeiro é sempre um vale
            {
                //Entao é um pico
                picos = 0;
                vales++;
                if(vales>=2)
                {
                    padrao = 0;
                    vales = num_med;
                }
                else
                {
                    padrao = 1;
                }
            }
        }
    }
    for(i=2; i<=num_med; i++)
    {
        if(h[i]==h[i-1])
        {
            padrao = 0;
        }
    }
    printf("%d\n", padrao);
    return 0;
}