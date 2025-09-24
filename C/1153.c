#include <stdio.h>

int fat(int num) {
    if(num<=1)
        return 1;
    return num*fat(num-1);
}

int main() {
    int num, r;
    scanf("%d", &num);
    r = fat(num);
    printf("%d\n", r);
    return 0;
}