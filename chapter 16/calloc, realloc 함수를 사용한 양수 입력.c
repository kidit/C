#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi, size=5, count=0,num,i;
    pi = (int *)malloc(sizeof(int));
    while(1){
        printf("write in nature number : ");
        scanf("%d", &num);
        if(num <= 0) break;
        if(count == size){
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (i = 0; i< count ; i++){
        printf("%5d", pi[i]);
    }
    free(pi);

    return 0;
}