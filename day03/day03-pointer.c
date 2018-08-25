#include <stdio.h>

void execPointer() {
    int var0;
    int var1[10];
    printf("var0's address=%p, ", &var0);
    printf("var1[10]'s address=%p, ", &var1);
    return;
}

void execPointer1() {
    int *p = NULL;
    printf("p=%p, ", p);
    printf("p=%p, ", &p);

    int i = 100;
    int *pi = &i;
    printf("&pi=%p, ", &pi);
    printf("*pi=%p, ", *pi);
    printf("*pi=%d, ", *pi); // 10进制
    printf("pi=%p, ", pi);
}

void execPointerDef() {
    int *ip;
    int *nip = NULL;
    float *fp;
    float *nfp = NULL;
    double *dp;
    double *ndp = NULL;
    char *cp;
    char *ncp = NULL;

    printf("ip=%p, ", ip);
    printf("fp=%p, ", fp);
    printf("dp=%p, ", dp);
    printf("cp=%p, ", cp);

    printf("&ip=%p, ", &ip);
    printf("&fp=%p, ", &fp);
    printf("&dp=%p, ", &dp);
    printf("&cp=%p, ", &cp);

    printf("nip=%p, ", nip);
    printf("nfp=%p, ", nfp);
    printf("ndp=%p, ", ndp);
    printf("ncp=%p, ", ncp);

    return;
}