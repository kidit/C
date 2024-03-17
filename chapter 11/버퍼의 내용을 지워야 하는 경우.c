#include <stdio.h>

int main(void){
    int num, grade;

    printf("input class : ");
    scanf("%d", &num);
    getchar();
    printf("input grade : ");
    grade = getchar();
    printf("class : %d, grade : %c",num, grade);

    return 0;
}