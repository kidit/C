#include <stdio.h>

struct vision{
    double left, right;
};

struct vision exchange(struct vision robot);

int main(void){
    struct vision robot;
    printf("vision input : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("change vision : %.1lf %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot){
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}