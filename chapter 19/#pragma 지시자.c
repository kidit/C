#include <stdio.h>
#pragma pack(push , 1)
typedef struct{
    char ch; int in;
}Sample1;

#pragma pack(pop)
typedef struct{
    char ch; int in;
}Sample2;

int main(void){
    printf("Sample1 structure size : %d bite\n", sizeof(Sample1));
    printf("Sample2 structure size : %d bite\n", sizeof(Sample2));

    return 0;
}