#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi;
    int i, sum = 0;

    pi = (int *)malloc(sizeof(int));
    if (pi ==NULL){
        printf("not enough memory\n");
        exit(1);
    }
    for(i = 0; i<5; i++){
        scanf("%d", &pi[i]);
        sum += pi[i];
    }
    printf("average five people age : %.1lf\n", (sum / 5.0));
    free(pi);

    return 0;
}