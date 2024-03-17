#include <stdio.h>

int main(void){
    register int a;
    auto int sum = 0;

    for (int i = 1; i<= 10000; i++){
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}