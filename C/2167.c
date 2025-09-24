#include <stdio.h>

int falhaMotor(int num_casos_cpy)
{
    int num_rpm, vet_rpm[100], i, qtd_erros = 0, f = 0;
    for(i=0; i<num_casos_cpy; i++)
    {
        scanf("%d", &num_rpm);
        vet_rpm[i] = num_rpm;
    }
    for(i=1; i<num_casos_cpy && f!=1; i++)
    {
        if(vet_rpm[i]<vet_rpm[i-1])
        {
            qtd_erros = i+1;
            f = 1;
        }
    }
    return qtd_erros;
}

int main()
{
    int num_casos, qtd_falhas;
    scanf("%d", &num_casos);
    qtd_falhas = falhaMotor(num_casos);
    printf("%d\n", qtd_falhas);
    return 0;
}
