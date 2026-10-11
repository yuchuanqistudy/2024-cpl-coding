//
// Created by 于川淇 on 2026/10/11.
//
//条件反过来 避免头重脚轻
//and && or||
// ! not 取反
// and和or and的优先级高 不要依赖于优先级 要加括号

#include <stdio.h>

int main(void) {
    int year = 0;
    int leap = 0;
    scanf("%d", &year);

    if (year % 4 != 0) {
        leap = 0;
    } else if (year % 100 != 0) {
        leap = 1;
    } else if (year % 400 != 0) {
        leap = 0;
    } else {
        leap = 1;
    }


    return 0;
}

//else后面是一个ifelse语句 花括号可以去掉

//else和if是连在一起的

//对于多重循环 可以找充要条件 eg leap=1的充要条件
//year % 4 == 0 and year % 100 != 0 或者 year % 400 == 0
//if（ (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0）{leap=1}else{leap=0}
//！(year % 100 == 0) 将条件反转