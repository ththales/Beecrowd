#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letras, prox;
    while(scanf("%c", &letras)!=EOF)
    {
        if(letras=='s' || letras=='j' || letras=='p' || letras=='b' || letras=='v' || letras=='x' || letras=='z')
        {
            letras='f';
        }
        if(letras=='S' || letras=='J' || letras=='P' || letras=='B' || letras=='V' || letras=='X' || letras=='Z')
        {
            letras='F';
        }
        if(letras!='f' && letras!='F')
        {
            printf("%c", letras);
        }
        else
        {
            if(prox!='f' && prox!='F')
            {
                printf("%c", letras);
            }
        }
        prox = letras;
    }
    return 0;
}

