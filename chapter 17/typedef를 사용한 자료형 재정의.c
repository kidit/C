#include <stdio.h>

struct student{
    int num;
    double grade;
};
typedef struct student Student;
void pirnt_data(Student *ps);

int main(void){
    Student s1 = {315, 4.2};
    print_data(&s1);
    return 0;
}

void print_data(Student *ps){
    printf("class : %d\n", ps -> num);
    printf("grade : %.1lf\n", ps -> grade);
}