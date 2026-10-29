//
// Created by 于川淇 on 2026/10/29.
//
#define LEN 11
#include <stdio.h>

int ZhaoZhengShu(int arr[], int len);
int main(void) {
    int numbers[] = {1,4,5,2,2,54,6,2,1,4,5};
    int index = ZhaoZhengShu(numbers, LEN);
    printf("Index is %d",index);

}



int ZhaoZhengShu(int arr[], int len) {
    int index = 0;
    while (index < len) {
        int repeat = 0;
        for (int j = 0 ; j<len;j++) {
            if (arr[index] == arr[j] && j != index) {
                index++;
                repeat = 1;
                break;
            }
        }
        if (repeat == 0) {
            return index;
        }
    }
    return -1;
}