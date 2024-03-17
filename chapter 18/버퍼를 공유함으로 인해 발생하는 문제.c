#include <stdio.h>

int main(void){
    FILE *fp;
    int age;
    char name[20];

    fp = fopen("a.txt", "r");

    fscanf(fp, "%d", &age);
    fgets(name, sizeof(name), fp); // 오류 발생

    printf("age : %d, name : %s", age, name);
    fclose(fp);

    return 0;
}