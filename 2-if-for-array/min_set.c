//
// Created by 于川淇 on 2026/10/12.
//

//int numbers[5] = {23, 56, 78, 13, 11}; 包含一个五个整数的数组 数组类型是int[5] 不是int[]
//for(初始的字句，可以放一个定义或者是表达式（这个只做一次，不参与循环）;条件表达式;迭代表达式)
//micro #define NUM 5 发生在编译之前 就把所有的NUM变成5了

//代码	                            数组类型	        是否是 VLA
//int a[5];	                        int[5]	        ❌
//#define NUM 5 ，然后 int a[NUM];	int[5]	        ❌
//int n = 5; 然后 int a[n];	        可变长度数组类型	✅

# define NUM 5
#include <stdio.h>

//第零次循环 i = 1 i<5
//第一次循环 number[1] vs min min = 23 i=2 i<5
int main(void) {
    int numbers[NUM] = {23,56,78,13,11};
    int min = numbers[0];
    for (int i=1;i<5;i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("min is %d",min);
    return 0;
}
