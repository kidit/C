#include <stdio.h>

int main(void){
    int a, *pa;

    pa = &a, *pa = 10;

    printf("pointer a : %d\n", *pa);
    printf("parameter name a : %d\n", a);

    return 0;
}