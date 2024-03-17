#include <stdio.h>

int main(void){
    char str[80];

    printf("input string : ");
    scanf("%s", str);
    printf("first word ; %s\n", str);
    scanf("%s", str);
    printf("second word where remain butter : %s\n", str);

    return 0;
}