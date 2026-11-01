#include <stdio.h>
#include <stdlib.h>
//
// Created by 于川淇 on 2026/10/30.
//
//编写一个 C 程序，删除整数数组中连续重复的元素，每一组连续相同的数字只保留一个。
//具体要求：
//1. 用户输入正整数 n，然后输入 n 个整数。
//2. 使用 malloc 动态申请数组空间。
//3. 编写独立函数 int Compress(int *arr, int len)，直接修改原数组，并返回压缩后的有效长度。
//4. 不能申请第二个数组，剩余元素的相对顺序不能改变。
//5. 输出有效长度和压缩后的数组，最后使用 free 释放内存。
int Compress(int *arr,int len);
int main(void) {
    int len;
    scanf("%d",&len);
    int *numbers = malloc( len * sizeof(*numbers));
    if (numbers == NULL) {
        exit(1);
    }
    for (int i = 0; i < len; i++) {
        scanf("%d",numbers + i);
    }
    int num = Compress(numbers,len);
    printf("%d\n",num);
    for (int i = 0; i < num; i++) {
        printf("%d",*(numbers+i));
    }
    free(numbers);
    return 0;
}
int Compress(int *arr,int len) {
    int write = 1;
    for (int read = 1; read < len; read++) {
        if (arr[read] != arr[write -1]) {
            arr[write] =arr [read];
            write++;
        }
    }
    return write;
}