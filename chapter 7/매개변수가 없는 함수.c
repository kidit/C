#include <stdio.h>

int get_num(void);

int main(void){
    int result;

    result = get_num();
    printf("return value : %d\n", result);
    return 0;
}

int get_num(void){
    int num;

    printf("plus integer input ; ");
    scanf("%d", &num);

    return num;
}