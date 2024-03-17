#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void){
    int i;
    printf("common auto function...\n");
    for (i = 0; i < 3; i++){
        auto_func();
    }

    printf("static function...\n");
    for (i = 0; i < 3; i++){
        static_func();
    }

    return 0;
}

void auto_func(void){
    auto int a = 0;

    a++;
    printf("%d\n", a);
}

void static_func(void){
    static int a;

    a++;
    printf("%d\n", a);
}