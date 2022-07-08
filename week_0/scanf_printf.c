#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a value :"); // Prints a constant string
    scanf("%s %d", str, &i); // Scans a string value and an integer value
    printf("You entered: %s, %d ", str, i); // Prints string and integer
    return 0;
}