//
// Created by 于川淇 on 2026/10/11.
//

#include<stdio.h>

int main(void) {
    int radius = 10;
    //&radius 取地址
    double circumference = 2 * 3.14159 * radius;
    double area = 3.14159 * radius * radius;
    printf("circumference = %.2f\narea = %.2f\n ",
        circumference,area);

    return 0;
}