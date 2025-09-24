#include <stdio.h>

void arrays(int *array)
{
    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);
        if(array[i]<=0)
        {
            array[i] = 1;
        }
    }
}

int main()
{
    int vect[10];
    arrays(vect);
    for(int i=0; i<10; i++)
    {
        printf("X[%d] = %d\n", i, vect[i]);
    }
    return 0;
}