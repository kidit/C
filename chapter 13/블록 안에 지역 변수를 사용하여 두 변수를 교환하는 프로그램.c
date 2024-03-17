#include <stdio.h>

int main(void){
    int a = 10, b = 20;
    
    printf("before a, b :%d, %d\n", a, b);
    {
        int temp;

        temp = a;
        a = b;
        b = temp;
    }
    printf("after a,b : %d, %d\n",a,b);

    return 0;
}