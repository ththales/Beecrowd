#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cpf[14];
    int v_b1, v_b2, b1, b2;
    while(scanf("%s", cpf)!=EOF)
    {
        //Resetando os valores iniciais a cada iteração
        b1 = b2 = 0;
        v_b1 = 1;
        v_b2 = 9;
        //Convertendo a string CPF para inteiro
        for(int i=0; i<14; i++)
        {
            if(cpf[i]!='.' && cpf[i]!='-')
            {
                cpf[i] = cpf[i] - '0';
                //Calculando os dígitos verificadores B1 e B2
                if(i!=3 && i!=7 && i!=11 && i!=12 && i!=13)
                {
                    b1 += cpf[i]*v_b1;
                    v_b1++;
                    b2 += cpf[i]*v_b2;
                    v_b2--;
                }
            }
        }
        //Validando o CPF
        //Para digito B1
        b1 %= 11;
        if(b1==10)
        {
            b1 = 0;
        }
        //Para digito B2
        b2 %= 11;
        if(b2==10)
        {
            b2 = 0;
        }
        if(b1==cpf[12] && b2==cpf[13])
        {
            printf("CPF valido\n");
        }
        else
        {
            printf("CPF invalido\n");
        }
    }
    return 0;
}