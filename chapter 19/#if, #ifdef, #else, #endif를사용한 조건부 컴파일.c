#include <stdio.h>
#define VER 7
#define BIT16

int main(void){
    int max;

#if VER >= 6
    printf("version %d.\n", VER);
#endif

#if def BIT16
    max = 32767;
#else
    max = 2147483647;
#endif
    printf("max of integer parameter : %d\n", max);

    return 0;
}