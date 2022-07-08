#include <stdio.h>

void test();

int main() {
    int a = 2, b = 3;

    if (a < b) {
        int t;
        t = a;
        a = b;
        b = t;
    }

    printf("a = %d, b = %d\n", a, b);
    test();
    return 0;
}

void test() {
    int mat[3][4];
    for (int i=0; i < 3; ++i)
        for (int j=0; j < 4; ++j)
            mat[i][j] = i + j;
    printf("mat");
}