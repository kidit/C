#include <stdio.h>

int main(void){
    char str[80];

    printf("input string : ");
    gets(str);
    puts("inputed string : ");
    puts(str);

    return 0;
}