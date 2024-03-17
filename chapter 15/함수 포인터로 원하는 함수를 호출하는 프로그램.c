#include <stdio.h>

void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void){
    int set;

    printf("01 two integer sum\n");
    printf("02 two integer mul\n");
    printf("03 which one does high value of two integer?\n");
    printf("what want you do calculator : ");
    scanf("%d", &set);

    switch(set){
        case 1 : func(sum); break;
        case 2 : func(mul); break;
        case 3 : func(max); break;
    }
    return 0;
}

void func(int (*fp)(int, int)){
    int a,b;
    int res;

    printf("input two integer : ");
    scanf("%d%d", &a, &b);
    res = fp(a,b);
    printf("result : %d\n", res);
}

int sum(int a, int b){
    return (a+b);
}

int mul(int a, int b){
    return (a * b);
}

int max(int a, int b){
    if (a > b) return a;
    else return b;
}