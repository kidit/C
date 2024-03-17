#include <stdio.h>

int main(void){
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char address size : %d\n", sizeof(&ch));
    printf("int address size : %d\n", sizeof(&in));
    printf("double address size : %d\n", sizeof(&db));

    printf("char * pointer size : %d\n", sizeof(pc));
    printf("int * pointer size ; %d\n", sizeof(pi));
    printf("double * pointer size : %d\n", sizeof(pd));

    printf("char * pointer point out of parameter size : %d\n", sizeof(*pc));
    printf("int * pointer point out of parameter size : %d\n", sizeof(*pi));
    printf("double * pointer point outof parameter size ;%d\n", sizeof(*pd));

    return 0;
}