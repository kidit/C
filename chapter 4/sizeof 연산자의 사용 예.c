#include <stdio.h>

int main(void){
    int a = 10;
    double b = 3.3;

    printf("integer value ; %d\n", sizeof(a));
    printf("double value : %d\n", sizeof(b));
    printf("integer type float value : %d\n", sizeof(10));
    printf("result equation : %d\n", sizeof(1.5 +3.4));
    printf("char type value ; %d", sizeof(char));

    return 0;
}