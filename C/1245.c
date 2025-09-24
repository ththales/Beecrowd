#include <stdio.h>

int main()
{
    int qtd_botas, qtd_pares;
    while(scanf("%d", &qtd_botas)!=EOF)
    {
        //Reiniciando a quantidade de pares de botas existentes a cada interação
        qtd_pares = 0;

        //Declarando variáveis
        int tam[qtd_botas];
        char pe[qtd_botas];

        //Lendo as botas relativas à quantidade
        for(int i=0; i<qtd_botas; i++)
        {
            scanf("%d %c", &tam[i], &pe[i]);
        }

        //Verificando a quantidade de pares existentes;
        for(int i=0; i<qtd_botas; i++)
        {
            for(int j=i+1; j<qtd_botas; j++)
            {
                if(tam[i]!=-1 && tam[j]!=-1 && tam[i]==tam[j] && pe[i]!=pe[j] && pe[i]!='X' && pe[j]!='X')
                {
                    qtd_pares++;
                    tam[i] = tam[j] = -1;
                    pe[i] = pe[j] = 'X';
                }
            }
        }
        printf("%d\n", qtd_pares);
    }

    return 0;
}