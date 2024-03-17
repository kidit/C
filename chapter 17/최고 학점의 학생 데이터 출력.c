#include <stdio.h>

struct student{
    int id;
    char name[20];
    double grade;
};

int main(void){
    struct student 
    s1 = {315, "test1", 2.4},
    s2 = {315, "test2", 3.7},
    s3 = {317, "test3", 4.4};

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;

    printf("class : %d\n", max.id);
    printf("name : %s\n", max.name);
    printf("grade : %.1lf\n", max.grade);

    return 0;
    
}