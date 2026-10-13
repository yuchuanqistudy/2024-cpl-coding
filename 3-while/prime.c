//
// Created by 于川淇 on 2026/10/13.
//
//for循环里i j的作用域 整个for循环循环体
//bool prime = true    意味着等于1 如果是指示变量 用boo

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int n;
    int count =0;
    scanf("%d",&n);
    for (int i = 2;i< n+1;i++) {
        bool prime = true;
        for (int j = 2; j < i ;j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
    if (prime) {
        count++;
        printf("%d ",i); //我希望输出的数之间有空格
    }

    }
    printf("\n%d",count);
    return 0;
}
