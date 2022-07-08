#include <stdio.h>

unsigned int factorial(unsigned int n); // Prototipo (tipo de parámetro y tipo de retorno)
unsigned int nOnes(unsigned int n);

int main() {
    unsigned int a = 5;
    unsigned int f;

    f = factorial(a);
    //f = nOnes(a);
    printf("%d",f);

    return 0;
}
// Factorial de n
unsigned int factorial(unsigned int n) {
    if(n > 0)
        return n * factorial(n - 1);
    else
        return 1;
}

// Número de 1s en la representación binaria
unsigned int nOnes(unsigned int n) {
    if(n == 0)
        return 0; // Caso base
    else
        if(n % 2 == 0)
            return nOnes(n/2);
        else
            return nOnes(n/2) + 1;
}