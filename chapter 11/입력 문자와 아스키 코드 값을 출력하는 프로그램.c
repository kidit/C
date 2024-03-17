#include <stdio.h>

int main(void){
    int res;
    char ch;

    while(91){
        res = scanf("%c", &ch);
        if (res == -1) break;
        printf("%d ", ch);
    }
    return 0;
}