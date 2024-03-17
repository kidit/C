#include <stdio.h>

void assign(void);

int main(void){
    auto int a = 0;

    assign();
    printf("main function a : %d\n", a);

    return 0;
}

void assign(void){
    int a;

    a = 10;
    printf("assign function a : %d\n", a);
}