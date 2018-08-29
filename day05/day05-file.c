#include <stdio.h>

void testFile00() {
    FILE *file = NULL;

    file = fopen("C:/Users/xjplus/CLionProjects/untitled/day05/test.txt", "w");

    fprintf(file, "-- line 1 --\n");
    fputs("-- line 2 --\n", file);
    fclose(file);
}

void testFile01() {
    FILE *file = NULL;
    char line[100];

    char a[20], b[20], c[20], d[20], e[20];

    file = fopen("C:/Users/xjplus/CLionProjects/untitled/day05/test.txt", "r");

    fscanf(file, "%s %s %s %s\n", a, b, c, d);
    printf("%s %s %s %s\n", a, b, c, d);
    fscanf(file, "%s %s %s %s\n", a, b, c, d);
    printf("%s %s %s %s\n", a, b, c, d);

    fclose(file);
    file = fopen("C:/Users/xjplus/CLionProjects/untitled/day05/test.txt", "r");

    fgets(line, 100, file);
    printf(line);
    fgets(line, 100, file);
    printf(line);

    fclose(file);
}

void testFile() {
    testFile00();
    testFile01();
}
