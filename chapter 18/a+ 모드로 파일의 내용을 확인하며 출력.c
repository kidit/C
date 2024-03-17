#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char str[20];

    fp = fopen("a.txt", "a+");
    if (fp == EOF){
        printf("do not make the file.\n");
        return 1;
    }

    while (1){
        printf("fruit name : ");
        scanf("%s", str);
        if (strcmp (str, "end") == 0){ break; }
        else if (strcmp (str, "list") == 0) {
            fseek(fp , 0, SEEK_SET);
            while(1){
                fgets(str, sizeof(str), fp);
                if (feof(fp)) break;
                printf("%s", str);
            }
        }
        else fprintf(fp, "%s\n", str);
    }
    fclose(fp);
    return 0;
}