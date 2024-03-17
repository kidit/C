#include <stdio.h>

int main(void){
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary, *pb = pa + 3;

    printf("pa ; %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;
    printf("pb - pa : %u\n", pb - pa);

    printf("front array argument value print : ");
    if (pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);

    return 0;

}