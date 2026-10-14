//
// Created by 于川淇 on 2026/10/14.
//
#define LEN 21
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char string[LEN]= "";
    printf("输入最多20个字符");
    scanf("%20s",string);

    bool pa = true;
    int n = 0;

    while (string[n]!='\0') {
        n++;
    }

    for (int i=0,j=n-1;i<j;i++,j--) {
        if (string[i]!= string[j]) {
            pa = false;
            break;
        }
    }

    if (pa) {
        printf("huiwenshu");
    }else {
        printf("no");
    }

    return  0;
}
