//
// Created by 于川淇 on 2026/10/13.
//

#include <stdio.h>

int main(void) {
    int number = 0;
    int count = 0;
    scanf("%d",&number);

    //to do: number of digits

    do {
        number = number / 10;
        count++;
    } while (number > 0 );

    printf("%d",count);
    return 0;
}

//知道什么时候停止，考虑while