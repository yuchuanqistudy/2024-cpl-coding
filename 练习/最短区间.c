//
// Created by 于川淇 on 2026/10/29.
//

int ZuiDuanQuJian(int arr[],int len, int target) {
    int index = 0;
    int zuiduanchangdu = len+1;
    int zuiduanindex = 0;
    while (index < len) {
        int total = 0;
        int changdu = 0;
        for (int i = index; i <len ;i++) {
            total = total + arr[i];
            changdu++;
            if (total == target && changdu < zuiduanchangdu) {
                zuiduanchangdu = changdu;
                zuiduanindex = index;
            }
        }
        index++;
    }
    if (zuiduanchangdu == len+1) {
        return -1;
    }else {
        return zuiduanindex;
    }
}





int zuiduanchangdu(int arr[],int len, int key) {
    int zuiduan = len +1;
    int zuiduanindex = -1;
    int index = 0;
    while (index < len) {
        int total = 0;
        for (int i = index; i <len; i++) {
            total = total + arr[i];
            if (total == key && i - index + 1 < zuiduan) {
                zuiduan = i - index + 1;
                zuiduanindex = index;
                break;
            }
        }
        index++;
    }
    return zuiduanindex;
}