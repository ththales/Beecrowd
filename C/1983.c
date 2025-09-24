#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd_alunos, mat, mat_maior_nota = 0, i;
    float nota, maior_nota, aux = 0;
    maior_nota = 0;
    scanf("%d", &qtd_alunos);
    for(i=1; i<=qtd_alunos; i++)
    {
        scanf("%d %f", &mat, &nota);
        if(nota>maior_nota)
        {
            maior_nota = nota;
            mat_maior_nota = mat;
        }
    }
    if(maior_nota>=8)
    {
        printf("%d\n", mat_maior_nota);
    }
    else
    {
        printf("Minimum note not reached\n");
    }
    return 0;
}