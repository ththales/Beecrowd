#include <stdio.h>

int main()
{
    char nome[50];
    int num_casos;
    float nota_part, nota, menor_nota , maior_nota, media, s;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        s = 0, menor_nota = 999, maior_nota = -999;
        scanf("%s", nome);
        scanf("%f", &nota_part);
        for(int j=0; j<7; j++)
        {
            scanf("%f", &nota);
            if(nota>maior_nota)
            {
                maior_nota = nota;
            }
            if(nota<menor_nota)
            {
                menor_nota = nota;
            }
            s += nota;
        }
        media = (s-(maior_nota+menor_nota))*nota_part;
        printf("%s %.2f\n", nome, media);
    }
    return 0;
}
