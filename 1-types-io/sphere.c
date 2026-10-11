//
// Created by 于川淇 on 2026/10/11.
//
#include <math.h>
#include<stdio.h>

int main(void) {
    int radius = 100;
    const double PI = 3.14159 ;//如果是const，变量名用大写

//magic number

    double surface_area = 4 * PI * pow(radius,2);
//c语言中，整数除以整数必须是整数
    double volume = 4.0 / 3 * PI * pow(radius,3);

//%15.4f 只能控制数字本身的宽度，不能控制数字前面的文字长度。所以要把数字写在前面
//这是至少15个，如果有20个，还是按照20个输出  最小宽度
    printf(" %-15.4f : surface_area\n %-15.4f : volume\n",
        surface_area, volume);
    return 0;
}