#include <stdio.h>
#include <string.h>

int main(void){
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("the late of dictionary name in fruit : ");

    if(strcmp(str1, str2) > 0) printf("%s\n", str1);
    else printf("%s\n", str2);

    return 0;
}