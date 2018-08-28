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
