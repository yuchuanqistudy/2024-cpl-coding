//
// Created by 于川淇 on 2026/10/11.
//
//scanf 三种
//空白符 空格 \t \n
//普通字符
//转换符 %

#include <stdio.h>

int main(void) {
    char first_name[50];
    char last_name[50];
    char gender;

    int birth_year;
    int birth_month;
    int birth_day;
    char weekday[20];

    int c_score;
    int music_score;
    int medicine_score;

    double mean;
    double sd;
    int rank;

    scanf("%s%s %c %d-%d-%d%s %d%d%d %lf%lf %d%%", //要求我们的输入中有%%，但%%不会被存到变量里，是我们输入时必须有% 这里告诉我们输入应该满足的格式 以及%c前面加空格才可以跳过前空白符，否则直接读取下一个
      first_name, last_name, &gender,
      &birth_year, &birth_month, &birth_day, weekday,
      &c_score, &music_score, &medicine_score,
      &mean, &sd, &rank);  //scanf() 需要知道变量存储在哪里，才能把用户输入的数据写进去。字符串不用&

    printf("Name: %s %s\n", first_name, last_name);
    printf("Gender: %c\n", gender);
    printf("Birthday: %d-%d-%d\n", birth_year, birth_month, birth_day);
    printf("Mean: %.2f\n", mean);
    printf("SD: %.2f\n", sd);
    printf("Rank: %d%%\n", rank);

    return 0;
}
