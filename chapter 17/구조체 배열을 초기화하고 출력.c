#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main(void){
    struct address list[5] = {
        {"test1", 23, "111-1111", "core1"},
        {"test2", 35, "222-2222", "core2"},
        {"test3", 19, "333-3333", "core3"},
        {"test4", 15, "444-4444", "core4"},
        {"test5", 45, "555-5555", "core5"}
    };
    
    for( int i= 0; i< 5; i++){
        printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    }
    return 0;
}