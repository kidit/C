#include <stdio.h>

int main(void){
    char str[80];
    printf("input string including empty : ");
    fgets(str, sizeof(str), stdin);
    printf("write string is %s", str);

    return 0;
}