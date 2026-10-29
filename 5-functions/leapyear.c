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
int BinarySearch(int key, const int dic[], int len);
//dictionary[10]全局变量 可以放到main里面
const int dictionary[10] = {1,1,2,3,5,8,13,21,34,55};

int main(void) {
    int key = 0;
    scanf("%d",&key);
    //传一个数组只写数组名
    int index = BinarySearch(key,const dictionary,LEN);
    printf("%d",index);
}

//int dic[]这里是数组首地址，必须要有长度，否则我们不知道数组长度
int BinarySearch(int key, const int dic[], int len) {
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

//判读回文串
//len可写可不写，因为字符串以\n结束，我可以写个循环算一下
bool Ispara(const char str[], int len);

//选择排序
#define LEN 10
int find_min_index(const int num[],int len, int begin);
void Swap(int arr[], int left, int right_index);

int main(void) {
    int numbers[] = {1,4,2,4,5,6,2,14,57,32};
    for (int i = 0; i < LEN-1; i++) {

        int min_index = find_min_index(numbers,LEN,i);

        // 特别注意这里，传过来的是拷贝，实际数组没有发生变化
        // Swap(int numbers[i], int numbers[min_index] );
        Swap(numbers, numbers[i], numbers[min_index]);


    }

    for (int i = 0;i<LEN;i++) {
        printf("%d ",numbers[i]);
    }
    return 0;
}


int find_min_index(const int num[], int len, int begin) {
        int min = num[begin];
        int min_index = begin;
        for (int j = begin+1; j < len; j++) {
            if (num[j]<min) {
                min = num[j];
                min_index = j;
            }
        }
    return min_index;
}
//交换两个数
void Swap(int arr[], int left_index, int right_index) {
    int temp = arr[left_index];
    arr[left_index] = arr[right_index];
    arr[right_index] = temp;
}

//二维数组，一维数组是怎么访问的，怎么访问数组中的任意一个元素
//int arr[]  与长度大小无关
//int [][SIZE] 与行数无关
//想要访问int arr[2]： 需要首地址arr，需要数据类型int 首地址 + 2 * size of int
//想要访问int arr[2][3]
//在计算机中
//-----
//-----
//-----
//-----
//-----
//长成这样
//------------------------
//int arr[2][3]：需要首地址 + 2 * size of rows + 3 * size of int

//显示类型转换
double pi = 3.1415;
pi = pi - (int)pi;

//整形提升 通常是char再做运算时提升到int 但是int不会提升到long

int n = 1000000000000;
long long int m = n * n //这样会超出范围
long long int m = (long long)n * n   //后面那个n自动转换了 变成long long


int a = 27382639;
float b = a;
a - (int)b //输出不是0 int往float转 也不行 int可能落在gap里 无法编码

//int 像刻度间距固定为 1 的尺子；double 像刻度疏密会变化的尺子。能量到很远，不代表每个位置都能分得很细。

//比较浮点数大小 不能直接比较 应该用差小于tol