#include <stdio.h>
#include <string.h>

int main(void){
    char str1[80], str2[80];
    char *resp;

    printf("two fruit name : ");
    scanf("%s%s", str1, str2);
    if (strlen(str1) >strlen(str2)) resp = str1;
    else resp = str2;
    printf("long name of fruit is %s\n", resp);

    return 0;
}