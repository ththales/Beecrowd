#include <stdio.h>

int main()
{
    int num_alunos, num, freq = 0;
    scanf("%d", &num_alunos);
    int notas[num_alunos], qtd[101] = {0};
    for(int i=0; i<num_alunos; i++)
    {
        scanf("%d", &notas[i]);
        qtd[notas[i]]++;
    }
    for(int i=0; i<=100; i++)
    {
        if(qtd[i]>=freq)
        {
            freq = qtd[i];
            num = i;
        }
    }
    printf("%d\n", num);
    return 0;
}
