#include <stdio.h>

void input_data(int *pa, int *pb){
    printf("two integer input : ");
    scanf("%d%d", pa, pb);
}

double average(int a, int b){
    int tot;
    double avg;

    tot = a+b;
    avg = tot / 2.0;

    return avg;
}