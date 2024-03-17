#include <stdio.h>

int main(void){
    int ary[5];

    printf("ary value : %u\t", ary);
    printf("ary address : %u\n", &ary);
    printf("ary + 1 : %u\t", ary + 1);
    printf("&ary + 1 : %u\n", &ary + 1);

    return 0;
    
}