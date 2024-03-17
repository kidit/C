#include <stdio.h>

union student{
    int num;
    double grade;
};

int main(void){
    union student s1 = {315};

    printf("class : %d\n", s1.num);
    s1.grade = 4.4;
    printf("class : %.1lf\n", s1.grade);
    printf("grade : %d\n", s1.num);

    return 0;
}