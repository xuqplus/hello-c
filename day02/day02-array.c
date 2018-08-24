#include <stdio.h>

void execPrintArray0(int *arr) {

}

void execPrintArray1(int arr[]) {

}

void execPrintArray2(int arr[4]) {
    printf("sizeof(arr)=%d, ", sizeof(arr)); // 8???
    printf("sizeof(*arr)=%d, ", sizeof(*arr)); // 4
    printf("arr.size()=%d, ", sizeof(arr) / sizeof(*arr));

    int i;
    for (i = 0; i < 19; i++) { // 越界了
        printf("arr[%d]=%d, ", i, arr[i]);
    }
}

void execArray() {
    int arr[4] = {0, 1, 2, 3};

    int i;
    for (i = 0; i < 4; i++) {
//        printf("arr[%d]=%d, ", i, arr[i]);
    }
    execPrintArray2(arr);
}
