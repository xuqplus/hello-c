#include <stdio.h>
#include "day00/f.c"
#include "day01/f.c"
#include "day02/f.c"
#include "day02/day02-for.c"
#include "day02/day02-variable-define.c"
#include "day02/day02-array.c"
#include "day02/day02-enum.c"
#include "day03/day03-pointer.c"
#include "day04/day04-function.c"
#include "day04/day04-string.c"
#include "day04/day04-stdio.c"
#include "day05/day05-file.c"

// 函数声明
void exexWhile();

extern int staticVariable;

int main() {
//    f();
//    floatPrint();
//    print();
//    execWhile();
//    execFor();

    /*staticVariable = 99; // 静态变量值被修改

    variableDefine(1, 2);
    printf("result=%d, ", variableDefine(1, 2));*/

//    execArray();
//    execEnum();

//    execPointer();
//    execPointerDef();
//    execPointer1();

//    testF();
//    testExecCallback();
//    testString01();
//    testString02();
//    testString03();

//    testIo();

    testFile();
    return 0;
}