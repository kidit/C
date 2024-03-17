#include <stdio.h>

void input_data(int *, int *);
double average(int, int);

int main(void){
    int a,b;
    double avg;

    input_date(&a, &b);
    avg = average(a,b);
    printf("%d and %d average : %.1lf\n",a,b,avg);

    return 0;
}