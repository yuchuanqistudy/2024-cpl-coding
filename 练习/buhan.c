//
// Created by 于川淇 on 2026/10/29.
//

#include <stdbool.h>
#include <stdio.h>
bool YouSeven(int num);
int ZhaoSeven(int len, int arr[]);
#define LEN 4

int main(void) {
    int numbers[] = {17,77,46,665};
    int index = ZhaoSeven(LEN, numbers);
    printf("index is %d",index);
}




int ZhaoSeven(int len, int arr[]) {
    int index = 0;
    while(index < len) {
        if (YouSeven(arr[index])) {
            index++;
            }else {
                return index;
            }
    }
    return -1;
}

bool YouSeven(int num) {
    while (num != 0) {
        int yushu = num % 10;
        if (yushu == 7) {
            return true;
        }else {
            num = num / 10;
        }
    }
    return false;
}