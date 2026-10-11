//
// Created by 于川淇 on 2026/10/11.
//
#include <stdio.h>

int main(void) {
    int year = 0;
    int leap =0;
    scanf("%d",&year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                leap = 1;
            }else {
                leap =0;
            }
        }else {
            leap = 1;
        }
    }else {
        leap = 0;
    }

    printf("leap = %d",leap);

    return 0;
}
