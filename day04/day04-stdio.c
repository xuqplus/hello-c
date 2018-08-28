#include <stdio.h>
#include <string.h>

void testIo00() {
    int c;
    printf("Please input a key:");
    c = getchar();
    printf("\nYou pressed: ");
    putchar(c);
    printf("\n");
    return;
    /*
     * C:\Users\xjplus\CLionProjects\untitled\cmake-build-debug\untitled.exe
Please input:ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0123
ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0123

You input: ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa
strlen(c): 99
Process finished with exit code 0
     */
}

void testIo01() {
    char c[100];
    printf("Please input:");
    gets(c);
    printf("\nYou input: ");
    puts(c);
    printf("\n strlen(c): %d", strlen(c));
    return;
}

void testIo02() {
    char c[100];
    int i;
    printf("Please input:");
    scanf("%s %d", c, &i);
    printf("\nYou input: %s %d", c, i);
    return;
}

void testIo03() {
    char c[100];
    printf("Please input:");
    fgets(c, 100, stdin);
    fputs(c, stdout);
//    fputs(c, stderr);
    printf("\nstrlen(c): %d", strlen(c));
    return;
    /*
     * Please input:ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0123
ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0123

You input: ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0ababababa0123

strlen(c): 103
Process finished with exit code 0
     */
}

void testIo() {
//    testIo00();
//    testIo01();
//    testIo02();
    testIo03();
}
