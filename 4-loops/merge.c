//
// Created by 于川淇 on 2026/10/15.
//

//两个表都有顺序，都是从小到大排的，怎么样排序

#define LEN_L 5
#define LEN_R 6
#include <stdio.h>

int main(void) {
    int L[LEN_L] = {1,3,5,7,9};
    int R[LEN_R] = {0,2,4,6,8,10};

    int l =0;
    int r = 0;

    while (l<LEN_L&&r<LEN_R) {
        if (L[l]> R[r]) {
            printf("%d",R[r]);
            r++;
        }else {
            printf("%d",L[l]);
            l++;
        }
        }
    if (l>=LEN_L) {
        while (r<LEN_R) {
            printf("%d",R[r]);
            r++;
        }
    if (r<=LEN_R){
        while (l<LEN_L) {
            printf("%d",L[l]);
            l++;
            }
        }

        return 0;
    }
}