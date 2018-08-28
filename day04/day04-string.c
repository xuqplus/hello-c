#include <stdio.h>
#include <string.h>

void testString01() {
    char str[6] = {'h', 'e', 'l', 'l', 'o'};
    printf(str);
    printf("\n");
    printf("str=%s, ", str);

    str[5] = 'a';
    printf("str=%s, ", str);

    str[6] = 'a';
    str[7] = '\0';
    printf("str=%s, ", str);
}

void testString02() {
    char str0[6] = {'h', 'e', 'l', 'l', 'o'};
    printf("str0=%s, \n", str0);

    char str1[10] = {'a', 'b', 'c', 'd', 'e', '1', '2', '3', '4'};
    printf("str1=%s, \n", str1);

    strcpy(str0, str1);
    printf("str0=%s, \n", str0);
    printf("str1=%s, \n", str1);
}

void testString03() {
//    char str0[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // strcat() -> 0xC0000005
    char str0[16] = {'h', 'e', 'l', 'l', 'o', '\0'}; // 简单地说是因为数组长度不够
    printf("str0=%s, \n", str0);
    printf("&str0=%p, \n", &str0);
    printf("strlen(str0)=%d, \n", strlen(str0));

    char str1[10] = {'a', 'b', 'c', 'd', 'e', '1', '2', '\0', '4', '\0'};
    printf("str1=%s, \n", str1);
    printf("&str1=%p, \n", &str1);
    printf("strlen(str1)=%d, \n", strlen(str1));

    strcat(str0, str1);
    printf("str0=%s, \n", str0);
    printf("str1=%s, \n", str1);
    printf("strlen(str0)=%d, \n", strlen(str0));
}
