//
// Created by 于川淇 on 2026/10/15.
//
//sleep(1)
//system("clear") 动画效果
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SIZE 6
//const board里的元素不能被修改
const int board[SIZE][SIZE] = {
    {0},
    {0,1,1,0,0,0},
    {0,1,1,0,0,0},
    {0,0,0,1,1,0},
    {0,0,0,1,1,0},
    {0}
};

int main(void) {
    int old_board[SIZE+2][SIZE+2] = {0} ;
    for (int i=1;i<=SIZE;i++) {
        for (int j =1; j<=SIZE;j++) {
            old_board[i][j] = board[i-1][j-1];
        }
    }

    for (int count = 1; count <=10;count++) {
        int new_board[SIZE +2][SIZE +2]={0};
        for (int i=1;i<=SIZE;i++) {
            for (int j =1; j<=SIZE;j++) {
                int sum_neighbors =
                    old_board[i-1][j-1]+
                    old_board[i-1][j]+
                    old_board[i-1][j+1]+
                    old_board[i][j-1]+
                    old_board[i][j+1]+
                    old_board[i+1][j-1]+
                    old_board[i+1][j+1]+
                    old_board[i+1][j];
                if (old_board[i][j]) {
                    if (sum_neighbors == 2 || sum_neighbors == 3) {
                        new_board[i][j] = 1;
                    } else {
                        new_board[i][j] = 0;
                    }
                }else {
                    if (sum_neighbors==3) {
                        new_board[i][j] = 1;
                    }else {
                        new_board[i][j] = 0;
                    }
                }

            }
        }
        for (int i=1;i<=SIZE;i++) {
            for (int j =1; j<=SIZE;j++) {
                printf("%c",new_board[i][j] ? '*' : ' ');
            }
            printf("\n");
        }
        sleep(1);
        system("clear");



        for (int i=1;i<=SIZE;i++) {
            for (int j =1; j<=SIZE;j++) {
                old_board[i][j] = new_board[i][j];
            }

        }
    }
    return 0;
    }

