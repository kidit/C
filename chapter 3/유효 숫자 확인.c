#include <stdio.h>

int main(void){
    float ft = 1.234567890123456789;
    double db = 1.23456780123456789;

    printf("float value : %.20f\n", ft);
    printf("double value : %.20lf\n", db);

    return 0;
}