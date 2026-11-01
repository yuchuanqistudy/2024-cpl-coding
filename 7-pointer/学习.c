#include <stdio.h>
//
// Created by 于川淇 on 2026/10/29.
//
// printf("%p",&radius) 打印地址

#include <stdio.h>
void SwapValue(int *leftval,int *rightval);

int main(void) {
    int radius1 = 100;
    int radius2 = 200;
    //int *类型 从右往左读 指向int的类型
    int *ptr_radius1 = &radius1;
    int *ptr_radius2 = &radius2;
    ptr_radius1 = ptr_radius2; //左边左值  右边右值 把右边的值放到左边这个的内存空间里 指向同一个地址

    printf("%d\n",radius1);
    printf("%p\n",&radius1);
    return 0;
}


void SwapValue(int *leftval,int *rightval) {
    int temp = *leftval;
    *leftval = *rightval;
    *rightval = temp;
}

int main(void) {
    int i = 0;
    int min = 3;
    int numbers[5] = {1,3,46,6,2};
    SwapValue(&numbers[i],&numbers[min]);
    return 0;
}
//函数调用时，数组名等于数组的首地址 比如我们函数需要一个数组作为输入 输入numbers 和 &numbers[0] 是一样的 int *arr等于 int arr[]

//只要指针指向一块能够连续访问多个 int 的有效内存，我们就可以用下标访问这些整数。p[i] = * (p + i)