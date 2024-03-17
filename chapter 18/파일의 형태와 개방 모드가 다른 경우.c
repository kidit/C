#include <stdio.h>

int main(void){
    FILE *fp;
    int ary[10] = {5,2,3,4,1,6,7,8,9,10};
    int i, res;

    fp = fopen("a.txt", "wb");
    for (i = 0; i< 10; i++){
        fputc(ary[i], fp);
    }
    fclose(fp);

    fp = fopen("a.txt", "rt");
    while(1){
        res = fgetc(fp);
        if (res == EOF) break;
        printf("%4d", res);
    }
    fclose(fp);

    return 0;
}