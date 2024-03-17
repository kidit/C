#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("exit of range pass!\n")

int main(void){
    double radius, area;
    printf("input radius (under 10) : ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    if (area > LIMIT) ERR_PRN;
    else printf("circle area : %.2lf (%s)\n", area, MSG);

    return 0;
}