#include <stdio.h>

void assign10(void);
void assign20(void);

int a;

int main(void){
    printf("before a : %d\n", a);

    assign10();
    assign20();

    printf("after a : %d\n", a);

    return 0;
}

void assign10(void){
    a = 10;
}

void assign20(void){
    int a;
    a = 20;
}