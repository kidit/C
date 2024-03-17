#include <stdio.h>

int main(void){
    int a = 10;
    int *pi, **ppi;

    pi = &a, ppi = &pi;

    printf("----------------------------------------------\n");
    printf("변수        변숫값      &연산       *연산       **연산\n");
    printf("----------------------------------------------\n");
    printf(" a%10d%10%10u\n", a, &a);
    printf(" pi%10u%10u%10d\n",pi, &pi, *pi);
}