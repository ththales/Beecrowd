#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, n2, n3, n4, media_1, media_2, exame;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    media_1 = (2*n1 + 3*n2 + 4*n3 + 1*n4)/10.0;
    printf("Media: %.1f\n", media_1);
    if (media_1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        if(media_1>=7.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno em exame.\n");
            scanf("%f", &exame);
            media_2 = (exame+media_1)/2.0;
            printf("Nota do exame: %.1f\n", exame);
            if(media_2<=4.9)
            {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", media_2);
            }
            else
            {
                if(media_2>=5.0)
                {
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", media_2);
                }
            }
        }
    }
    return 0;
}