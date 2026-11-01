//
// Created by 于川淇 on 2026/10/30.
//
//用户输入一个正整数 n，表示数组长度。
//使用 malloc 动态申请能存放 n 个整数的内存。
//用户输入这 n 个整数。
//用户再输入一个整数 target。
//编写一个独立的函数，通过指针参数，删除数组中所有等于 target 的元素。
//输出删除后剩余元素的个数和所有剩余元素，最后调用 free。

#include <stdio.h>
#include <stdlib.h>
int DeleteTarget(int target,int *arr,int len);
int main(void) {
    int len = 0;
    scanf("%d", &len);
    int *numbers= malloc(len * sizeof (*numbers));
    if (numbers == NULL) {
        exit(1);
    }
    for (int i = 0; i < len; i++) {
        scanf("%d",numbers + i);
    }
    int target;
    scanf("%d",&target);
    int num = DeleteTarget(target,numbers,len);
    printf("%d\n",num);
    for (int i = 0;i < num; i++) {
        printf("%d ",*(numbers + i));
    }
    free(numbers);
    return 0;
}

int DeleteTarget(int target,int *arr,int len) {
    int num = 0;
    int i = 0;
    while ( i < len - num ) {
        if (*(arr + i) == target) {
            for (int j = i; j < len - num - 1; j++) {
                arr[j] = arr[j +1]; //*(arr+j) =*(arr +j + 1)
            }
            num++;
            }
        else {
            i++;
        }
        }
    return len - num;
    }

