//
// Created by 于川淇 on 2026/10/14.
//
//scanf的返回值
//想读数据但是没有地方可以读，返回EOF（-1）
//有数据但不是我想要的数据类型，scanf返回的是在此之前成功的匹配到了多少个数据（>=0)
//成功读取一个数的时候返回的是1 scanf()的返回值表示成功读取并赋值了多少个数据项。
//读取用户不定个数的输入
//插入排序 冒泡排序

#define LEN  20
#include <stdio.h>

int main(void) {
    int numbers[LEN] = {0};
    //读取未知数量的输入
    int len = -1; //这样的话 len刚好和下标对齐
    while (scanf("%d",&numbers[++len]) != EOF) ;

    for (int i = 0;i<len;i++) {
        printf("%d ",numbers[i]);
    }
    printf("\n");

    for (int i =0;i < len - 1;i++) {
        int min = numbers[i];
        int min_index = i;
        for (int j = i; j < len; j++) {
            if (numbers[j] < min) {
                min = numbers[j];
                min_index = j;
            }
        }

        int temp = numbers[min_index];
        numbers[min_index]= numbers[i];
        numbers[i]=temp;
    }

    for (int i = 0;i<len;i++) {
        printf("%d ",numbers[i]);


    }

    return 0;
}