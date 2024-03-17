#include <stdio.h>

void add_ten(int a);

int main(void){
    int a = 10;

    add_ten(10);
    printf("a : %d\n", a);

    return 0;
}

void add_ten(int a){
    a = a + 10;
}