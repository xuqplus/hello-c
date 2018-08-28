#include <stdio.h>

int (*f_p)(int, int);

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

void testF() {
    f_p = &max;
    int c = f_p(1, 2);
    printf("c=%d, ", c);
}

// 回调函数, 函数指针用作参数
int callback() {
    printf("callback executed ..\n");
    return 0;
}

void execCallback(int (*callback)()) {
    for (size_t i = 0; i < 10; i++) {
        callback();
    }
}

void testExecCallback() {
    execCallback(callback);
}