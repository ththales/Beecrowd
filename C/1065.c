#include <stdio.h>
int main(){
    int x, qtd = 0;
    for(int i=0; i<5; i++){
        scanf("%d", &x);
        if(x%2==0) qtd++;
    }
    printf("%d valores pares\n", qtd);
    return 0;
}