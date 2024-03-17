#include <stdio.h>

int main(void){
    double apple;
    int banana, orange;

    apple = 5.0 / 2.0, banana = 5/2, orange = 5%2;

    printf("apple: %.1lf\nbanana: %d\norange: %d\n", apple, banana, orange);

    return 0;
}