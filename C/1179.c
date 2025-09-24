#include <stdio.h>

int main()
{
    int num, vect_par[5], vect_imp[5], j = 0, k = 0;
    for(int i=0; i<15; i++)
    {
        scanf("%d", &num);
        if(num%2==0)
        {
            vect_par[j] = num;
            j++;
        }
        else
        {
            vect_imp[k] = num;
            k++;
        }
        if(j>4)
        {
            printf("par[%d] = %d\n", 0, vect_par[0]);
            printf("par[%d] = %d\n", 1, vect_par[1]);
            printf("par[%d] = %d\n", 2, vect_par[2]);
            printf("par[%d] = %d\n", 3, vect_par[3]);
            printf("par[%d] = %d\n", 4, vect_par[4]);
            j = 0;
        }
        if(k>4)
        {
            printf("impar[%d] = %d\n", 0, vect_imp[0]);
            printf("impar[%d] = %d\n", 1, vect_imp[1]);
            printf("impar[%d] = %d\n", 2, vect_imp[2]);
            printf("impar[%d] = %d\n", 3, vect_imp[3]);
            printf("impar[%d] = %d\n", 4, vect_imp[4]);
            k = 0;
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("impar[%d] = %d\n", i, vect_imp[i]);
    }
    for(int i=0; i<j; i++)
    {
        printf("par[%d] = %d\n", i, vect_par[i]);
    }
    return 0;
}
