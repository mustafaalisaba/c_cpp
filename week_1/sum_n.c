// Sum of n natural numbers
#include <stdio.h>

int main() {
    int n;
    int i; // global declaration
    int sum = 0;
    
    printf("Input limit:\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        sum = sum + i;

    printf("Sum of %d numbers is: %d", n, sum);
    return 0;
}