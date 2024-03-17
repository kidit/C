#include <stdio.h>

int main(void){
    FILE *fp;

    fp = fopen("a.txt", "r");
    if (fp ==NULL){
        printf("do not open the file.\n");
        return 1;
    }
    printf("open File.\n");
    fclose(fp);

    return 0;
}