#include <stdio.h>
#include "define_header/student.h"

int main(void){
    Student a = {315, "hong"};
    printf("class : %d, name : %s\n", a.num, a.name);
    return 0;
}