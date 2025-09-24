#include <stdio.h>

int main()
{
    int num_casos, anos, id;
    scanf("%d", &num_casos);
    for(int i=0; i<num_casos; i++)
    {
        scanf("%d", &anos);
        id = 2015-anos;
        if(id<=0)
        {
            id *= (-1);
            printf("%d A.C.\n", id+1);
        }   
        else
        {
            printf("%d D.C.\n", id);
        }
    }
    return 0;
}