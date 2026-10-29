//
// Created by 于川淇 on 2026/10/29.
//

void ShuZu(int k, int arr[], int len) {
    int num[100] = {0};
    for (int i = 0; i < len ;i++) {
        num[(i + k) % len]= arr[i];
    }
    for (int j = 0; j <len; j++) {
        arr[j] = num[j];
    }
}