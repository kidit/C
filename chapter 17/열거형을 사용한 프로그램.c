#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER};

int main(void){
    enum season ss;
    char *pc = NULL;

    ss = SPRING;
    switch (ss){
        case SPRING: pc = "inline"; break;
        case SUMMER: pc = "swimming"; break;
        case FALL: pc = "trip"; break;
        case WINTER: pc = "skiing"; break;
    }
    printf("my regier activity  => %s\n", pc);

    return 0;
}