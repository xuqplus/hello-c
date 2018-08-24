#include <stdio.h>

void execFor() {
    int i = 0;
    for (; i < 10; i++) {
        printf("%d, ", i);
    }
}

void execWhile() {
    int i = 10;
    while (i--){
        printf("%d, ", i);
    }
}