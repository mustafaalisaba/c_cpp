// Sqrt in C
#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("Input number:\n");
    scanf("%lf", &x); // lf stands for "long float" formatting
    
    y = sqrt(pow(x, 2)); // computes the sqrt of the power of 2 in base x

    printf("%lf^2 = %lf\n", x, pow(x, 2)); // computes the power of 2 in base x
    printf("sqrt(%lf) = %lf\n", pow(x, 2), y); 

    return 0;
}