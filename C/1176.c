#include <stdio.h>

void fib(long long int *vet_fib_cpy, long long int pos_cpy)
{
    vet_fib_cpy[0] = 0;
    vet_fib_cpy[1] = 1;
    if(pos_cpy==0)
    {
        vet_fib_cpy[0] = 0;
    }
    else
    {
        if(pos_cpy==1)
        {
            vet_fib_cpy[1] = 1;
        }
        else
        {
            for(int i=2; i<=pos_cpy; i++)
            {
                vet_fib_cpy[i] = vet_fib_cpy[i-1]+vet_fib_cpy[i-2];
            }
        }
    }
}

int main()
{
    long long int num_casos, pos, vet_fib[60];
    scanf("%lld", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        scanf("%lld", &pos);
        fib(vet_fib, pos);
        printf("Fib(%lld) = %lld\n", pos, vet_fib[pos]);
    }

    return 0;
}