//
// Created by 于川淇 on 2026/10/28.
//

#include <stdbool.h>
#include <stdio.h>

//函数声明
bool IsLeapYear(int year);



//函数实现
bool IsLeapYear (int year) {
    bool leap = (year % 4 == 0 && year % 100 != 0) || year % 100 != 0 ;
    return leap;
}


//primes

bool IsPrime(int number);

int main(void) {
    int number = 0;
    scanf("%d",&number);
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (IsPrime(i)) {
            count++;
        }
    }
    return 0 ;
}

bool IsPrime(int number) {
    for (int j = 2; j * j < number; j++) {
        if (number % j == 0) {
            return false;
        }
    }
    return true;
}

//表示无返回值
void PrintCharacter(char ch, int number);
int main(void) {
    int lines = 0;
    scanf("%d",&lines);
    for (int i = 0;i <lines; i++) {
        PrintCharacter(' ' ,lines - 1 - i);
        PrintCharacter('*', 2 * i + 1);
        if (i != lines - 1) {
            printf("\n");
        }
    }
}

//void表示函数不返回值
void PrintCharacter(char ch, int number) {
    for (int j = 0; j < number; j++) {
        printf("%c",ch);
    }
}


void NewLIne(void);
//不接受参数，无返回值
void NewLIne(void) {
    printf("\n");
}

//调用的时候 用void NewLIne()


//二分查找

#define LEN  10
int BinarySearch(int key, int dic[], int len);
//dictionary[10]全局变量 可以放到main里面
int dictionary[10] = {1,1,2,3,5,8,13,21,34,55};

int main(void) {
    int key = 0;
    scanf("%d",&key);
    //传一个数组只写数组名
    int index = BinarySearch(key,dictionary,LEN);
    printf("%d",index);
}

//int dic[]这里是数组首地址，必须要有长度，否则我们不知道数组长度
int BinarySearch(int key, int dic[], int len) {
    int low = 0;
    int high = len - 1;
    while (low <= high) {
        int bi = ( high + low ) / 2;
        if (dic[bi] == key) {
            return bi;
        }else if (key > dic[bi] ) {
            low = bi + 1;
        }else {
            high = bi - 1;
        }
    }
    return -1;
}