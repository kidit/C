#include <stdio.h>

void func(void);

int main(void){
    printf("Compile date and time : %s, %s\n\n", __DATE__, __TIME__);
    printf("file name : %s\n", __FILE__);
    printf("function name ; %s\n", __FUNCTION__);
    printf("line number : %d\n", __LINE__);

#line 100 "macro.c"
    func();
    return 0;
}
void func(void){
    printf("\n");
    printf("file name :%s\n", __FILE__);
    printf("function name :%s\n", __FUNCTION__);
    printf("line number :%d\n", __LINE__);
}