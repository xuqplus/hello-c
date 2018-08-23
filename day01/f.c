#include <stdio.h>
#include <float.h>

void floatPrint() {
    printf("sizeof(float)=%lu, ", sizeof(float));
    printf("FLT_MAX=%E, ", FLT_MAX);
    printf("FLT_MIN=%E, ", FLT_MIN);
    printf("FLT_DIG=%d, ", FLT_DIG);

    float f = 1.01F;
    printf("f=%f, ", f);
    printf("sizeof(f)=%lu, ", sizeof(f));
    printf("sizeof(1)=%lu, ", sizeof(1));
    return;
}