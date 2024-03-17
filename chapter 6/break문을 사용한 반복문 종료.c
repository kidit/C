#include <stdio.h>

int main(void){
    int i, sum = 0;

    for (i = 1; i <= 10; i++){
        sum += i;
        if (sum > 30) break;
    }
    printf("stack value : %d\n", sum);
    printf("last plus value : %d\n", i);
    return 0;
}