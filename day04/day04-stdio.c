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
}

void testIo01() {
    char c[100];
    printf("Please input:");
    gets(c);
    printf("\nYou input: ");
    puts(c);
    return;
}

void testIo() {
//    testIo00();
    testIo01();
}
