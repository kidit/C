#include <stdio.h>

int main(void){
    char grade, name[20];

    printf("grade : ");
    scanf("%c", &grade);
    printf("name : ");
    scanf("%s", name);
    printf("%s grade -> %c\n", name, grade);

    return 0;
}