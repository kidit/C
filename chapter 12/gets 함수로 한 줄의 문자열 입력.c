#include <stdio.h>

int main(void){
    char str[80];

    printf("input string including empty : ");
    gets(str);
    printf("write string is %s.", str);

    return 0;
}