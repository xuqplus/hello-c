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

void testIo() {
    testIo00();
}
