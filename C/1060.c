#include <stdio.h>
int main(){
    int qtd = 0;
    float x;
    for(int i=0; i<6; i++){
        scanf("%f", &x);
        if(x>0) qtd++;
    }
    printf("%d valores positivos\n", qtd);
    return 0;
}