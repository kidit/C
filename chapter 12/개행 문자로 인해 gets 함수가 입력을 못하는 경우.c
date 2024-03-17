#include <stdio.h>

int main(void){
    int age;
    char name[20];

    printf("input age : ");
    scanf("%d", &age);

    printf("input name : ");
    gets(name);
    printf("age :%d, name : %s\n", age, name);

    return 0;
}