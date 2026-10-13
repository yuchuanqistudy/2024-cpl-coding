#include <stdio.h>
int main(void) {
    int n;
    int money[1001];
    int current =0;
    int max = 0;
    scanf("%d",&n);
    for (int i = 0; i<n;i++) {
        scanf("%d",&money[i]);
    }
    for (int j = 0;j<n;j++) {
        current = current +money[j];
        if (current<=0) {
            if (max>=current) {
                max = current;
            }
        }
        }


    max = -1 * max;
    printf("%d",max);


    return 0;
}