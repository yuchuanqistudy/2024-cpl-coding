//
// Created by 于川淇 on 2026/10/13.
//
#define LEN 10
#include <stdio.h>
int dictionary[LEN] = {1,1,2,3,5,8,13,21,34,55};

int main(void) {
    int key = 0;
    scanf("%d",&key);

    //to do search key in the dictionary
    int low = 0;
    int high = LEN -1;

    int index = -1;

    while (low <= high) {
        int mid = (low +high) /2;  //整数除法 9 / 2 = 4
        if (key == dictionary[mid]) {
            index = mid;
//          break;
            high = mid - 1; //找到最开始那个index
        }else if (key > dictionary[mid]){
            low = mid +1;
        }else {
            high = mid - 1;
        }
    }

    if (index == -1) {
        printf("NO FOUND");
    }else {
        printf("%d",index);
    }




    return 0;
}