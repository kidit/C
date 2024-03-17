#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    const int *pa = &a;

    printf("parameter a value : %d\n", *pa);
    pa = &b;
    printf("parameter b value ; %d\n", *pa);
    pa = &a;
    a = 20; // 여기서 차이가 남
    printf("parameter a : %d\n", *pa);

    return 0;
}