#include <stdio.h>

int staticVariable = 1; // 静态变量

int variableDefine(int a, int b) { // 形参
    // 局部变量
    int i; // 声明
    i = staticVariable; // 赋值
    printf("staticVariable=%d, ", staticVariable);
    printf("i=%d, ", i);
    printf("a=%d, b=%d, ", a, b);
    if (a > b) {
        return a;
    }
    return b;
}