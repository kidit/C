#include <stdio.h>

int main(void){
    char small, cap = '6';

    if((cap >= 'A') && (cap <= 'Z')){
        small = cap + ('a' - 'A');
    }

    printf("capital : %c %c", cap, '\n');
    printf("small : %c", small);

    return 0;
}