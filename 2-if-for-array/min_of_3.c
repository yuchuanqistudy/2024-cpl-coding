#include <stdio.h>
//
// Created by 于川淇 on 2026/10/11.
//
int main(void) {
    int a =0;
    int b =0;
    int c =0;
    int min =0;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b) {
        if (a<c) { min=a;

        } else {//a<b and a>=c
            min = c;
        }
    }else {//a>=b
        if (b>c) {
            min =c;
        }else {//b<=c
            min = b;
        }
    }

    printf("min(%d,%d,%d)=%d",a,b,c,min);

    return 0;
}
