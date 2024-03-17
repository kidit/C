#include <stdio.h>

char *my_strcpy(char *pd, char *ps);

int main(void){
    char str[80] = "strawberry";

    printf("before string :%s\n", str);
    my_strcpy(str, "apple");
    printf("change letter : %s\n", str);
    printf("another insert string : %s\n", my_strcpy(str, "kiwi"));

    return 0;
}

char *my_strcpy(char *pd, char *ps){
    char *po = pd;

    while(*ps != '\0'){
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';

    return po;
}