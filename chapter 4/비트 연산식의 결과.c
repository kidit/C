#include <stdio.h>

int main(void){
    int a = 10, b = 12;

    printf("a &  b :%d\n", a & b);
    printf("a ^ b : %d\n", a ^ b);
    printf("a | b : %d\n", a | b);
    printf("~a : %d\n", ~a);
    printf("a <<1 : %d\n", a<<2);
    printf("a >> 2 :%d\n", a>>2);

    return 0;
}