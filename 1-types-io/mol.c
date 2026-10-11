//
// Created by 于川淇 on 2026/10/11.
//

#include<stdio.h>

int main(void) {
    //不允许赋值语句对他修改
    const double MOl = 6.02E23;
    const int gram_per_mol = 32;
    int gram = 6;
    //这样会报错 因为都是整数
    double quantity = 1.0 * gram / gram_per_mol * MOl;
    //f是浮点数，e是科学计数法，指数 g是有效数字
    printf("quantity : %.3e\nquantity : %.5g%\n",
        quantity,quantity);

    return 0;
}
//f、e、g 不是不同的数据类型，而是 printf() 中不同的输出格式。它们都可以用来输出 double 类型的数据。