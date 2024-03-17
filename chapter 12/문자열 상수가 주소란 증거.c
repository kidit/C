#include <stdio.h>

int main(void){
    printf("save address value of 'apple' : %p\n", "apple");
    printf("second letter of address ; %p\n", "apple" +1);
    printf("first letter : %c\n", *"apple");
    printf("second letter ;%c\n", *("apple" + 1));
    printf("third letter that type of arrays : %c\n", "apple"[2]);

    return 0;
}