#include <stdio.h>

int main(void){
    int a[5] = {3,2,1,6,5};
    int temp, min;

    for (int i = 0; i< 4; i++){
        min = i;
        for (int j = i+1; j<5; j++){
            if (a[min] > a[j]){
                min = j;
            }
        }
        if (min != 1){
            temp =  a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (int i =0; i< 5; i++){
        printf("%5d", a[i]);
    }

    return 0;
}