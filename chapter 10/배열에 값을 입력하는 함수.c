#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void){
    double ary[5], max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    max = find_max(ary,size);
    printf("max array value : %.1lf\n", max);

    return 0;
}

void input_ary(double *pa, int size){
    int i;

    printf("%d input integer : ", size);
    for(i = 0; i< size; i++){
        scanf("%lf", pa + i);
    }
}

double find_max(double *pa, int size){
    double max;
    int i;

    max = pa[0];
    for (i = 1; i < size; i++){
        if (pa[i] > max) max = pa[i];
    }
    return max;
}