#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testOc00() {
    char *cp;
    cp = malloc(5 * sizeof(char));
    if (NULL == cp) {
        fprintf(stderr, "error, cp == NULL\n");
    } else {
        fprintf(stdout, "ok, good.\n");
    }
    strcpy(cp, "abc12abc12abc12");
    printf("%s\n", cp);

    printf("%p\n", &cp);
    printf("%p\n", *cp);
    printf("%p\n", cp);
    printf("%d\n", sizeof(cp));
}

void testOc01() {
    char *cp0, *cp1;
    cp0 = malloc(5);
    cp1 = malloc(5 * sizeof(char));

    strcpy(cp0, "abc05abc10abc15abc20abc25abc30abc35abc40abc45");
//    cp1 = ""; // 内存溢出
/*
 * C:\Users\xjplus\CLionProjects\untitled\cmake-build-debug\untitled.exe
000000000061FDD8 45 abc05abc10abc15abc20abc25abc30abc35abc40abc45
000000000061FDD0 13 c35abc40abc45

Process finished with exit code 0
 */

    printf("%p %d %s\n", &cp0, strlen(cp0), cp0);
    printf("%p %d %s\n", &cp1, strlen(cp1), cp1);
}

void testOc() {
//    testOc00();
    testOc01();
}
