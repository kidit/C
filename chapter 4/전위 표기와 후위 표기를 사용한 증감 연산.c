#include <stdio.h>

int main(void){
    int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;
    post = (a++) * 3;

    printf("default a: %d\ndefault b : %d",a,b);
    printf("pre : (++a) * 3 -> %d\npost : (a++) * 3 -> %d",pre,post);

    return 0;
}