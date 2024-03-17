#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if(pi == NULL){
        printf("not enough memory\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10, *pd = 3.4;

    printf("integer : %d\n", *pi);
    printf("double : %.1lf\n ", *pd);

    free(pi);
    free(pd);

    return 0;
}