//
// Created by 于川淇 on 2026/10/11.
//
//字符在计算机内部是整数
//%d 输出十进制整数类型 对应int
//printf怎么输出百分号本身 %%

#include <math.h>
#include <stdio.h>

int main(void) {
    char first_name[] = "Chuanqi"; //字符数组表示字符串 用双引号
    char last_name[] = "Yu";
    char gender = 'f' + 'A' - 'a'; //字符 用单引号 字符在计算机内是用整数编码的 变成大写
    int birth_year = 2006;
    int birth_month = 2;
    int birth_day = 2;
    char weekday[] = "Tuesday";
    int c = 99;
    int music = 90;
    int medicine = 95;
    double mean_grade = (c + music + medicine)/ 3.0;
    double sd_grade = sqrt((pow(c - mean_grade,2)+pow(music-mean_grade,2)+pow(medicine - mean_grade,2))/3.0);
    int rank = 2;

    printf("%s\t%s\t%c\n"
           "%.2d\t%.2d\t%.4d\t%.3s.\n"
           "%d\t%d\t%d\n"
           "%.3f\t%.3f\t%d%%",
           first_name,last_name,gender,
           birth_day,birth_month,birth_year,weekday,
           c, music, medicine,
           mean_grade, sd_grade,rank
           );
    //printf里面就两类，一类是普通字符，一类是%的，用于指定输出形式
    //%.3s	最多输出3个字符
    //%d	%.3d	至少输出3位数字，不足补0
    //c字符串以\0结束，所需数组大小=字符数量+1 每个位置占一个字节byte


    return 0;
}

//一个byte等于8个bit 一个bit对应0或1
//四个byte对应32个bit，可以表示2的32次方种状态
//常见的int是4bytes，00000000 00000000 00000000 00001010表示10
//char	1 Byte	'A'
//int	4 Bytes	 10
//double	8 Bytes	 3.14159

//必须类型匹配
//数据类型	正确的 printf 格式
//int	    %d
//double	%f、%e、%g
//char	    %c
//字符串	    %s