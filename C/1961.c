#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h_pulo, num_canos, h_cano_anterior, h_canos, i = 1;
    scanf("%d%d", &h_pulo, &num_canos);
    scanf("%d", &h_cano_anterior);
    while(i<num_canos)
    {
        i++;
        scanf("%d", &h_canos);
        if(abs(h_canos-h_cano_anterior)>h_pulo)
        {
            printf("GAME OVER\n");
            return 0;
        }
        h_cano_anterior = h_canos;
    }
    printf("YOU WIN\n");
    return 0;   
}