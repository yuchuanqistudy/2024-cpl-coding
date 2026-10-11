//
// Created by 于川淇 on 2026/10/10.
//

/*
int main(void) {
    /*
     * 告诉用户游戏规则
     * 游戏端产生随机数
     * 用户输入数字
     * 接受输入，然后比大小，通知用户结果
     * 循环这样的交互直到用户赢了或输了

    printf("Computer will generate a number between 1 and 100.\n");

    return 0;
}


//while(条件){ 循环体
//}

//if(条件){条件成立就做这个}else if(){不成立做这个}else{}

//顺序 循环 条件 三种结构
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    /*
     * 告诉用户游戏规则
     * 游戏端产生随机数
     * 用户输入数字
     * 接受输入，然后比大小，通知用户结果
     * 循环这样的交互直到用户赢了或输了
     */

    printf("Computer will generate a number between 1 and 100.\n");
    printf("You have 7 chances to guess the number.\n");

    // Generate a random number
    srand(time(NULL));
    int number = rand() % 100 + 1;

    int guess;
    int count = 0;

    // Repeat until the player wins or runs out of chances
    while (count < 7) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        count++;

        if (guess == number) {
            printf("Congratulations! You win!\n");
            break;
        } else if (guess > number) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }
    }

    if (count == 7 && guess != number) {
        printf("You lose! The number was %d.\n", number);
    }

    return 0;
}