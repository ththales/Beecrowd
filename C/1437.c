#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num_comandos;
    char dir, coord;
    while(i>0)
    {
        scanf("%d", &num_comandos);
        if(num_comandos==0)
        {
            return 0;
        }
        else
        {
            dir = 'N';
            for(int i2=0; i2<num_comandos; i2++)
            {
                scanf(" %c", &coord);
                if(coord == 'D')
                {
                    switch(dir)
                    {
                        case 'N': dir = 'L';
                        break;
                        case 'L': dir = 'S';
                        break;
                        case 'S': dir = 'O';
                        break;
                        case 'O': dir = 'N';
                        break;
                    }
                }
                else
                {
                    switch(dir)
                    {
                        case 'N': dir = 'O';
                        break;
                        case 'O': dir = 'S';
                        break;
                        case 'S': dir = 'L';
                        break;
                        case 'L': dir = 'N';
                        break;
                    }
                }
            }
        }
        printf("%c\n", dir);
    }

    return 0;
}
