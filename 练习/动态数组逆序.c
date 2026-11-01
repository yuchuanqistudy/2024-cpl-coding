#include <stdio.h>
#include <stdlib.h>
//
// Created by 于川淇 on 2026/10/30.
//
//用户首先输入一个正整数 n，表示数组长度。
//使用 malloc 动态申请能存放 n 个整数的内存。
//用户输入这 n 个整数。
//编写一个独立的函数，通过指针参数，将数组中的元素顺序完全颠倒。
//输出逆序后的数组，最后用 free 释放内存。
void DianDao(int *arr, int len);
int main(void) {
    int len ;
    scanf("%d",&len);
    int *numbers = malloc(len *sizeof(*numbers));
    if (numbers == NULL) {
        exit(1);
    }

    for (int i = 0; i < len;i++) {
        scanf("%d",numbers+i);// &numbers[i]
    }
    DianDao(numbers, len);
    for (int i = 0;i < len ;i++) {
        printf("%d ",*(numbers + i));
    }
    free(numbers);
    return 0;
}

void DianDao(int *arr, int len) {
    int i = 0;
    while (i < len / 2) {
        int temp = *(arr + i);
        *(arr +i) = arr[len - i - 1];
        arr[len - i - 1] = temp;
        i++;
    }
}