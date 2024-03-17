#include <stdio.h>

int main(void){
    int a = 10, b = 15, total;
    double avg, *pg = &avg;
    int *pa, *pb, *pt = &total;

    pa = &a, pb = &b;
    *pt = *pa + *pb, *pg = *pt / 2.0;

    printf("two integer value : %d, %d\n", *pa, *pb);
    printf("sum and avg : %d, %.1lf\n", *pt, *pg);

    return 0;
}