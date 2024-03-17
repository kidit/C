#include <stdio.h>

struct profile{
    int age;
    double height;
};

struct student{
    struct profile pf;
    int id;
    double grade;
};

int main(void){
    struct student yuni;

    yuni.pf.age = 17;
    yuni.pf.height = 164.5;
    yuni.id = 315;
    yuni.grade = 4.3;

    printf("age : %d\n", yuni.pf.age);
    printf("height : %d\n", yuni.pf.height);
    printf("class ; %d\n", yuni.id);
    printf("grade : %.1lf\n", yuni.grade);

    return 0;
}