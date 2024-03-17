#include <stdio.h>

struct student {
    int num;
    double grade;
};

int main(void){
    struct student s1;

    s1.num = 2;
    s1.grade = 3.7;
    printf("class : %d\n", s1.num);
    printf("grade : %.1lf\n", s1.grade);

    return 0;
}