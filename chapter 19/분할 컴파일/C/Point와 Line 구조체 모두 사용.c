#include <stdio.h>
#include "point 구조체 선언.h"
#include "Line 구조체 선언.h"

int main(void){
    Line a = {{1,2},{5,6}};
    Point b;

    b.x = (a.first.x + a.second.x) / 2;
    b.y = (a.first.y + a.second.y) / 2;
    printf("define mid_dot address : (%d, %d)\n", b.x, b.y);

    return 0;
}