#include <stdio.h>
#include <float.h>
#include "day02-extern-i.c"

/*
 * c存储类
 * auto         所有局部变量默认存储类
 * register     快速读写, 可能使用寄存器
 * static       静态
 * extern       从其他文件引入
 */

static int staticIntI = 1;
extern int externIntI;

void print() {
    auto int autoIntI = 1;
    register int registerIntI = 1;

    printf("staticIntI=%d, ", staticIntI);
    printf("externIntI=%d, ", externIntI);
    printf("autoIntI=%d, ", autoIntI);
    printf("registerIntI=%d, ", registerIntI);
    return;
}