#include <stdio.h>

int main(void){
    char str[80] = "applejam";

    printf("first string : %s\n", str);
    printf("write string ; ");
    scanf("%s", str);
    printf("after string : %s\n", str);

    return 0;
}