#include <stdio.h>

int main(void){
    int ary[3] = {10,20,30};
    int *pa = ary, i;

    printf("array value : ");
    for (i = 0; i< 3; i++){
        printf("%d ", *pa);
        pa++;
    }

    return 0;
}