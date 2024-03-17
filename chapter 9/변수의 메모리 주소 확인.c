#include <stdio.h>

int main(void){
    int a;
    double b;
    char c;

    printf("int address : %d\n", &a);
    printf("double address : %u\n", &b);
    printf("char address : %u\n", &c);

    return 0;
}