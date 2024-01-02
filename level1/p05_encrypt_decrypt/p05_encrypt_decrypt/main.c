#include <stdio.h>
#include"recode.h"
#include"recode.c"
#include <string.h>

void read_line(char str[], int read_num);
void recode(char str1[],int p,int n);
int main() {
    char str[20] = "";
    read_line(str, 20);
    printf("%s", str);
    printf("\n");
    char str1[100];
    strcpy(str1,str);
    recode(str1,0,0);


    return 0;
}

void read_line(char str[], int read_num) {
    int c;
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (i < read_num && c < 'z' - 4) {
            c += 5;
        } else c = c - 21;
        str[i++] = c;
    }
    str[i] = '\0';

}











