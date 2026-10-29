//
// Created by 于川淇 on 2026/10/29.
//

int ZhaoPingHeng(int arr[], int len) {
    int index = 0;
    while (index<len) {
        int count1 = 0;
        int count2 = 0;
        for (int i = 0;i<index;i++) {
            count1 = count1 +arr[i];
        }
        for (int j = index +1;j<len;j++) {
            count2 = count2 +arr[j];
        }
        if (count1 == count2) {
            return index;
        }else {
            index++;
        }
    }
    return -1;
}