#include <stdio.h>

int main(void){
    char *dessert = "apple";

    printf("today dessert is %s.\n", dessert);
    dessert = "banana";
    printf("tomorrow dessert is %s.\n", dessert);

    return 0;
}