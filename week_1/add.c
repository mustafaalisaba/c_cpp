// Program for add two numbers in C
#include <stdio.h>

int main() {
    int a, b; int sum; // all variables declared first (K&R)

    printf("Input two numbers:\n");
    scanf("%d%d", &a, &b); // read from console, console is stdin file, scanf is a variadic function
// addesses of a and b needed in scanf
    sum = a+b;

    printf("Sum of %d and %d", a, b); // Formatting (%d) needed for variables
    printf(" is : %d\n", sum);
}