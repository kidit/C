#include <stdio.h>

int main(void){
    int a= 10, b= 20, c = 20, res;

    res = (a>b);

    printf("a > b : %d\n",res);
    
    res = (a >= b);
    
    printf("a >= b : %d\n", res);

    res = (a < b);

    printf("a < b ; %d\n", res);

    res = (a <= b);

    printf("a <= b : %d\n", res);

    res = (a == b);

    printf("a == b : %d\n", res);

    res = (a != b);

    printf("a != b : %d\n", res);

    return 0;
}