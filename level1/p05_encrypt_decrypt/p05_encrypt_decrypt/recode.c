//
// Created by 24375 on 2023/10/10.
//
#include<stdio.h>
#include "recode.h"
void recode(char str1[100],int p,int n) {
    p = 0, n = 0;

    for (; (p = str1[n])!='\0'; n++) {
        if (p > 'a'+4) {
            p -= 5;
        } else p = p + 21;
        str1[n] = p;
    }
    str1[n] = '\0';
    printf("%s", str1);
}

