/* Recorrer un arreglo */
#include <stdio.h>

int main() {
    int myArray[] = {1,2,3};
    int i;

    for (i = 0; i < 3; i++)
        printf("%d\n", myArray[i]);
    return 0;
}