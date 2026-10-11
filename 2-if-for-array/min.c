#include <stdio.h>
//
// Created by 于川淇 on 2026/10/11.
//
int main(void) {
    int a = 0;
    int b =0;
    scanf("%d%d",&a,&b);
    int min = 0;
    if (a < b) {
        min = a;
    }else {
        min = b;
    }

    printf("min(%d,%d) = %d",a,b,min);
    return 0;
}